/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * eml_mtimes_helper.c
 *
 * Code generation for function 'eml_mtimes_helper'
 *
 */

/* Include files */
#include "eml_mtimes_helper.h"
#include "rt_nonfinite.h"
#include "run_Jacobi_core_emxutil.h"
#include "run_Jacobi_core_types.h"

/* Variable Definitions */
static emlrtRTEInfo m_emlrtRTEI =
    {
        76,                  /* lineNo */
        13,                  /* colNo */
        "eml_mtimes_helper", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" /* pName */
};

/* Function Definitions */
void binary_expand_op_4(const emlrtStack *sp, emxArray_real_T *in1,
                        const emxArray_real_T *in2, int32_T in3, int32_T in4,
                        int32_T in5)
{
  emxArray_real_T *r;
  const real_T *in2_data;
  real_T *in1_data;
  real_T *r1;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  in2_data = in2->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &r, 2, &m_emlrtRTEI);
  i = in4 - in3;
  if (i == 1) {
    loop_ub = in1->size[0];
  } else {
    loop_ub = i;
  }
  i1 = r->size[0] * r->size[1];
  r->size[0] = loop_ub;
  if (in5 == 1) {
    b_loop_ub = in1->size[1];
  } else {
    b_loop_ub = in5;
  }
  r->size[1] = b_loop_ub;
  emxEnsureCapacity_real_T(sp, r, i1, &m_emlrtRTEI);
  r1 = r->data;
  stride_0_0 = (in1->size[0] != 1);
  stride_0_1 = (in1->size[1] != 1);
  stride_1_0 = (i != 1);
  stride_1_1 = (in5 != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      r1[i1 + r->size[0] * i] =
          0.25 * (in1_data[i1 * stride_0_0 + in1->size[0] * aux_0_1] +
                  in2_data[(in3 + i1 * stride_1_0) + in2->size[0] * aux_1_1]);
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  i = in1->size[0] * in1->size[1];
  in1->size[0] = r->size[0];
  in1->size[1] = r->size[1];
  emxEnsureCapacity_real_T(sp, in1, i, &m_emlrtRTEI);
  in1_data = in1->data;
  loop_ub = r->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = r->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      in1_data[i1 + in1->size[0] * i] = r1[i1 + r->size[0] * i];
    }
  }
  emxFree_real_T(sp, &r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (eml_mtimes_helper.c) */
