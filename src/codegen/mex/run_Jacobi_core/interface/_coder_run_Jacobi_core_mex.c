/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_run_Jacobi_core_mex.c
 *
 * Code generation for function '_coder_run_Jacobi_core_mex'
 *
 */

/* Include files */
#include "_coder_run_Jacobi_core_mex.h"
#include "_coder_run_Jacobi_core_api.h"
#include "rt_nonfinite.h"
#include "run_Jacobi_core_data.h"
#include "run_Jacobi_core_initialize.h"
#include "run_Jacobi_core_terminate.h"

/* Function Definitions */
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&run_Jacobi_core_atexit);
  /* Module initialization. */
  run_Jacobi_core_initialize();
  /* Dispatch the entry-point. */
  run_Jacobi_core_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  run_Jacobi_core_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL, "windows-1252", true);
  return emlrtRootTLSGlobal;
}

void run_Jacobi_core_mexFunction(int32_T nlhs, mxArray *plhs[2], int32_T nrhs,
                                 const mxArray *prhs[9])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs[2];
  int32_T i;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 9) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 9, 4,
                        15, "run_Jacobi_core");
  }
  if (nlhs > 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 15,
                        "run_Jacobi_core");
  }
  /* Call the function. */
  run_Jacobi_core_api(prhs, nlhs, outputs);
  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    i = 1;
  } else {
    i = nlhs;
  }
  emlrtReturnArrays(i, &plhs[0], &outputs[0]);
}

/* End of code generation (_coder_run_Jacobi_core_mex.c) */
