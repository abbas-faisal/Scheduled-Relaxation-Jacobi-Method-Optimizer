function [k, res_history] = run_SRJ_core(w1, w2, N_x, N_y, dx, U_init, B, max_iter, max_residual, check_interval, epsilon, track_residual)
%#codegen 
    %predefine U1 and U2 for algorithm
    U1=U_init;
    U1(2:N_x-1, 1) = B;
    U2=U1;
    diverged = false;
    
    k = int32(max_iter);
    cycle=int32(max_iter);
    
    res_history = 0;
    inv_dx2 = 1/(dx^2);
    res=0;
    res_sum=0;
    
    %initialize residual history array if residual tracking is on
    if track_residual
        res_history = zeros(int32(max_iter),1);
    end

    num_cycles = int32(max_iter / 2);
    

    for cycle = int32(1):int32(num_cycles)
        k_odd = 2*cycle-1;
        k_even = 2*cycle;

        res_sum=0;
        %double for loops are used as they work best with C, and therefore,
        %mex conversion

        %perform first jacobi pass using omega_1
        for j = 2:N_y-1
            for i = 2:N_x-1
                U_jacobi = 0.25 * (U1(i+1,j) + U1(i-1,j) + U1(i,j+1) + U1(i,j-1));
                U2(i,j) = (1 - w1) * U1(i,j) + w1 * U_jacobi;
            end
        end
        
        %perform second jacobi pass using omega_2
        for j = 2:N_y-1
            for i = 2:N_x-1
                U_jacobi = 0.25 * (U2(i+1,j) + U2(i-1,j) + U2(i,j+1) + U2(i,j-1));
                U1(i,j) = (1 - w2) * U2(i,j) + w2 * U_jacobi;
            end
        end
        
        %if iteration count is a multiple of the check interval, compute
        %residual
        if (int32((mod(k_even, check_interval))) == int32(0))||(cycle==1)
            res_sum=0;
            for j = 2:N_y-1
                for i = 2:N_x-1
                    res = (U1(i+1,j) + U1(i-1,j) + U1(i,j+1) + U1(i,j-1) - 4 * U1(i,j)) * inv_dx2;
                    res_sum = res_sum + abs(res);
                end
            end
            
            %record residual history
            if track_residual
                res_history(k_odd)=res_sum;
                res_history(k_even)=res_sum;
            end
            %break if convergence criteria is met
            if res_sum<epsilon 
                k = k_even;
                return;
            end
            
            %break if res_sum diverges or exceeds max_residaul
            if isnan(res_sum) || res_sum > max_residual
                diverged = true;
                break
            end
        
        %if tracking the residual, just copy residual data from a past
        %iteration if your not recomputing it.
        elseif track_residual
            if k_odd>1
                res_history(k_odd)=res_history(k_odd-1);
                res_history(k_even)=res_history(k_odd);

            end
        end

        
        
    end
    %if simulation diverged, return max_iter.
    if diverged
        k = max_iter;
    end
end