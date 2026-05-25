script_dir = fileparts(mfilename('fullpath'));
data_folder  = fullfile(script_dir, '..', 'data');

if ~exist(data_folder, 'dir')
    mkdir(data_folder);
end
%domain specifications
Lx = 2 * pi;
Ly = 2 * pi;

dx = 2*pi/100;
dy = 2*pi/100;

x_axis = (0:dx:Lx);
y_axis = (0:dy:Ly);

N_x = int32(length(x_axis));
N_y = int32(length(y_axis));

%precomputing B.C & I.C. to save time in algorithm.
B = (2*(sin(2*x_axis(2:N_x-1)) + sin(5*x_axis(2:N_x-1)) + sin(7*x_axis(2:N_x-1)))).';
rng(42);
U_init=2*rand(N_x,N_y)-1;

%start parallel processing
if isempty(gcp('nocreate')), parpool; end

%convergence criteria parameters
epsilon = 1e-5;
max_iter=int32(60000);
max_residual=1e10;
check_interval=int32([50 20 2]);

%theoretical optimal omega1,2
rho = cos(pi / double(N_x));
omega_1_theory = 1 / (1 - rho/sqrt(2));
omega_2_theory = 1 / (1 + rho/sqrt(2));
best_w1=0;
best_w2=0;

%scan parameters:
resolution=1; %determines number of scans taken to narrow in on optimal omega
window_scale_factor = 100; %width/height of scan search equals this times d_omega
d_omega=0.01; %spacing in parameter space search


%min/max omega for a dedicated SRJ search
%omega_1_min = 1.0;
%omega_1_max = 4.0;
%omega_2_min = 0.0;
%omega_2_max = 1.0;
%adjusttag = ''; 

%min/max omega used for full parameter scan
%omega_1_min = 0;
%omega_1_max = 4.0;
%omega_2_min = 0.0;
%omega_2_max = 4;
%adjusttag = 'fullplot'; %tag to adjust filename for broad scan

%min/max omega used for scan around jacobi omega values
omega_1_min = 0.95;
omega_1_max = 1.05;
omega_2_min = 0.95;
omega_2_max = 1.05;
d_omega=0.001;
adjusttag = 'jacobizoom'; %tag to adjust filename for jacobi zoom scan

%find iterations and residual history for theoretical best omega
[best_iters_theory, res_history_theory] = run_SRJ_core_mex(omega_1_theory, omega_2_theory, ...
            N_x, N_y, dx, U_init, B, max_iter, max_residual, int32(2), epsilon, true);


for d = 1:resolution
    %figure for live data updates
    fig = figure('Name', sprintf('Live SRJ Optimization - Pass %d', d), 'NumberTitle', 'off');

    
    best_iters = inf;
    if d==1
        
        omegastep=d_omega;

        omega_1_lower = omega_1_min;
        omega_1_upper = omega_1_max;
        omega_2_lower = omega_2_min;
        omega_2_upper = omega_2_max;
    end

    if d>1
        %each successive scan reduces the omega spacing by factor of 1/10. 
        %effectively, if scale factor is 100, then scan window is
        %10*d_omega

        omegastep = d_omega * 10^(-d+1);
        window = window_scale_factor * omegastep;
        
        %ensure scan window is bounded within original search window
        omega_1_lower = max(omega_1_min, best_w1 - window);
        omega_1_upper = min(omega_1_max, best_w1 + window);
        omega_2_lower = max(omega_2_min, best_w2 - window);
        omega_2_upper = min(omega_2_max, best_w2 + window);

    end

    omega_1_list  = omega_1_lower : omegastep : omega_1_upper;
    omega_2_list = omega_2_lower : omegastep : omega_2_upper;
    
    n1=length(omega_1_list);
    n2=length(omega_2_list);
    iterationdata=inf(n1,n2);
    
    %below is for generating live plots of data
    live_matrix = NaN(n2, n1);

    hImg = imagesc(omega_1_list, omega_2_list, live_matrix);
    set(gca, 'YDir', 'normal');
    axis equal tight;
    colorbar;
    clim([0 max_iter])

    xlabel('\omega_1 (over-relaxation)')
    ylabel('\omega_2 (under-relaxation)')
    title('SRJ Iterations to Convergence Initial Scan')
    colormap(jet)
    
    %update data live from parallel processing.
    q = parallel.pool.DataQueue;
    afterEach(q, @(data) update_live_plot(hImg, data));

    drawnow;
    
    %iterate through omega space and record iterations for each parameter
    %combination
    parfor a=1:n1
        row = inf(1,n2);
        for b = 1:n2
            [row(b), ~] = run_SRJ_core_mex(omega_1_list(a), omega_2_list(b), ...
                N_x, N_y, dx, U_init, B, max_iter, max_residual, check_interval(d), epsilon, false);

            
        end
        iterationdata(a,:)=row;
        
        send(q, {a, row});
    end
    
    [best_iters, I] = min(iterationdata(:));
    [best_a, best_b] = ind2sub(size(iterationdata), I);
    
    %store best omega values in scan
    best_w1 = omega_1_list(best_a);
    best_w2 = omega_2_list(best_b);
    
    %resimulate with the best omega values and obtain residual data,
    %truncate at the point where convergence is met.
    [~, res_history] = run_SRJ_core_mex([best_w1], [best_w2], ...
                N_x, N_y, dx, U_init, B, max_iter, max_residual, int32(2), epsilon, true);

    res_history = res_history(1:best_iters);
    
    fprintf('Pass %d: best_w1=%.6f, best_w2=%.6f, iters=%d\n', d, best_w1, best_w2, best_iters);
    
    filename = "SRJ_Sim_Res_" + d + adjusttag +".mat";

    fullpath = fullfile(data_folder, filename);

    save(fullpath,'d_omega','iterationdata','window_scale_factor','omega_1_list','omega_2_list','best_w1','best_w2','best_iters','best_iters_theory','res_history','res_history_theory');
end  

%background function to update live plot.
function update_live_plot(hImg, data)
    col_idx    = data{1};
    row_values = data{2};
    
    if ishandle(hImg)
        hImg.CData(:, col_idx) = row_values(:);
        
        drawnow limitrate;
    end
end