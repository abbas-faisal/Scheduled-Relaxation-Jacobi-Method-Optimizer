/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * run_SRGS_core.h
 *
 * Code generation for function 'run_SRGS_core'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "run_SRGS_core_types.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void run_SRGS_core(const emlrtStack *sp, real_T w1, real_T w2, int32_T N_x,
                   int32_T N_y, real_T dx, const emxArray_real_T *U_init,
                   const emxArray_real_T *B, int32_T max_iter,
                   real_T max_residual, int32_T check_interval, real_T epsilon,
                   boolean_T track_residual, int32_T *k,
                   emxArray_real_T *res_history);

/* End of code generation (run_SRGS_core.h) */
