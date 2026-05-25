%utilizing MATLAB Coder to generate mex files for all Laplace Equation
%solvers. Greatly speeds up simulation process.
N_x=101; N_y=101;
dx_val=2*pi/100;

U_init_ex = zeros(N_x,N_y);

B_ex = zeros(N_x-2, 1);

cfg = coder.config('mex');
cfg.GenerateReport = true;       
cfg.OptimizeReductions = true;
cfg.EnableOpenMP = true;

U_type = coder.typeof(0, [Inf, Inf], [true, true]); 
B_type = coder.typeof(0, [Inf, 1], [true, false]);

codegen run_SRJ_core ...
    -config cfg ...
    -args {0.0, 0.0, int32(N_x), int32(N_y), dx_val, U_type, B_type, int32(60000), 0.0, int32(20), 0.0, true} ...
    -o run_SRJ_core_mex

codegen run_SRGS_core ...
    -config cfg ...
    -args {0.0, 0.0, int32(N_x), int32(N_y), dx_val, U_type, B_type, int32(60000), 0.0, int32(20), 0.0, true} ...
    -o run_SRGS_core_mex

codegen run_Jacobi_core ...
    -config cfg ...
    -args {int32(N_x), int32(N_y), dx_val, U_type, B_type, int32(60000), 0.0, 0.0, 0.0} ...
    -o run_Jacobi_core_mex
