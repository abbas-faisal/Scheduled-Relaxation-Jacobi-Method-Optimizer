/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * run_Jacobi_core.h
 *
 * Code generation for function 'run_Jacobi_core'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "run_Jacobi_core_types.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void run_Jacobi_core(const emlrtStack *sp, int32_T N_x, int32_T N_y, real_T dx,
                     const emxArray_real_T *U_init, const emxArray_real_T *B,
                     int32_T max_iter, real_T max_residual,
                     real_T check_interval, real_T epsilon, int32_T *k,
                     emxArray_real_T *res_history);

/* End of code generation (run_Jacobi_core.h) */
