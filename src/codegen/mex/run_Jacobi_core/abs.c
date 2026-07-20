/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * abs.c
 *
 * Code generation for function 'abs'
 *
 */

/* Include files */
#include "abs.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "run_Jacobi_core_data.h"
#include "run_Jacobi_core_emxutil.h"
#include "run_Jacobi_core_types.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo g_emlrtRSI =
    {
        19,    /* lineNo */
        "abs", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\elfun\\abs.m" /* pathName
                                                                          */
};

static emlrtRSInfo h_emlrtRSI = {
    74,                    /* lineNo */
    "applyScalarFunction", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyScalarFunction.m" /* pathName */
};

static emlrtRTEInfo j_emlrtRTEI = {
    30,                    /* lineNo */
    21,                    /* colNo */
    "applyScalarFunction", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyScalarFunction.m" /* pName */
};

/* Function Definitions */
void b_abs(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const real_T *x_data;
  real_T *y_data;
  int32_T k;
  int32_T nx;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  x_data = x->data;
  st.site = &g_emlrtRSI;
  nx = x->size[0];
  k = y->size[0];
  y->size[0] = x->size[0];
  emxEnsureCapacity_real_T(&st, y, k, &j_emlrtRTEI);
  y_data = y->data;
  b_st.site = &h_emlrtRSI;
  if (x->size[0] > 2147483646) {
    c_st.site = &d_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  for (k = 0; k < nx; k++) {
    y_data[k] = muDoubleScalarAbs(x_data[k]);
  }
}

/* End of code generation (abs.c) */
