/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * run_Jacobi_core_initialize.c
 *
 * Code generation for function 'run_Jacobi_core_initialize'
 *
 */

/* Include files */
#include "run_Jacobi_core_initialize.h"
#include "_coder_run_Jacobi_core_mex.h"
#include "rt_nonfinite.h"
#include "run_Jacobi_core_data.h"

/* Function Declarations */
static void run_Jacobi_core_once(void);

/* Function Definitions */
static void run_Jacobi_core_once(void)
{
  mex_InitInfAndNan();
}

void run_Jacobi_core_initialize(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2022b(&st);
  emlrtClearAllocCountR2012b(&st, false, 0U, NULL);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    run_Jacobi_core_once();
  }
}

/* End of code generation (run_Jacobi_core_initialize.c) */
