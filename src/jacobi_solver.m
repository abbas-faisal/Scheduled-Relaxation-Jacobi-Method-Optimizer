script_dir = fileparts(mfilename('fullpath'));
data_folder  = fullfile(script_dir, '..', 'data');

if ~exist(data_folder, 'dir')
    mkdir(data_folder);
end

Lx = 2 * pi;
Ly = 2 * pi;

dx = 2*pi/100;
dy = 2*pi/100;

x_axis = (0:dx:Lx);
y_axis = (0:dy:Ly);

N_x = int32(length(x_axis));
N_y = int32(length(y_axis));

%precomputing B.C to save time in algorithm.
B = (2*(sin(2*x_axis(2:N_x-1)) + sin(5*x_axis(2:N_x-1)) + sin(7*x_axis(2:N_x-1)))).';
rng(42);
U_init=2*rand(N_x,N_y)-1;

epsilon = 1e-5; %convergence criteria
max_iter=int32(60000);
max_residual=1e10;
check_interval=2;


[iters,res_history]=run_Jacobi_core_mex(N_x, N_y, dx, U_init, B, max_iter, max_residual, check_interval, epsilon);

res_history = res_history(1:iters);

            
        
    
filename = "Jacobi_Sim.mat";

fullpath = fullfile(data_folder, filename);

save(fullpath,'iters','res_history'); 