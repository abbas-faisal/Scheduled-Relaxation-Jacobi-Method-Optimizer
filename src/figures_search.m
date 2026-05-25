script_dir = fileparts(mfilename('fullpath'));
data_folder  = fullfile(script_dir, '..', 'data');
plots_folder = fullfile(script_dir, '..', 'plots');

if ~exist(plots_folder, 'dir')
    mkdir(plots_folder);
end


filename = "Jacobi_Sim.mat";

fullpath = fullfile(data_folder, filename);

Jacobi_sim = load(fullpath,'iters','res_history');

greycolor = [0.8, 0.8, 0.8];


N=100;

omega_1_theory=1/(1-((cos(pi/N))/sqrt(2)));
omega_2_theory=1/(1+((cos(pi/N))/sqrt(2)));

%since search was conducted on these values for the SRJ, specifying them
%here to generate proper window
omega_1_min = 1.0;
omega_1_max = 4.0;
omega_2_min = 0.0;
omega_2_max = 1.0;

%generate plots for each resolution scan.
resolution = 3; %define per what is specified in SRJ_Optimizer

for d=1:resolution
    max_iter=int32(60000);
    
    filename = "SRJ_Sim_Res_" + d +".mat";

    fullpath = fullfile(data_folder, filename);

    SRJ_sim = load(fullpath,'d_omega','iterationdata','window_scale_factor','omega_1_list','omega_2_list','best_w1','best_w2','best_iters','best_iters_theory','res_history','res_history_theory');
     

    figure
    imagesc(SRJ_sim.omega_1_list, SRJ_sim.omega_2_list, SRJ_sim.iterationdata')
    set(gca, 'YDir', 'normal')
    axis equal tight
    colorbar
    
    clim([0 max_iter]);
    
    hold on
    
    %plot Optimal SRJ
    plot(SRJ_sim.best_w1, SRJ_sim.best_w2, 'wx', 'MarkerSize', 14, 'LineWidth', 2, ...
         'DisplayName', sprintf('Optimal SRJ (%4g,%4g)\n(%d iters)', SRJ_sim.best_w1,SRJ_sim.best_w2,SRJ_sim.best_iters));
    
    %if its the first scan, plot Jacobi omega values for reference
    if d==1
        set(gcf,'position',[100,100,1000,600])
        plot(1.0, 1.0, 'w*', 'MarkerSize', 12, 'LineWidth', 2.5, ...
         'DisplayName', sprintf('Standard Jacobi (1,1)\n(%d iters)', Jacobi_sim.iters));

    end
    %If it's the final scan, plot the theoretical optimal SRJ omega values
    if d==resolution
        plot(omega_1_theory, omega_2_theory, 'wo', 'MarkerSize', 12, 'LineWidth', 2, ...
         'DisplayName', sprintf('Theoretical Optimal SRJ (%4g,%4g)\n(%d iters)', omega_1_theory,omega_2_theory,SRJ_sim.best_iters_theory));

    end
    
    %if there are further searches, create a window around the found point
    %to indicate where exactly in the domain the next search is taking
    %place
    if d<resolution
        step = SRJ_sim.d_omega * 10^(-d);
        window = SRJ_sim.window_scale_factor * step;
        
        
        omega_1_lower = max(omega_1_min, SRJ_sim.best_w1 - window);
        omega_1_upper = min(omega_1_max, SRJ_sim.best_w1 + window);
        omega_2_lower = max(omega_2_min, SRJ_sim.best_w2 - window);
        omega_2_upper = min(omega_2_max, SRJ_sim.best_w2 + window);

        delta1 = omega_1_upper-omega_1_lower;
        delta2 = omega_2_upper-omega_2_lower;

        rectangle('Position', [omega_1_lower, omega_2_lower, ...
                delta1, delta2], ...
                'EdgeColor', 'w', 'LineWidth', 2, 'LineStyle', '--', ...
                'HandleVisibility', 'off')
    end
    
    xlabel('\omega_1 (over-relaxation)')
    ylabel('\omega_2 (under-relaxation)')
    title(sprintf('SRJ Iterations to Convergence Plot Scan %d', d));
    colormap(jet)

    legend('Location', 'northeast', 'TextColor', 'k', 'Color', greycolor, 'FontSize', 8);
    hold off
    filename_plot = "Omega_Space_Graph_Iteration_" + d +".png";
    
    filepath = fullfile(plots_folder, filename_plot);

    exportgraphics(gcf, filepath, 'Resolution', 300);

end

%generate residual plots of each method
figure

semilogy(1:length(Jacobi_sim.res_history), Jacobi_sim.res_history, ...
    'r-', 'LineWidth', 2, ...
    'DisplayName', sprintf('Jacobi Method (1,1)')...
    )
hold on;
semilogy(1:length(SRJ_sim.res_history), SRJ_sim.res_history, ...
    'b-', 'LineWidth', 2, ...
    'DisplayName', sprintf('Optimal SRJ (\\omega_1=%.4f, \\omega_2=%.4f)', SRJ_sim.best_w1, SRJ_sim.best_w2)...
    )
semilogy(1:length(SRJ_sim.res_history_theory), SRJ_sim.res_history_theory, ...
    'g-', 'LineWidth', 2, ...
    'DisplayName', sprintf('Optimal SRJ (\\omega_1=%.4f, \\omega_2=%.4f)', omega_1_theory, omega_2_theory)...
    )
yline(1e-5, '--r', 'DisplayName', 'Epsilon Convergence Criteria');
hold off;


title('Jacobi & SRJ residuals vs. Iterations (k)');
xlabel('Iteration (k)')
ylabel('Residual r^k')
legend('Location', 'northeast', 'FontSize', 10);
grid on;

filename_plot = "SRJ_Jacobi_Residuals.png";

filepath = fullfile(plots_folder, filename_plot);

exportgraphics(gcf, filepath, 'Resolution', 300);

%Full Scan
filename = "SRJ_Sim_Res_1fullplot.mat";

fullpath = fullfile(data_folder, filename);

SRJ_full = load(fullpath,'d_omega','iterationdata','window_scale_factor','omega_1_list','omega_2_list','best_w1','best_w2','best_iters','best_iters_theory','res_history','res_history_theory');
    
figure
imagesc(SRJ_full.omega_1_list, SRJ_full.omega_2_list, SRJ_full.iterationdata')
set(gca, 'YDir', 'normal')
axis equal tight
colorbar

clim([0 max_iter]);


hold on

%plot each of the methods, including a symmetric point for the optimal SRJ
%if omega1,2 were swapped.
plot(SRJ_sim.best_w1, SRJ_sim.best_w2, 'wx', 'MarkerSize', 14, 'LineWidth', 2.5, ...
    'DisplayName', sprintf('Optimal SRJ 1 (%4g,%4g)\n(%d iters)', SRJ_sim.best_w1,SRJ_sim.best_w2,SRJ_sim.best_iters));

plot(SRJ_sim.best_w2, SRJ_sim.best_w1, 'w+', 'MarkerSize', 14, 'LineWidth', 2.5, ...
    'DisplayName', sprintf('Optimal SRJ 2 (%4g,%4g)\n(%d iters)', SRJ_sim.best_w2,SRJ_sim.best_w1,SRJ_sim.best_iters));

set(gcf,'position',[50,50,1000,1000])
plot(1.0, 1.0, 'w*', 'MarkerSize', 12, 'LineWidth', 2.5, ...
    'DisplayName', sprintf('Standard Jacobi (1,1)\n(%d iters)', Jacobi_sim.iters));

plot(omega_1_theory, omega_2_theory, 'wo', 'MarkerSize', 12, 'LineWidth', 2.5, ...
    'DisplayName', sprintf('Theoretical Optimal SRJ (%4g,%4g)\n(%d iters)', omega_1_theory,omega_2_theory,SRJ_sim.best_iters_theory));

xlabel('\omega_1')
ylabel('\omega_2')
title(sprintf('SRJ Iterations to Convergence Plot Full Scan'));
colormap(jet)

legend('Location', 'northeast', 'TextColor', 'k', 'Color', greycolor, 'FontSize', 8);

hold off
filename_plot = "Omega_Space_Graph_FullScan_.png";

filepath = fullfile(plots_folder, filename_plot);

exportgraphics(gcf, filepath, 'Resolution', 300);

%Jacobi Zoom
filename = "SRJ_Sim_Res_1jacobizoom.mat";

fullpath = fullfile(data_folder, filename);

SRJ_full = load(fullpath,'d_omega','iterationdata','window_scale_factor','omega_1_list','omega_2_list','best_w1','best_w2','best_iters','best_iters_theory','res_history','res_history_theory');
    
figure
imagesc(SRJ_full.omega_1_list, SRJ_full.omega_2_list, SRJ_full.iterationdata')
set(gca, 'YDir', 'normal')
axis equal tight
colorbar
converged_points = SRJ_sim.iterationdata(SRJ_sim.iterationdata < max_iter);


clim([0 max_iter]);


hold on

%plot only Jacobi
set(gcf,'position',[100,100,600,600])
plot(1.0, 1.0, 'w*', 'MarkerSize', 12, 'LineWidth', 2.5, ...
    'DisplayName', sprintf('Standard Jacobi (1,1)\n(%d iters)', Jacobi_sim.iters));

xlabel('\omega_1')
ylabel('\omega_2')
title(sprintf('SRJ Iterations to Convergence Jacobi Parameter Zoom'));
colormap(jet)

legend('Location', 'northeast', 'TextColor', 'k', 'Color', greycolor, 'FontSize', 8);

hold off
filename_plot = "Omega_Space_Graph_Jacobizoom_.png";

filepath = fullfile(plots_folder, filename_plot);

exportgraphics(gcf, filepath, 'Resolution', 300);


