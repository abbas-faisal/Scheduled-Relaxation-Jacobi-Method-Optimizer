function [k, res_history] = run_Jacobi_core(N_x, N_y, dx, U_init, B, max_iter, max_residual, check_interval, epsilon)
%#codegen    
    U=U_init;
    U(2:N_x-1, 1) = B;
    diverged = false;
    k=int32(max_iter);
    
    
    res_history = zeros(int32(max_iter),1);

    for k=int32(1):int32(max_iter)
        U_old = U;
        res_sum=0;
                
        U(2:N_x-1,2:N_y-1) = 0.25 * (U_old(3:N_x,2:N_y-1) + U_old(1:N_x-2,2:N_y-1) + U_old(2:N_x-1,3:N_y) + U_old(2:N_x-1,1:N_y-2));
        
        if (int32((mod(k, check_interval))) == int32(0))||(k==1)
            local_residual = (U(3:N_x,2:N_y-1) + U(1:N_x-2,2:N_y-1) + ... 
                        U(2:N_x-1,3:N_y) + U(2:N_x-1,1:N_y-2) - ...
                        4 * U(2:N_x-1,2:N_y-1))/dx^2;
            res_sum=sum(abs(local_residual(:)));
            res_history(k) = res_sum;
            if res_sum<epsilon 
                return;
            end
        elseif k>1
            res_history(k)=res_history(k-1);
        end

        if isnan(res_sum) || res_sum > max_residual
            diverged = true;
            break
        end
    end
    if diverged
        k = max_iter;
    end
end

