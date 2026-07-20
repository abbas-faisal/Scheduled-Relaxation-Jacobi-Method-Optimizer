/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_run_Jacobi_core_api.c
 *
 * Code generation for function '_coder_run_Jacobi_core_api'
 *
 */

/* Include files */
#include "_coder_run_Jacobi_core_api.h"
#include "rt_nonfinite.h"
#include "run_Jacobi_core.h"
#include "run_Jacobi_core_data.h"
#include "run_Jacobi_core_emxutil.h"
#include "run_Jacobi_core_types.h"

/* Variable Definitions */
static emlrtRTEInfo k_emlrtRTEI = {
    1,                            /* lineNo */
    1,                            /* colNo */
    "_coder_run_Jacobi_core_api", /* fName */
    ""                            /* pName */
};

/* Function Declarations */
static int32_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                  const emlrtMsgIdentifier *parentId);

static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u);

static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                 const char_T *identifier);

static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                               const char_T *identifier, emxArray_real_T *y);

static int32_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                const char_T *identifier);

static const mxArray *emlrt_marshallOut(const int32_T u);

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                               const char_T *identifier, emxArray_real_T *y);

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static int32_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                  const emlrtMsgIdentifier *msgId);

static real_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

/* Function Definitions */
static int32_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                  const emlrtMsgIdentifier *parentId)
{
  int32_T y;
  y = i_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u)
{
  static const int32_T i = 0;
  const mxArray *m;
  const mxArray *y;
  const real_T *u_data;
  u_data = u->data;
  y = NULL;
  m = emlrtCreateNumericArray(1, (const void *)&i, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, (void *)&u_data[0]);
  emlrtSetDimensions((mxArray *)m, &u->size[0], 1);
  emlrtAssign(&y, m);
  return y;
}

static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                 const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  real_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId);
  emlrtDestroyArray(&nullptr);
  return y;
}

static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = j_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                               const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  f_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId, y);
  emlrtDestroyArray(&nullptr);
}

static int32_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                                const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  int32_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId);
  emlrtDestroyArray(&nullptr);
  return y;
}

static const mxArray *emlrt_marshallOut(const int32_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)emlrtMxGetData(m) = u;
  emlrtAssign(&y, m);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  k_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                               const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  h_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId, y);
  emlrtDestroyArray(&nullptr);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  l_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static int32_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                  const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  int32_T ret;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "int32", false, 0U,
                          (const void *)&dims);
  ret = *(int32_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  real_T ret;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 0U,
                          (const void *)&dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret)
{
  static const int32_T dims[2] = {-1, -1};
  int32_T iv[2];
  int32_T i;
  boolean_T bv[2] = {true, true};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret->allocatedSize = iv[0] * iv[1];
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  emxEnsureCapacity_real_T(sp, ret, i, (emlrtRTEInfo *)NULL);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret)
{
  static const int32_T dims = -1;
  int32_T i;
  int32_T i1;
  boolean_T b = true;
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 1U,
                            (const void *)&dims, &b, &i);
  ret->allocatedSize = i;
  i1 = ret->size[0];
  ret->size[0] = i;
  emxEnsureCapacity_real_T(sp, ret, i1, (emlrtRTEInfo *)NULL);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

void run_Jacobi_core_api(const mxArray *const prhs[9], int32_T nlhs,
                         const mxArray *plhs[2])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_real_T *B;
  emxArray_real_T *U_init;
  emxArray_real_T *res_history;
  real_T check_interval;
  real_T dx;
  real_T epsilon;
  real_T max_residual;
  int32_T N_x;
  int32_T N_y;
  int32_T k;
  int32_T max_iter;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  /* Marshall function inputs */
  N_x = emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "N_x");
  N_y = emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "N_y");
  dx = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "dx");
  emxInit_real_T(&st, &U_init, 2, &k_emlrtRTEI);
  U_init->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "U_init", U_init);
  emxInit_real_T(&st, &B, 1, &k_emlrtRTEI);
  B->canFreeData = false;
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "B", B);
  max_iter = emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "max_iter");
  max_residual = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "max_residual");
  check_interval =
      c_emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "check_interval");
  epsilon = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "epsilon");
  /* Invoke the target function */
  emxInit_real_T(&st, &res_history, 1, &k_emlrtRTEI);
  run_Jacobi_core(&st, N_x, N_y, dx, U_init, B, max_iter, max_residual,
                  check_interval, epsilon, &k, res_history);
  emxFree_real_T(&st, &B);
  emxFree_real_T(&st, &U_init);
  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(k);
  if (nlhs > 1) {
    res_history->canFreeData = false;
    plhs[1] = b_emlrt_marshallOut(res_history);
  }
  emxFree_real_T(&st, &res_history);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_run_Jacobi_core_api.c) */
