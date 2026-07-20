/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * run_SRJ_core.c
 *
 * Code generation for function 'run_SRJ_core'
 *
 */

/* Include files */
#include "run_SRJ_core.h"
#include "rt_nonfinite.h"
#include "run_SRJ_core_data.h"
#include "run_SRJ_core_emxutil.h"
#include "run_SRJ_core_types.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtBCInfo emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    5,              /* lineNo */
    8,              /* colNo */
    "U1",           /* aName */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    5,              /* lineNo */
    10,             /* colNo */
    "U1",           /* aName */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    5,              /* lineNo */
    17,             /* colNo */
    "U1",           /* aName */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m", /* pName */
    0                                 /* checkKind */
};

static emlrtECInfo emlrtECI = {
    -1,             /* nDims */
    5,              /* lineNo */
    5,              /* colNo */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m" /* pName */
};

static emlrtDCInfo emlrtDCI = {
    19,             /* lineNo */
    9,              /* colNo */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m", /* pName */
    4                                 /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    36,             /* lineNo */
    39,             /* colNo */
    "U1",           /* aName */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    36,             /* lineNo */
    43,             /* colNo */
    "U1",           /* aName */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    36,             /* lineNo */
    51,             /* colNo */
    "U1",           /* aName */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    36,             /* lineNo */
    55,             /* colNo */
    "U1",           /* aName */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    36,             /* lineNo */
    63,             /* colNo */
    "U1",           /* aName */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    36,             /* lineNo */
    65,             /* colNo */
    "U1",           /* aName */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    36,             /* lineNo */
    75,             /* colNo */
    "U1",           /* aName */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    36,             /* lineNo */
    77,             /* colNo */
    "U1",           /* aName */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    37,             /* lineNo */
    41,             /* colNo */
    "U1",           /* aName */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    37,             /* lineNo */
    43,             /* colNo */
    "U1",           /* aName */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    37,             /* lineNo */
    20,             /* colNo */
    "U2",           /* aName */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    37,             /* lineNo */
    22,             /* colNo */
    "U2",           /* aName */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    44,             /* lineNo */
    39,             /* colNo */
    "U2",           /* aName */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    44,             /* lineNo */
    43,             /* colNo */
    "U2",           /* aName */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    44,             /* lineNo */
    51,             /* colNo */
    "U2",           /* aName */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    44,             /* lineNo */
    55,             /* colNo */
    "U2",           /* aName */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    44,             /* lineNo */
    63,             /* colNo */
    "U2",           /* aName */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    44,             /* lineNo */
    65,             /* colNo */
    "U2",           /* aName */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    44,             /* lineNo */
    75,             /* colNo */
    "U2",           /* aName */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    44,             /* lineNo */
    77,             /* colNo */
    "U2",           /* aName */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    45,             /* lineNo */
    41,             /* colNo */
    "U2",           /* aName */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    45,             /* lineNo */
    43,             /* colNo */
    "U2",           /* aName */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    45,             /* lineNo */
    20,             /* colNo */
    "U1",           /* aName */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    45,             /* lineNo */
    22,             /* colNo */
    "U1",           /* aName */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    81,             /* lineNo */
    48,             /* colNo */
    "res_history",  /* aName */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    81,             /* lineNo */
    29,             /* colNo */
    "res_history",  /* aName */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    82,             /* lineNo */
    49,             /* colNo */
    "res_history",  /* aName */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    82,             /* lineNo */
    29,             /* colNo */
    "res_history",  /* aName */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    62,             /* lineNo */
    29,             /* colNo */
    "res_history",  /* aName */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    63,             /* lineNo */
    29,             /* colNo */
    "res_history",  /* aName */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    55,             /* lineNo */
    31,             /* colNo */
    "U1",           /* aName */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    55,             /* lineNo */
    35,             /* colNo */
    "U1",           /* aName */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    55,             /* lineNo */
    43,             /* colNo */
    "U1",           /* aName */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    55,             /* lineNo */
    47,             /* colNo */
    "U1",           /* aName */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    55,             /* lineNo */
    55,             /* colNo */
    "U1",           /* aName */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    55,             /* lineNo */
    57,             /* colNo */
    "U1",           /* aName */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    55,             /* lineNo */
    67,             /* colNo */
    "U1",           /* aName */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    55,             /* lineNo */
    69,             /* colNo */
    "U1",           /* aName */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    55,             /* lineNo */
    83,             /* colNo */
    "U1",           /* aName */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m", /* pName */
    0                                 /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    55,             /* lineNo */
    85,             /* colNo */
    "U1",           /* aName */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m", /* pName */
    0                                 /* checkKind */
};

static emlrtRTEInfo emlrtRTEI = {
    4,              /* lineNo */
    5,              /* colNo */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m" /* pName */
};

static emlrtRTEInfo b_emlrtRTEI = {
    6,              /* lineNo */
    5,              /* colNo */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m" /* pName */
};

static emlrtRTEInfo c_emlrtRTEI = {
    12,             /* lineNo */
    5,              /* colNo */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m" /* pName */
};

static emlrtRTEInfo d_emlrtRTEI = {
    19,             /* lineNo */
    9,              /* colNo */
    "run_SRJ_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_SRJ_core.m" /* pName */
};

static emlrtRSInfo d_emlrtRSI = {
    102,      /* lineNo */
    "intmod", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+scalar\\mod."
    "m" /* pathName */
};

/* Function Declarations */
static int32_T div_s32_floor(const emlrtStack *sp, int32_T numerator,
                             int32_T denominator);

/* Function Definitions */
static int32_T div_s32_floor(const emlrtStack *sp, int32_T numerator,
                             int32_T denominator)
{
  int32_T quotient;
  if (denominator == 0) {
    emlrtDivisionByZeroErrorR2012b(NULL, (emlrtConstCTX)sp);
  } else {
    uint32_T absDenominator;
    uint32_T absNumerator;
    uint32_T tempAbsQuotient;
    boolean_T quotientNeedsNegation;
    if (numerator < 0) {
      absNumerator = ~(uint32_T)numerator + 1U;
    } else {
      absNumerator = (uint32_T)numerator;
    }
    if (denominator < 0) {
      absDenominator = ~(uint32_T)denominator + 1U;
    } else {
      absDenominator = (uint32_T)denominator;
    }
    quotientNeedsNegation = ((numerator < 0) != (denominator < 0));
    tempAbsQuotient = absNumerator / absDenominator;
    if (quotientNeedsNegation) {
      absNumerator %= absDenominator;
      if (absNumerator > 0U) {
        tempAbsQuotient++;
      }
      quotient = -(int32_T)tempAbsQuotient;
    } else {
      quotient = (int32_T)tempAbsQuotient;
    }
  }
  return quotient;
}

void run_SRJ_core(const emlrtStack *sp, real_T w1, real_T w2, int32_T N_x,
                  int32_T N_y, real_T dx, const emxArray_real_T *U_init,
                  const emxArray_real_T *B, int32_T max_iter,
                  real_T max_residual, int32_T check_interval, real_T epsilon,
                  boolean_T track_residual, int32_T *k,
                  emxArray_real_T *res_history)
{
  emlrtStack st;
  emxArray_real_T *U1;
  emxArray_real_T *U2;
  const real_T *B_data;
  const real_T *U_init_data;
  real_T inv_dx2;
  real_T *U1_data;
  real_T *U2_data;
  real_T *res_history_data;
  int32_T b_qY;
  int32_T c_qY;
  int32_T cycle;
  int32_T d_qY;
  int32_T i;
  int32_T j;
  int32_T k_odd_tmp;
  int32_T num_cycles;
  int32_T qY;
  st.prev = sp;
  st.tls = sp->tls;
  B_data = B->data;
  U_init_data = U_init->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  /* predefine U1 and U2 for algorithm */
  emxInit_real_T(sp, &U1, 2, &emlrtRTEI);
  k_odd_tmp = U1->size[0] * U1->size[1];
  U1->size[0] = U_init->size[0];
  U1->size[1] = U_init->size[1];
  emxEnsureCapacity_real_T(sp, U1, k_odd_tmp, &emlrtRTEI);
  U1_data = U1->data;
  num_cycles = U_init->size[0] * U_init->size[1];
  for (k_odd_tmp = 0; k_odd_tmp < num_cycles; k_odd_tmp++) {
    U1_data[k_odd_tmp] = U_init_data[k_odd_tmp];
  }
  if (N_x < -2147483647) {
    qY = MIN_int32_T;
  } else {
    qY = N_x - 1;
  }
  if (qY < 2) {
    k_odd_tmp = 0;
    qY = 0;
  } else {
    if (U_init->size[0] < 2) {
      emlrtDynamicBoundsCheckR2012b(2, 1, U_init->size[0], &emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    k_odd_tmp = 1;
    if (qY > U_init->size[0]) {
      emlrtDynamicBoundsCheckR2012b(qY, 1, U_init->size[0], &b_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
  }
  if (U_init->size[1] < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, U_init->size[1], &c_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  cycle = qY - k_odd_tmp;
  emlrtSubAssignSizeCheckR2012b(&cycle, 1, &B->size[0], 1, &emlrtECI,
                                (emlrtCTX)sp);
  qY = B->size[0];
  for (cycle = 0; cycle < qY; cycle++) {
    U1_data[k_odd_tmp + cycle] = B_data[cycle];
  }
  emxInit_real_T(sp, &U2, 2, &b_emlrtRTEI);
  k_odd_tmp = U2->size[0] * U2->size[1];
  U2->size[0] = U1->size[0];
  U2->size[1] = U1->size[1];
  emxEnsureCapacity_real_T(sp, U2, k_odd_tmp, &b_emlrtRTEI);
  U2_data = U2->data;
  for (k_odd_tmp = 0; k_odd_tmp < num_cycles; k_odd_tmp++) {
    U2_data[k_odd_tmp] = U1_data[k_odd_tmp];
  }
  *k = max_iter;
  k_odd_tmp = res_history->size[0];
  res_history->size[0] = 1;
  emxEnsureCapacity_real_T(sp, res_history, k_odd_tmp, &c_emlrtRTEI);
  res_history_data = res_history->data;
  res_history_data[0] = 0.0;
  inv_dx2 = 1.0 / (dx * dx);
  /* initialize residual history array if residual tracking is on */
  if (track_residual) {
    if (max_iter < 0) {
      emlrtNonNegativeCheckR2012b(max_iter, &emlrtDCI, (emlrtConstCTX)sp);
    }
    k_odd_tmp = res_history->size[0];
    res_history->size[0] = max_iter;
    emxEnsureCapacity_real_T(sp, res_history, k_odd_tmp, &d_emlrtRTEI);
    res_history_data = res_history->data;
    for (k_odd_tmp = 0; k_odd_tmp < max_iter; k_odd_tmp++) {
      res_history_data[k_odd_tmp] = 0.0;
    }
  }
  num_cycles = (int32_T)muDoubleScalarRound((real_T)max_iter / 2.0);
  cycle = 0;
  int32_T exitg1;
  do {
    exitg1 = 0;
    if (cycle <= num_cycles - 1) {
      boolean_T guard1;
      if (cycle + 1 > 1073741823) {
        k_odd_tmp = MAX_int32_T;
      } else {
        k_odd_tmp = (cycle + 1) << 1;
      }
      /* double for loops are used as they work best with C, and therefore, */
      /* mex conversion */
      /* perform first jacobi pass using omega_1 */
      if (N_y < -2147483647) {
        qY = MIN_int32_T;
      } else {
        qY = N_y - 1;
      }
      if (qY >= 2) {
        if (N_x < -2147483647) {
          b_qY = MIN_int32_T;
        } else {
          b_qY = N_x - 1;
        }
      }
      for (j = 2; j <= qY; j++) {
        for (i = 2; i <= b_qY; i++) {
          if (i + 1 > U1->size[0]) {
            emlrtDynamicBoundsCheckR2012b(i + 1, 1, U1->size[0], &d_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (j > U1->size[1]) {
            emlrtDynamicBoundsCheckR2012b(j, 1, U1->size[1], &e_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (i - 1 > U1->size[0]) {
            emlrtDynamicBoundsCheckR2012b(i - 1, 1, U1->size[0], &f_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (j > U1->size[1]) {
            emlrtDynamicBoundsCheckR2012b(j, 1, U1->size[1], &g_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (i > U1->size[0]) {
            emlrtDynamicBoundsCheckR2012b(i, 1, U1->size[0], &h_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (j + 1 > U1->size[1]) {
            emlrtDynamicBoundsCheckR2012b(j + 1, 1, U1->size[1], &i_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (i > U1->size[0]) {
            emlrtDynamicBoundsCheckR2012b(i, 1, U1->size[0], &j_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (j - 1 > U1->size[1]) {
            emlrtDynamicBoundsCheckR2012b(j - 1, 1, U1->size[1], &k_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (i > U1->size[0]) {
            emlrtDynamicBoundsCheckR2012b(i, 1, U1->size[0], &l_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (j > U1->size[1]) {
            emlrtDynamicBoundsCheckR2012b(j, 1, U1->size[1], &m_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (i > U2->size[0]) {
            emlrtDynamicBoundsCheckR2012b(i, 1, U2->size[0], &n_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (j > U2->size[1]) {
            emlrtDynamicBoundsCheckR2012b(j, 1, U2->size[1], &o_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          U2_data[(i + U2->size[0] * (j - 1)) - 1] =
              (1.0 - w1) * U1_data[(i + U1->size[0] * (j - 1)) - 1] +
              w1 * (0.25 * (((U1_data[i + U1->size[0] * (j - 1)] +
                              U1_data[(i + U1->size[0] * (j - 1)) - 2]) +
                             U1_data[(i + U1->size[0] * j) - 1]) +
                            U1_data[(i + U1->size[0] * (j - 2)) - 1]));
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)sp);
          }
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
      /* perform second jacobi pass using omega_2 */
      if (N_y < -2147483647) {
        qY = MIN_int32_T;
      } else {
        qY = N_y - 1;
      }
      if (qY >= 2) {
        if (N_x < -2147483647) {
          c_qY = MIN_int32_T;
        } else {
          c_qY = N_x - 1;
        }
      }
      for (j = 2; j <= qY; j++) {
        for (i = 2; i <= c_qY; i++) {
          if (i + 1 > U2->size[0]) {
            emlrtDynamicBoundsCheckR2012b(i + 1, 1, U2->size[0], &p_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (j > U2->size[1]) {
            emlrtDynamicBoundsCheckR2012b(j, 1, U2->size[1], &q_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (i - 1 > U2->size[0]) {
            emlrtDynamicBoundsCheckR2012b(i - 1, 1, U2->size[0], &r_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (j > U2->size[1]) {
            emlrtDynamicBoundsCheckR2012b(j, 1, U2->size[1], &s_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (i > U2->size[0]) {
            emlrtDynamicBoundsCheckR2012b(i, 1, U2->size[0], &t_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (j + 1 > U2->size[1]) {
            emlrtDynamicBoundsCheckR2012b(j + 1, 1, U2->size[1], &u_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (i > U2->size[0]) {
            emlrtDynamicBoundsCheckR2012b(i, 1, U2->size[0], &v_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (j - 1 > U2->size[1]) {
            emlrtDynamicBoundsCheckR2012b(j - 1, 1, U2->size[1], &w_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (i > U2->size[0]) {
            emlrtDynamicBoundsCheckR2012b(i, 1, U2->size[0], &x_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (j > U2->size[1]) {
            emlrtDynamicBoundsCheckR2012b(j, 1, U2->size[1], &y_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (i > U1->size[0]) {
            emlrtDynamicBoundsCheckR2012b(i, 1, U1->size[0], &ab_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (j > U1->size[1]) {
            emlrtDynamicBoundsCheckR2012b(j, 1, U1->size[1], &bb_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          U1_data[(i + U1->size[0] * (j - 1)) - 1] =
              (1.0 - w2) * U2_data[(i + U2->size[0] * (j - 1)) - 1] +
              w2 * (0.25 * (((U2_data[i + U2->size[0] * (j - 1)] +
                              U2_data[(i + U2->size[0] * (j - 1)) - 2]) +
                             U2_data[(i + U2->size[0] * j) - 1]) +
                            U2_data[(i + U2->size[0] * (j - 2)) - 1]));
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)sp);
          }
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
      /* if iteration count is a multiple of the check interval, compute */
      /* residual */
      if (check_interval == 0) {
        qY = k_odd_tmp;
      } else {
        st.site = &d_emlrtRSI;
        qY = k_odd_tmp -
             div_s32_floor(&st, k_odd_tmp, check_interval) * check_interval;
      }
      guard1 = false;
      if ((qY == 0) || (cycle + 1 == 1)) {
        real_T res_sum;
        res_sum = 0.0;
        if (N_y < -2147483647) {
          qY = MIN_int32_T;
        } else {
          qY = N_y - 1;
        }
        if (qY >= 2) {
          if (N_x < -2147483647) {
            d_qY = MIN_int32_T;
          } else {
            d_qY = N_x - 1;
          }
        }
        for (j = 2; j <= qY; j++) {
          for (i = 2; i <= d_qY; i++) {
            if (i + 1 > U1->size[0]) {
              emlrtDynamicBoundsCheckR2012b(i + 1, 1, U1->size[0], &ib_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            if (j > U1->size[1]) {
              emlrtDynamicBoundsCheckR2012b(j, 1, U1->size[1], &jb_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            if (i - 1 > U1->size[0]) {
              emlrtDynamicBoundsCheckR2012b(i - 1, 1, U1->size[0], &kb_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            if (j > U1->size[1]) {
              emlrtDynamicBoundsCheckR2012b(j, 1, U1->size[1], &lb_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            if (i > U1->size[0]) {
              emlrtDynamicBoundsCheckR2012b(i, 1, U1->size[0], &mb_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            if (j + 1 > U1->size[1]) {
              emlrtDynamicBoundsCheckR2012b(j + 1, 1, U1->size[1], &nb_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            if (i > U1->size[0]) {
              emlrtDynamicBoundsCheckR2012b(i, 1, U1->size[0], &ob_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            if (j - 1 > U1->size[1]) {
              emlrtDynamicBoundsCheckR2012b(j - 1, 1, U1->size[1], &pb_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            if (i > U1->size[0]) {
              emlrtDynamicBoundsCheckR2012b(i, 1, U1->size[0], &qb_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            if (j > U1->size[1]) {
              emlrtDynamicBoundsCheckR2012b(j, 1, U1->size[1], &rb_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            res_sum += muDoubleScalarAbs(
                ((((U1_data[i + U1->size[0] * (j - 1)] +
                    U1_data[(i + U1->size[0] * (j - 1)) - 2]) +
                   U1_data[(i + U1->size[0] * j) - 1]) +
                  U1_data[(i + U1->size[0] * (j - 2)) - 1]) -
                 4.0 * U1_data[(i + U1->size[0] * (j - 1)) - 1]) *
                inv_dx2);
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b((emlrtConstCTX)sp);
            }
          }
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)sp);
          }
        }
        /* record residual history */
        if (track_residual) {
          if (k_odd_tmp - 1 > res_history->size[0]) {
            emlrtDynamicBoundsCheckR2012b(k_odd_tmp - 1, 1,
                                          res_history->size[0], &gb_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          res_history_data[k_odd_tmp - 2] = res_sum;
          if (k_odd_tmp > res_history->size[0]) {
            emlrtDynamicBoundsCheckR2012b(k_odd_tmp, 1, res_history->size[0],
                                          &hb_emlrtBCI, (emlrtConstCTX)sp);
          }
          res_history_data[k_odd_tmp - 1] = res_sum;
        }
        /* break if convergence criteria is met */
        if (res_sum < epsilon) {
          *k = k_odd_tmp;
          exitg1 = 1;

          /* break if res_sum diverges or exceeds max_residaul */
        } else if (muDoubleScalarIsNaN(res_sum) || (res_sum > max_residual)) {
          /* if simulation diverged, return max_iter. */
          exitg1 = 1;
        } else {
          /* if tracking the residual, just copy residual data from a past */
          /* iteration if your not recomputing it. */
          guard1 = true;
        }
      } else {
        if (track_residual && (k_odd_tmp - 1 > 1)) {
          if ((k_odd_tmp - 2 < 1) || (k_odd_tmp - 2 > res_history->size[0])) {
            emlrtDynamicBoundsCheckR2012b(k_odd_tmp - 2, 1,
                                          res_history->size[0], &cb_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (k_odd_tmp - 1 > res_history->size[0]) {
            emlrtDynamicBoundsCheckR2012b(k_odd_tmp - 1, 1,
                                          res_history->size[0], &db_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          res_history_data[k_odd_tmp - 2] = res_history_data[k_odd_tmp - 3];
          if (k_odd_tmp - 1 > res_history->size[0]) {
            emlrtDynamicBoundsCheckR2012b(k_odd_tmp - 1, 1,
                                          res_history->size[0], &eb_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (k_odd_tmp > res_history->size[0]) {
            emlrtDynamicBoundsCheckR2012b(k_odd_tmp, 1, res_history->size[0],
                                          &fb_emlrtBCI, (emlrtConstCTX)sp);
          }
          res_history_data[k_odd_tmp - 1] = res_history_data[k_odd_tmp - 2];
        }
        guard1 = true;
      }
      if (guard1) {
        cycle++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
    } else {
      /* if simulation diverged, return max_iter. */
      exitg1 = 1;
    }
  } while (exitg1 == 0);
  emxFree_real_T(sp, &U2);
  emxFree_real_T(sp, &U1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (run_SRJ_core.c) */
