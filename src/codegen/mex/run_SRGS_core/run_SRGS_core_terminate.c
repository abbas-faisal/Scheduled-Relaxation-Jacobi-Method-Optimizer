/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * run_SRGS_core_terminate.c
 *
 * Code generation for function 'run_SRGS_core_terminate'
 *
 */

/* Include files */
#include "run_SRGS_core_terminate.h"
#include "_coder_run_SRGS_core_mex.h"
#include "rt_nonfinite.h"
#include "run_SRGS_core_data.h"

/* Function Definitions */
void run_SRGS_core_atexit(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void run_SRGS_core_terminate(void)
{
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (run_SRGS_core_terminate.c) */
