/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * run_Jacobi_core.c
 *
 * Code generation for function 'run_Jacobi_core'
 *
 */

/* Include files */
#include "run_Jacobi_core.h"
#include "abs.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_mtimes_helper.h"
#include "mod.h"
#include "rt_nonfinite.h"
#include "run_Jacobi_core_data.h"
#include "run_Jacobi_core_emxutil.h"
#include "run_Jacobi_core_types.h"
#include "sum.h"
#include "mwmathutil.h"
#include <emmintrin.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    21,                /* lineNo */
    "run_Jacobi_core", /* fcnName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m" /* pathName */
};

static emlrtRSInfo b_emlrtRSI = {
    20,                /* lineNo */
    "run_Jacobi_core", /* fcnName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m" /* pathName */
};

static emlrtRSInfo c_emlrtRSI = {
    11,                /* lineNo */
    "run_Jacobi_core", /* fcnName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m" /* pathName */
};

static emlrtECInfo emlrtECI = {
    2,                 /* nDims */
    18,                /* lineNo */
    31,                /* colNo */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m" /* pName */
};

static emlrtECInfo b_emlrtECI = {
    1,                 /* nDims */
    18,                /* lineNo */
    31,                /* colNo */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m" /* pName */
};

static emlrtBCInfo emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    20,                /* lineNo */
    41,                /* colNo */
    "U",               /* aName */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    20,                /* lineNo */
    39,                /* colNo */
    "U",               /* aName */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    20,                /* lineNo */
    33,                /* colNo */
    "U",               /* aName */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    20,                /* lineNo */
    31,                /* colNo */
    "U",               /* aName */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    19,                /* lineNo */
    56,                /* colNo */
    "U",               /* aName */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    19,                /* lineNo */
    54,                /* colNo */
    "U",               /* aName */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    19,                /* lineNo */
    48,                /* colNo */
    "U",               /* aName */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    19,                /* lineNo */
    46,                /* colNo */
    "U",               /* aName */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    19,                /* lineNo */
    37,                /* colNo */
    "U",               /* aName */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    19,                /* lineNo */
    35,                /* colNo */
    "U",               /* aName */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    19,                /* lineNo */
    29,                /* colNo */
    "U",               /* aName */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    19,                /* lineNo */
    27,                /* colNo */
    "U",               /* aName */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    18,                /* lineNo */
    62,                /* colNo */
    "U",               /* aName */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    18,                /* lineNo */
    60,                /* colNo */
    "U",               /* aName */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    18,                /* lineNo */
    54,                /* colNo */
    "U",               /* aName */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    18,                /* lineNo */
    52,                /* colNo */
    "U",               /* aName */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    18,                /* lineNo */
    41,                /* colNo */
    "U",               /* aName */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    18,                /* lineNo */
    39,                /* colNo */
    "U",               /* aName */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    18,                /* lineNo */
    35,                /* colNo */
    "U",               /* aName */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    18,                /* lineNo */
    33,                /* colNo */
    "U",               /* aName */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m", /* pName */
    0                                    /* checkKind */
};

static emlrtECInfo c_emlrtECI = {
    -1,                /* nDims */
    15,                /* lineNo */
    9,                 /* colNo */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m" /* pName */
};

static emlrtBCInfo u_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    15,                /* lineNo */
    21,                /* colNo */
    "U",               /* aName */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    15,                /* lineNo */
    19,                /* colNo */
    "U",               /* aName */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    15,                /* lineNo */
    13,                /* colNo */
    "U",               /* aName */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    15,                /* lineNo */
    11,                /* colNo */
    "U",               /* aName */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m", /* pName */
    0                                    /* checkKind */
};

static emlrtECInfo d_emlrtECI = {
    2,                 /* nDims */
    15,                /* lineNo */
    38,                /* colNo */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m" /* pName */
};

static emlrtECInfo e_emlrtECI = {
    1,                 /* nDims */
    15,                /* lineNo */
    38,                /* colNo */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m" /* pName */
};

static emlrtBCInfo y_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    15,                /* lineNo */
    125,               /* colNo */
    "U_old",           /* aName */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    15,                /* lineNo */
    123,               /* colNo */
    "U_old",           /* aName */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    15,                /* lineNo */
    117,               /* colNo */
    "U_old",           /* aName */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    15,                /* lineNo */
    115,               /* colNo */
    "U_old",           /* aName */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    15,                /* lineNo */
    102,               /* colNo */
    "U_old",           /* aName */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    15,                /* lineNo */
    100,               /* colNo */
    "U_old",           /* aName */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    15,                /* lineNo */
    94,                /* colNo */
    "U_old",           /* aName */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    15,                /* lineNo */
    92,                /* colNo */
    "U_old",           /* aName */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    15,                /* lineNo */
    77,                /* colNo */
    "U_old",           /* aName */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    15,                /* lineNo */
    75,                /* colNo */
    "U_old",           /* aName */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    15,                /* lineNo */
    69,                /* colNo */
    "U_old",           /* aName */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    15,                /* lineNo */
    67,                /* colNo */
    "U_old",           /* aName */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    15,                /* lineNo */
    52,                /* colNo */
    "U_old",           /* aName */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    15,                /* lineNo */
    50,                /* colNo */
    "U_old",           /* aName */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    15,                /* lineNo */
    46,                /* colNo */
    "U_old",           /* aName */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    15,                /* lineNo */
    44,                /* colNo */
    "U_old",           /* aName */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m", /* pName */
    0                                    /* checkKind */
};

static emlrtECInfo f_emlrtECI = {
    -1,                /* nDims */
    4,                 /* lineNo */
    5,                 /* colNo */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m" /* pName */
};

static emlrtBCInfo pb_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    4,                 /* lineNo */
    16,                /* colNo */
    "U",               /* aName */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    4,                 /* lineNo */
    9,                 /* colNo */
    "U",               /* aName */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    4,                 /* lineNo */
    7,                 /* colNo */
    "U",               /* aName */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m", /* pName */
    0                                    /* checkKind */
};

static emlrtDCInfo emlrtDCI = {
    9,                 /* lineNo */
    5,                 /* colNo */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m", /* pName */
    4                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    27,                /* lineNo */
    40,                /* colNo */
    "res_history",     /* aName */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    27,                /* lineNo */
    25,                /* colNo */
    "res_history",     /* aName */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m", /* pName */
    0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = {
    -1,                /* iFirst */
    -1,                /* iLast */
    22,                /* lineNo */
    25,                /* colNo */
    "res_history",     /* aName */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m", /* pName */
    0                                    /* checkKind */
};

static emlrtRTEInfo c_emlrtRTEI = {
    3,                 /* lineNo */
    5,                 /* colNo */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m" /* pName */
};

static emlrtRTEInfo d_emlrtRTEI = {
    9,                 /* lineNo */
    5,                 /* colNo */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m" /* pName */
};

static emlrtRTEInfo e_emlrtRTEI = {
    15,                /* lineNo */
    38,                /* colNo */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m" /* pName */
};

static emlrtRTEInfo f_emlrtRTEI = {
    18,                /* lineNo */
    31,                /* colNo */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m" /* pName */
};

static emlrtRTEInfo g_emlrtRTEI = {
    20,                /* lineNo */
    25,                /* colNo */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m" /* pName */
};

static emlrtRTEInfo h_emlrtRTEI = {
    18,                /* lineNo */
    13,                /* colNo */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m" /* pName */
};

static emlrtRTEInfo i_emlrtRTEI = {
    21,                /* lineNo */
    25,                /* colNo */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m" /* pName */
};

static emlrtRTEInfo l_emlrtRTEI = {
    18,                /* lineNo */
    30,                /* colNo */
    "run_Jacobi_core", /* fName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m" /* pName */
};

static emlrtRSInfo s_emlrtRSI = {
    18,                /* lineNo */
    "run_Jacobi_core", /* fcnName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m" /* pathName */
};

static emlrtRSInfo t_emlrtRSI =
    {
        76,                  /* lineNo */
        "eml_mtimes_helper", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" /* pathName */
};

static emlrtRSInfo v_emlrtRSI = {
    17,                /* lineNo */
    "run_Jacobi_core", /* fcnName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m" /* pathName */
};

static emlrtRSInfo w_emlrtRSI = {
    15,                /* lineNo */
    "run_Jacobi_core", /* fcnName */
    "C:\\Users\\themc\\Documents\\GitHub\\Scheduled-Relaxation-Jacobi-Method-"
    "Optimizer\\src\\run_Jacobi_core.m" /* pathName */
};

/* Function Declarations */
static void binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                             const emxArray_real_T *in2, real_T in3);

static void binary_expand_op_1(const emlrtStack *sp, emxArray_real_T *in1,
                               const emxArray_real_T *in2, int32_T in3,
                               int32_T in4, int32_T in5);

static void binary_expand_op_2(const emlrtStack *sp, emxArray_real_T *in1,
                               const emxArray_real_T *in2,
                               const emxArray_real_T *in3, int32_T in4,
                               int32_T in5, int32_T in6, int32_T in7);

static void binary_expand_op_3(const emlrtStack *sp, emxArray_real_T *in1,
                               const emxArray_real_T *in2, int32_T in3,
                               int32_T in4, int32_T in5, int32_T in6,
                               int32_T in7, int32_T in8, int32_T in9);

/* Function Definitions */
static void binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                             const emxArray_real_T *in2, real_T in3)
{
  emxArray_real_T *b_in1;
  const real_T *in2_data;
  real_T *b_in1_data;
  real_T *in1_data;
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
  emxInit_real_T(sp, &b_in1, 2, &l_emlrtRTEI);
  if (in2->size[0] == 1) {
    loop_ub = in1->size[0];
  } else {
    loop_ub = in2->size[0];
  }
  i = b_in1->size[0] * b_in1->size[1];
  b_in1->size[0] = loop_ub;
  if (in2->size[1] == 1) {
    b_loop_ub = in1->size[1];
  } else {
    b_loop_ub = in2->size[1];
  }
  b_in1->size[1] = b_loop_ub;
  emxEnsureCapacity_real_T(sp, b_in1, i, &l_emlrtRTEI);
  b_in1_data = b_in1->data;
  stride_0_0 = (in1->size[0] != 1);
  stride_0_1 = (in1->size[1] != 1);
  stride_1_0 = (in2->size[0] != 1);
  stride_1_1 = (in2->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_in1_data[i1 + b_in1->size[0] * i] =
          (in1_data[i1 * stride_0_0 + in1->size[0] * aux_0_1] -
           in2_data[i1 * stride_1_0 + in2->size[0] * aux_1_1]) /
          in3;
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  i = in1->size[0] * in1->size[1];
  in1->size[0] = b_in1->size[0];
  in1->size[1] = b_in1->size[1];
  emxEnsureCapacity_real_T(sp, in1, i, &l_emlrtRTEI);
  in1_data = in1->data;
  loop_ub = b_in1->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_in1->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      in1_data[i1 + in1->size[0] * i] = b_in1_data[i1 + b_in1->size[0] * i];
    }
  }
  emxFree_real_T(sp, &b_in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

static void binary_expand_op_1(const emlrtStack *sp, emxArray_real_T *in1,
                               const emxArray_real_T *in2, int32_T in3,
                               int32_T in4, int32_T in5)
{
  emxArray_real_T *b_in1;
  const real_T *in2_data;
  real_T *b_in1_data;
  real_T *in1_data;
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
  emxInit_real_T(sp, &b_in1, 2, &f_emlrtRTEI);
  i = in4 - in3;
  if (i == 1) {
    loop_ub = in1->size[0];
  } else {
    loop_ub = i;
  }
  i1 = b_in1->size[0] * b_in1->size[1];
  b_in1->size[0] = loop_ub;
  if (in5 == 1) {
    b_loop_ub = in1->size[1];
  } else {
    b_loop_ub = in5;
  }
  b_in1->size[1] = b_loop_ub;
  emxEnsureCapacity_real_T(sp, b_in1, i1, &f_emlrtRTEI);
  b_in1_data = b_in1->data;
  stride_0_0 = (in1->size[0] != 1);
  stride_0_1 = (in1->size[1] != 1);
  stride_1_0 = (i != 1);
  stride_1_1 = (in5 != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_in1_data[i1 + b_in1->size[0] * i] =
          in1_data[i1 * stride_0_0 + in1->size[0] * aux_0_1] +
          in2_data[(in3 + i1 * stride_1_0) + in2->size[0] * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  i = in1->size[0] * in1->size[1];
  in1->size[0] = b_in1->size[0];
  in1->size[1] = b_in1->size[1];
  emxEnsureCapacity_real_T(sp, in1, i, &f_emlrtRTEI);
  in1_data = in1->data;
  loop_ub = b_in1->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_in1->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      in1_data[i1 + in1->size[0] * i] = b_in1_data[i1 + b_in1->size[0] * i];
    }
  }
  emxFree_real_T(sp, &b_in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

static void binary_expand_op_2(const emlrtStack *sp, emxArray_real_T *in1,
                               const emxArray_real_T *in2,
                               const emxArray_real_T *in3, int32_T in4,
                               int32_T in5, int32_T in6, int32_T in7)
{
  const real_T *in2_data;
  const real_T *in3_data;
  real_T *in1_data;
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
  in3_data = in3->data;
  in2_data = in2->data;
  i = in5 - in4;
  if (i == 1) {
    loop_ub = in2->size[0];
  } else {
    loop_ub = i;
  }
  i1 = in1->size[0] * in1->size[1];
  in1->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, in1, i1, &f_emlrtRTEI);
  i1 = in7 - in6;
  if (i1 == 1) {
    b_loop_ub = in2->size[1];
  } else {
    b_loop_ub = i1;
  }
  stride_0_0 = in1->size[0] * in1->size[1];
  in1->size[1] = b_loop_ub;
  emxEnsureCapacity_real_T(sp, in1, stride_0_0, &f_emlrtRTEI);
  in1_data = in1->data;
  stride_0_0 = (in2->size[0] != 1);
  stride_0_1 = (in2->size[1] != 1);
  stride_1_0 = (i != 1);
  stride_1_1 = (i1 != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      in1_data[i1 + in1->size[0] * i] =
          in2_data[i1 * stride_0_0 + in2->size[0] * aux_0_1] +
          in3_data[(in4 + i1 * stride_1_0) + in3->size[0] * (in6 + aux_1_1)];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
}

static void binary_expand_op_3(const emlrtStack *sp, emxArray_real_T *in1,
                               const emxArray_real_T *in2, int32_T in3,
                               int32_T in4, int32_T in5, int32_T in6,
                               int32_T in7, int32_T in8, int32_T in9)
{
  const real_T *in2_data;
  real_T *in1_data;
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
  i = in4 - in3;
  if (in7 == 1) {
    loop_ub = i;
  } else {
    loop_ub = in7;
  }
  i1 = in1->size[0] * in1->size[1];
  in1->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, in1, i1, &f_emlrtRTEI);
  i1 = in9 - in8;
  stride_1_0 = in6 - in5;
  if (i1 == 1) {
    b_loop_ub = stride_1_0;
  } else {
    b_loop_ub = i1;
  }
  stride_0_1 = in1->size[0] * in1->size[1];
  in1->size[1] = b_loop_ub;
  emxEnsureCapacity_real_T(sp, in1, stride_0_1, &f_emlrtRTEI);
  in1_data = in1->data;
  stride_0_0 = (i != 1);
  stride_0_1 = (stride_1_0 != 1);
  stride_1_0 = (in7 != 1);
  stride_1_1 = (i1 != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      in1_data[i1 + in1->size[0] * i] =
          in2_data[(in3 + i1 * stride_0_0) + in2->size[0] * (in5 + aux_0_1)] +
          in2_data[i1 * stride_1_0 + in2->size[0] * (in8 + aux_1_1)];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
}

void run_Jacobi_core(const emlrtStack *sp, int32_T N_x, int32_T N_y, real_T dx,
                     const emxArray_real_T *U_init, const emxArray_real_T *B,
                     int32_T max_iter, real_T max_residual,
                     real_T check_interval, real_T epsilon, int32_T *k,
                     emxArray_real_T *res_history)
{
  emlrtStack b_st;
  emlrtStack st;
  emxArray_real_T b_local_residual;
  emxArray_real_T *U;
  emxArray_real_T *local_residual;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *r2;
  const real_T *B_data;
  const real_T *U_init_data;
  real_T *U_data;
  real_T *local_residual_data;
  real_T *r3;
  real_T *r6;
  real_T *res_history_data;
  int32_T iv[2];
  int32_T b_k;
  int32_T c_local_residual;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i4;
  int32_T loop_ub;
  int32_T qY;
  boolean_T diverged;
  boolean_T guard1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  B_data = B->data;
  U_init_data = U_init->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &U, 2, &c_emlrtRTEI);
  emxInit_real_T(sp, &local_residual, 2, &h_emlrtRTEI);
  emxInit_real_T(sp, &r, 2, &e_emlrtRTEI);
  emxInit_real_T(sp, &r1, 2, &e_emlrtRTEI);
  i = U->size[0] * U->size[1];
  U->size[0] = U_init->size[0];
  U->size[1] = U_init->size[1];
  emxEnsureCapacity_real_T(sp, U, i, &c_emlrtRTEI);
  U_data = U->data;
  loop_ub = U_init->size[0] * U_init->size[1];
  for (i = 0; i < loop_ub; i++) {
    U_data[i] = U_init_data[i];
  }
  if (N_x < -2147483647) {
    qY = MIN_int32_T;
  } else {
    qY = N_x - 1;
  }
  if (qY < 2) {
    i = 0;
    qY = 0;
  } else {
    if (U_init->size[0] < 2) {
      emlrtDynamicBoundsCheckR2012b(2, 1, U_init->size[0], &rb_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i = 1;
    if (qY > U_init->size[0]) {
      emlrtDynamicBoundsCheckR2012b(qY, 1, U_init->size[0], &qb_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
  }
  if (U_init->size[1] < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, U_init->size[1], &pb_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  loop_ub = qY - i;
  emlrtSubAssignSizeCheckR2012b(&loop_ub, 1, &B->size[0], 1, &f_emlrtECI,
                                (emlrtCTX)sp);
  loop_ub = B->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    U_data[i + i1] = B_data[i1];
  }
  diverged = false;
  if (max_iter < 0) {
    emlrtNonNegativeCheckR2012b(max_iter, &emlrtDCI, (emlrtConstCTX)sp);
  }
  i = res_history->size[0];
  res_history->size[0] = max_iter;
  emxEnsureCapacity_real_T(sp, res_history, i, &d_emlrtRTEI);
  res_history_data = res_history->data;
  for (i = 0; i < max_iter; i++) {
    res_history_data[i] = 0.0;
  }
  st.site = &c_emlrtRSI;
  if (max_iter > 2147483646) {
    b_st.site = &d_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  *k = 1;
  b_k = 0;
  emxInit_real_T(sp, &r2, 1, &i_emlrtRTEI);
  guard1 = false;
  int32_T exitg1;
  do {
    exitg1 = 0;
    if (b_k <= max_iter - 1) {
      __m128d r4;
      __m128d r5;
      real_T res_sum;
      int32_T b_loop_ub;
      int32_T b_qY;
      int32_T c_qY;
      int32_T d_qY;
      int32_T i3;
      int32_T i5;
      int32_T i6;
      int32_T i7;
      int32_T scalarLB;
      int32_T vectorUB;
      boolean_T b_guard1;
      *k = b_k + 1;
      res_sum = 0.0;
      if (N_x < 3) {
        i = 0;
        i1 = 0;
      } else {
        i = U->size[0];
        if (i < 3) {
          emlrtDynamicBoundsCheckR2012b(3, 1, i, &ob_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        i = 2;
        i1 = U->size[0];
        if (N_x > i1) {
          emlrtDynamicBoundsCheckR2012b(N_x, 1, i1, &nb_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        i1 = N_x;
      }
      if (N_y < -2147483647) {
        qY = MIN_int32_T;
      } else {
        qY = N_y - 1;
      }
      if (qY < 2) {
        i2 = 0;
        qY = 0;
      } else {
        i2 = U->size[1];
        if (i2 < 2) {
          emlrtDynamicBoundsCheckR2012b(2, 1, i2, &mb_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        i2 = 1;
        i3 = U->size[1];
        if (qY > i3) {
          emlrtDynamicBoundsCheckR2012b(qY, 1, i3, &lb_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
      }
      if (N_x < -2147483646) {
        b_qY = MIN_int32_T;
      } else {
        b_qY = N_x - 2;
      }
      if (b_qY < 1) {
        b_qY = 0;
      } else {
        i3 = U->size[0];
        if (i3 < 1) {
          emlrtDynamicBoundsCheckR2012b(1, 1, i3, &kb_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        i3 = U->size[0];
        if (b_qY > i3) {
          emlrtDynamicBoundsCheckR2012b(b_qY, 1, i3, &jb_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
      }
      if (N_y < -2147483647) {
        c_qY = MIN_int32_T;
      } else {
        c_qY = N_y - 1;
      }
      if (c_qY < 2) {
        i3 = 0;
        c_qY = 0;
      } else {
        i3 = U->size[1];
        if (i3 < 2) {
          emlrtDynamicBoundsCheckR2012b(2, 1, i3, &ib_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        i3 = 1;
        i4 = U->size[1];
        if (c_qY > i4) {
          emlrtDynamicBoundsCheckR2012b(c_qY, 1, i4, &hb_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
      }
      loop_ub = i1 - i;
      if ((loop_ub != b_qY) && ((loop_ub != 1) && (b_qY != 1))) {
        emlrtDimSizeImpxCheckR2021b(loop_ub, b_qY, &e_emlrtECI,
                                    (emlrtConstCTX)sp);
      }
      b_loop_ub = qY - i2;
      i4 = c_qY - i3;
      if ((b_loop_ub != i4) && ((b_loop_ub != 1) && (i4 != 1))) {
        emlrtDimSizeImpxCheckR2021b(b_loop_ub, i4, &d_emlrtECI,
                                    (emlrtConstCTX)sp);
      }
      if (N_x < -2147483647) {
        d_qY = MIN_int32_T;
      } else {
        d_qY = N_x - 1;
      }
      if (d_qY < 2) {
        i5 = 0;
        d_qY = 0;
      } else {
        i5 = U->size[0];
        if (i5 < 2) {
          emlrtDynamicBoundsCheckR2012b(2, 1, i5, &gb_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        i5 = 1;
        i6 = U->size[0];
        if (d_qY > i6) {
          emlrtDynamicBoundsCheckR2012b(d_qY, 1, i6, &fb_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
      }
      if (N_y < 3) {
        i6 = 0;
        i7 = 0;
      } else {
        i6 = U->size[1];
        if (i6 < 3) {
          emlrtDynamicBoundsCheckR2012b(3, 1, i6, &eb_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        i6 = 2;
        i7 = U->size[1];
        if (N_y > i7) {
          emlrtDynamicBoundsCheckR2012b(N_y, 1, i7, &db_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        i7 = N_y;
      }
      if ((loop_ub == b_qY) && (b_loop_ub == i4)) {
        i1 = r->size[0] * r->size[1];
        r->size[0] = loop_ub;
        r->size[1] = b_loop_ub;
        emxEnsureCapacity_real_T(sp, r, i1, &e_emlrtRTEI);
        r3 = r->data;
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          scalarLB = (loop_ub / 2) << 1;
          vectorUB = scalarLB - 2;
          for (i4 = 0; i4 <= vectorUB; i4 += 2) {
            r4 = _mm_loadu_pd(&U_data[(i + i4) + U->size[0] * (i2 + i1)]);
            r5 = _mm_loadu_pd(&U_data[i4 + U->size[0] * (i3 + i1)]);
            _mm_storeu_pd(&r3[i4 + r->size[0] * i1], _mm_add_pd(r4, r5));
          }
          for (i4 = scalarLB; i4 < loop_ub; i4++) {
            r3[i4 + r->size[0] * i1] =
                U_data[(i + i4) + U->size[0] * (i2 + i1)] +
                U_data[i4 + U->size[0] * (i3 + i1)];
          }
        }
      } else {
        st.site = &w_emlrtRSI;
        binary_expand_op_3(&st, r, U, i, i1, i2, qY, b_qY, i3, c_qY);
        r3 = r->data;
      }
      i = r->size[0];
      i1 = d_qY - i5;
      if ((i != i1) && ((i != 1) && (i1 != 1))) {
        emlrtDimSizeImpxCheckR2021b(i, i1, &e_emlrtECI, (emlrtConstCTX)sp);
      }
      i = r->size[1];
      i2 = i7 - i6;
      if ((i != i2) && ((i != 1) && (i2 != 1))) {
        emlrtDimSizeImpxCheckR2021b(i, i2, &d_emlrtECI, (emlrtConstCTX)sp);
      }
      if (N_x < -2147483647) {
        qY = MIN_int32_T;
      } else {
        qY = N_x - 1;
      }
      if (qY < 2) {
        i = 0;
        qY = 0;
      } else {
        i = U->size[0];
        if (i < 2) {
          emlrtDynamicBoundsCheckR2012b(2, 1, i, &cb_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        i = 1;
        i3 = U->size[0];
        if (qY > i3) {
          emlrtDynamicBoundsCheckR2012b(qY, 1, i3, &bb_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
      }
      if (N_y < -2147483646) {
        b_qY = MIN_int32_T;
      } else {
        b_qY = N_y - 2;
      }
      if (b_qY < 1) {
        b_qY = 0;
      } else {
        i3 = U->size[1];
        if (i3 < 1) {
          emlrtDynamicBoundsCheckR2012b(1, 1, i3, &ab_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        i3 = U->size[1];
        if (b_qY > i3) {
          emlrtDynamicBoundsCheckR2012b(b_qY, 1, i3, &y_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
      }
      if ((r->size[0] == i1) && (r->size[1] == i2)) {
        i1 = r1->size[0] * r1->size[1];
        r1->size[0] = r->size[0];
        r1->size[1] = r->size[1];
        emxEnsureCapacity_real_T(sp, r1, i1, &e_emlrtRTEI);
        r6 = r1->data;
        loop_ub = r->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          b_loop_ub = r->size[0];
          scalarLB = (b_loop_ub / 2) << 1;
          vectorUB = scalarLB - 2;
          for (i2 = 0; i2 <= vectorUB; i2 += 2) {
            r4 = _mm_loadu_pd(&r3[i2 + r->size[0] * i1]);
            r5 = _mm_loadu_pd(&U_data[(i5 + i2) + U->size[0] * (i6 + i1)]);
            _mm_storeu_pd(&r6[i2 + r1->size[0] * i1], _mm_add_pd(r4, r5));
          }
          for (i2 = scalarLB; i2 < b_loop_ub; i2++) {
            r6[i2 + r1->size[0] * i1] =
                r3[i2 + r->size[0] * i1] +
                U_data[(i5 + i2) + U->size[0] * (i6 + i1)];
          }
        }
      } else {
        st.site = &w_emlrtRSI;
        binary_expand_op_2(&st, r1, r, U, i5, d_qY, i6, i7);
        r6 = r1->data;
      }
      i1 = r1->size[0];
      i2 = qY - i;
      if ((i1 != i2) && ((i1 != 1) && (i2 != 1))) {
        emlrtDimSizeImpxCheckR2021b(i1, i2, &e_emlrtECI, (emlrtConstCTX)sp);
      }
      i1 = r1->size[1];
      if ((i1 != b_qY) && ((i1 != 1) && (b_qY != 1))) {
        emlrtDimSizeImpxCheckR2021b(i1, b_qY, &d_emlrtECI, (emlrtConstCTX)sp);
      }
      if (N_x < -2147483647) {
        c_qY = MIN_int32_T;
      } else {
        c_qY = N_x - 1;
      }
      if (c_qY < 2) {
        i1 = 0;
        c_qY = 0;
      } else {
        i1 = U->size[0];
        if (i1 < 2) {
          emlrtDynamicBoundsCheckR2012b(2, 1, i1, &x_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        i1 = 1;
        i3 = U->size[0];
        if (c_qY > i3) {
          emlrtDynamicBoundsCheckR2012b(c_qY, 1, i3, &w_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
      }
      if (N_y < -2147483647) {
        d_qY = MIN_int32_T;
      } else {
        d_qY = N_y - 1;
      }
      if (d_qY < 2) {
        i3 = 0;
        d_qY = 0;
      } else {
        i3 = U->size[1];
        if (i3 < 2) {
          emlrtDynamicBoundsCheckR2012b(2, 1, i3, &v_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        i3 = 1;
        i4 = U->size[1];
        if (d_qY > i4) {
          emlrtDynamicBoundsCheckR2012b(d_qY, 1, i4, &u_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
      }
      if ((r1->size[0] == i2) && (r1->size[1] == b_qY)) {
        loop_ub = r1->size[1];
        for (i2 = 0; i2 < loop_ub; i2++) {
          b_loop_ub = r1->size[0];
          scalarLB = (b_loop_ub / 2) << 1;
          vectorUB = scalarLB - 2;
          for (i4 = 0; i4 <= vectorUB; i4 += 2) {
            r4 = _mm_loadu_pd(&r6[i4 + r1->size[0] * i2]);
            r5 = _mm_loadu_pd(&U_data[(i + i4) + U->size[0] * i2]);
            _mm_storeu_pd(&r6[i4 + r1->size[0] * i2],
                          _mm_mul_pd(_mm_set1_pd(0.25), _mm_add_pd(r4, r5)));
          }
          for (i4 = scalarLB; i4 < b_loop_ub; i4++) {
            r6[i4 + r1->size[0] * i2] =
                0.25 * (r6[i4 + r1->size[0] * i2] +
                        U_data[(i + i4) + U->size[0] * i2]);
          }
        }
      } else {
        st.site = &t_emlrtRSI;
        binary_expand_op_4(&st, r1, U, i, qY, b_qY);
        r6 = r1->data;
      }
      iv[0] = c_qY - i1;
      iv[1] = d_qY - i3;
      emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &r1->size[0], 2, &c_emlrtECI,
                                    (emlrtCTX)sp);
      loop_ub = r1->size[1];
      for (i = 0; i < loop_ub; i++) {
        b_loop_ub = r1->size[0];
        for (i2 = 0; i2 < b_loop_ub; i2++) {
          U_data[(i1 + i2) + U->size[0] * (i3 + i)] = r6[i2 + r1->size[0] * i];
        }
      }
      b_guard1 = false;
      st.site = &v_emlrtRSI;
      if ((b_mod(&st, b_k + 1, check_interval) == 0) || (b_k + 1 == 1)) {
        if (N_x < 3) {
          i = 0;
          i1 = 0;
        } else {
          i = U->size[0];
          if (i < 3) {
            emlrtDynamicBoundsCheckR2012b(3, 1, i, &t_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          i = 2;
          i1 = U->size[0];
          if (N_x > i1) {
            emlrtDynamicBoundsCheckR2012b(N_x, 1, i1, &s_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          i1 = N_x;
        }
        if (N_y < -2147483647) {
          qY = MIN_int32_T;
        } else {
          qY = N_y - 1;
        }
        if (qY < 2) {
          i2 = 0;
          qY = 0;
        } else {
          i2 = U->size[1];
          if (i2 < 2) {
            emlrtDynamicBoundsCheckR2012b(2, 1, i2, &r_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          i2 = 1;
          i3 = U->size[1];
          if (qY > i3) {
            emlrtDynamicBoundsCheckR2012b(qY, 1, i3, &q_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        if (N_x < -2147483646) {
          b_qY = MIN_int32_T;
        } else {
          b_qY = N_x - 2;
        }
        if (b_qY < 1) {
          b_qY = 0;
        } else {
          i3 = U->size[0];
          if (i3 < 1) {
            emlrtDynamicBoundsCheckR2012b(1, 1, i3, &p_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          i3 = U->size[0];
          if (b_qY > i3) {
            emlrtDynamicBoundsCheckR2012b(b_qY, 1, i3, &o_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        if (N_y < -2147483647) {
          c_qY = MIN_int32_T;
        } else {
          c_qY = N_y - 1;
        }
        if (c_qY < 2) {
          i3 = 0;
          c_qY = 0;
        } else {
          i3 = U->size[1];
          if (i3 < 2) {
            emlrtDynamicBoundsCheckR2012b(2, 1, i3, &n_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          i3 = 1;
          i4 = U->size[1];
          if (c_qY > i4) {
            emlrtDynamicBoundsCheckR2012b(c_qY, 1, i4, &m_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        loop_ub = i1 - i;
        if ((loop_ub != b_qY) && ((loop_ub != 1) && (b_qY != 1))) {
          emlrtDimSizeImpxCheckR2021b(loop_ub, b_qY, &b_emlrtECI,
                                      (emlrtConstCTX)sp);
        }
        b_loop_ub = qY - i2;
        i4 = c_qY - i3;
        if ((b_loop_ub != i4) && ((b_loop_ub != 1) && (i4 != 1))) {
          emlrtDimSizeImpxCheckR2021b(b_loop_ub, i4, &emlrtECI,
                                      (emlrtConstCTX)sp);
        }
        if (N_x < -2147483647) {
          d_qY = MIN_int32_T;
        } else {
          d_qY = N_x - 1;
        }
        if (d_qY < 2) {
          i5 = 0;
          d_qY = 0;
        } else {
          i5 = U->size[0];
          if (i5 < 2) {
            emlrtDynamicBoundsCheckR2012b(2, 1, i5, &l_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          i5 = 1;
          i6 = U->size[0];
          if (d_qY > i6) {
            emlrtDynamicBoundsCheckR2012b(d_qY, 1, i6, &k_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        if (N_y < 3) {
          i6 = 0;
          i7 = 0;
        } else {
          i6 = U->size[1];
          if (i6 < 3) {
            emlrtDynamicBoundsCheckR2012b(3, 1, i6, &j_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          i6 = 2;
          i7 = U->size[1];
          if (N_y > i7) {
            emlrtDynamicBoundsCheckR2012b(N_y, 1, i7, &i_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          i7 = N_y;
        }
        if ((loop_ub == b_qY) && (b_loop_ub == i4)) {
          i1 = r->size[0] * r->size[1];
          r->size[0] = loop_ub;
          r->size[1] = b_loop_ub;
          emxEnsureCapacity_real_T(sp, r, i1, &f_emlrtRTEI);
          r3 = r->data;
          for (i1 = 0; i1 < b_loop_ub; i1++) {
            scalarLB = (loop_ub / 2) << 1;
            vectorUB = scalarLB - 2;
            for (i4 = 0; i4 <= vectorUB; i4 += 2) {
              r4 = _mm_loadu_pd(&U_data[(i + i4) + U->size[0] * (i2 + i1)]);
              r5 = _mm_loadu_pd(&U_data[i4 + U->size[0] * (i3 + i1)]);
              _mm_storeu_pd(&r3[i4 + r->size[0] * i1], _mm_add_pd(r4, r5));
            }
            for (i4 = scalarLB; i4 < loop_ub; i4++) {
              r3[i4 + r->size[0] * i1] =
                  U_data[(i + i4) + U->size[0] * (i2 + i1)] +
                  U_data[i4 + U->size[0] * (i3 + i1)];
            }
          }
        } else {
          st.site = &s_emlrtRSI;
          binary_expand_op_3(&st, r, U, i, i1, i2, qY, b_qY, i3, c_qY);
          r3 = r->data;
        }
        i = r->size[0];
        i1 = d_qY - i5;
        if ((i != i1) && ((i != 1) && (i1 != 1))) {
          emlrtDimSizeImpxCheckR2021b(i, i1, &b_emlrtECI, (emlrtConstCTX)sp);
        }
        i = r->size[1];
        i2 = i7 - i6;
        if ((i != i2) && ((i != 1) && (i2 != 1))) {
          emlrtDimSizeImpxCheckR2021b(i, i2, &emlrtECI, (emlrtConstCTX)sp);
        }
        if (N_x < -2147483647) {
          qY = MIN_int32_T;
        } else {
          qY = N_x - 1;
        }
        if (qY < 2) {
          i = 0;
          qY = 0;
        } else {
          i = U->size[0];
          if (i < 2) {
            emlrtDynamicBoundsCheckR2012b(2, 1, i, &h_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          i = 1;
          i3 = U->size[0];
          if (qY > i3) {
            emlrtDynamicBoundsCheckR2012b(qY, 1, i3, &g_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        if (N_y < -2147483646) {
          b_qY = MIN_int32_T;
        } else {
          b_qY = N_y - 2;
        }
        if (b_qY < 1) {
          b_qY = 0;
        } else {
          i3 = U->size[1];
          if (i3 < 1) {
            emlrtDynamicBoundsCheckR2012b(1, 1, i3, &f_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          i3 = U->size[1];
          if (b_qY > i3) {
            emlrtDynamicBoundsCheckR2012b(b_qY, 1, i3, &e_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        if ((r->size[0] == i1) && (r->size[1] == i2)) {
          i1 = local_residual->size[0] * local_residual->size[1];
          local_residual->size[0] = r->size[0];
          local_residual->size[1] = r->size[1];
          emxEnsureCapacity_real_T(sp, local_residual, i1, &f_emlrtRTEI);
          local_residual_data = local_residual->data;
          loop_ub = r->size[1];
          for (i1 = 0; i1 < loop_ub; i1++) {
            b_loop_ub = r->size[0];
            scalarLB = (b_loop_ub / 2) << 1;
            vectorUB = scalarLB - 2;
            for (i2 = 0; i2 <= vectorUB; i2 += 2) {
              r4 = _mm_loadu_pd(&r3[i2 + r->size[0] * i1]);
              r5 = _mm_loadu_pd(&U_data[(i5 + i2) + U->size[0] * (i6 + i1)]);
              _mm_storeu_pd(
                  &local_residual_data[i2 + local_residual->size[0] * i1],
                  _mm_add_pd(r4, r5));
            }
            for (i2 = scalarLB; i2 < b_loop_ub; i2++) {
              local_residual_data[i2 + local_residual->size[0] * i1] =
                  r3[i2 + r->size[0] * i1] +
                  U_data[(i5 + i2) + U->size[0] * (i6 + i1)];
            }
          }
        } else {
          st.site = &s_emlrtRSI;
          binary_expand_op_2(&st, local_residual, r, U, i5, d_qY, i6, i7);
          local_residual_data = local_residual->data;
        }
        i1 = local_residual->size[0];
        i2 = qY - i;
        if ((i1 != i2) && ((i1 != 1) && (i2 != 1))) {
          emlrtDimSizeImpxCheckR2021b(i1, i2, &b_emlrtECI, (emlrtConstCTX)sp);
        }
        i1 = local_residual->size[1];
        if ((i1 != b_qY) && ((i1 != 1) && (b_qY != 1))) {
          emlrtDimSizeImpxCheckR2021b(i1, b_qY, &emlrtECI, (emlrtConstCTX)sp);
        }
        if (N_x < -2147483647) {
          c_qY = MIN_int32_T;
        } else {
          c_qY = N_x - 1;
        }
        if (c_qY < 2) {
          i1 = 0;
          c_qY = 0;
        } else {
          i1 = U->size[0];
          if (i1 < 2) {
            emlrtDynamicBoundsCheckR2012b(2, 1, i1, &d_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          i1 = 1;
          i3 = U->size[0];
          if (c_qY > i3) {
            emlrtDynamicBoundsCheckR2012b(c_qY, 1, i3, &c_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        if (N_y < -2147483647) {
          d_qY = MIN_int32_T;
        } else {
          d_qY = N_y - 1;
        }
        if (d_qY < 2) {
          i3 = 0;
          d_qY = 0;
        } else {
          i3 = U->size[1];
          if (i3 < 2) {
            emlrtDynamicBoundsCheckR2012b(2, 1, i3, &b_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          i3 = 1;
          i4 = U->size[1];
          if (d_qY > i4) {
            emlrtDynamicBoundsCheckR2012b(d_qY, 1, i4, &emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        if ((local_residual->size[0] == i2) &&
            (local_residual->size[1] == b_qY)) {
          loop_ub = local_residual->size[1];
          for (i2 = 0; i2 < loop_ub; i2++) {
            b_loop_ub = local_residual->size[0];
            scalarLB = (b_loop_ub / 2) << 1;
            vectorUB = scalarLB - 2;
            for (i4 = 0; i4 <= vectorUB; i4 += 2) {
              r4 = _mm_loadu_pd(
                  &local_residual_data[i4 + local_residual->size[0] * i2]);
              r5 = _mm_loadu_pd(&U_data[(i + i4) + U->size[0] * i2]);
              _mm_storeu_pd(
                  &local_residual_data[i4 + local_residual->size[0] * i2],
                  _mm_add_pd(r4, r5));
            }
            for (i4 = scalarLB; i4 < b_loop_ub; i4++) {
              local_residual_data[i4 + local_residual->size[0] * i2] +=
                  U_data[(i + i4) + U->size[0] * i2];
            }
          }
        } else {
          st.site = &s_emlrtRSI;
          binary_expand_op_1(&st, local_residual, U, i, qY, b_qY);
          local_residual_data = local_residual->data;
        }
        loop_ub = c_qY - i1;
        i = r1->size[0] * r1->size[1];
        r1->size[0] = loop_ub;
        b_loop_ub = d_qY - i3;
        r1->size[1] = b_loop_ub;
        emxEnsureCapacity_real_T(sp, r1, i, &g_emlrtRTEI);
        r6 = r1->data;
        for (i = 0; i < b_loop_ub; i++) {
          scalarLB = (loop_ub / 2) << 1;
          vectorUB = scalarLB - 2;
          for (i2 = 0; i2 <= vectorUB; i2 += 2) {
            r4 = _mm_loadu_pd(&U_data[(i1 + i2) + U->size[0] * (i3 + i)]);
            _mm_storeu_pd(&r6[i2 + r1->size[0] * i],
                          _mm_mul_pd(_mm_set1_pd(4.0), r4));
          }
          for (i2 = scalarLB; i2 < loop_ub; i2++) {
            r6[i2 + r1->size[0] * i] =
                4.0 * U_data[(i1 + i2) + U->size[0] * (i3 + i)];
          }
        }
        i = local_residual->size[0];
        i1 = r1->size[0];
        if ((i != i1) && ((i != 1) && (i1 != 1))) {
          emlrtDimSizeImpxCheckR2021b(i, i1, &b_emlrtECI, (emlrtConstCTX)sp);
        }
        i = local_residual->size[1];
        i1 = r1->size[1];
        if ((i != i1) && ((i != 1) && (i1 != 1))) {
          emlrtDimSizeImpxCheckR2021b(i, i1, &emlrtECI, (emlrtConstCTX)sp);
        }
        st.site = &b_emlrtRSI;
        res_sum = dx * dx;
        if ((local_residual->size[0] == r1->size[0]) &&
            (local_residual->size[1] == r1->size[1])) {
          loop_ub = local_residual->size[0] * local_residual->size[1];
          scalarLB = (loop_ub / 2) << 1;
          vectorUB = scalarLB - 2;
          for (i = 0; i <= vectorUB; i += 2) {
            r4 = _mm_loadu_pd(&local_residual_data[i]);
            r5 = _mm_loadu_pd(&r6[i]);
            _mm_storeu_pd(&local_residual_data[i],
                          _mm_div_pd(_mm_sub_pd(r4, r5), _mm_set1_pd(res_sum)));
          }
          for (i = scalarLB; i < loop_ub; i++) {
            local_residual_data[i] = (local_residual_data[i] - r6[i]) / res_sum;
          }
        } else {
          st.site = &s_emlrtRSI;
          binary_expand_op(&st, local_residual, r1, res_sum);
        }
        loop_ub = local_residual->size[0] * local_residual->size[1];
        b_local_residual = *local_residual;
        c_local_residual = loop_ub;
        b_local_residual.size = &c_local_residual;
        b_local_residual.numDimensions = 1;
        st.site = &emlrtRSI;
        b_abs(&st, &b_local_residual, r2);
        st.site = &emlrtRSI;
        res_sum = sum(&st, r2);
        if ((b_k + 1 < 1) || (b_k + 1 > res_history->size[0])) {
          emlrtDynamicBoundsCheckR2012b(b_k + 1, 1, res_history->size[0],
                                        &ub_emlrtBCI, (emlrtConstCTX)sp);
        }
        res_history_data[b_k] = res_sum;
        if (res_sum < epsilon) {
          exitg1 = 1;
        } else {
          b_guard1 = true;
        }
      } else {
        if ((b_k < 1) || (b_k > res_history->size[0])) {
          emlrtDynamicBoundsCheckR2012b(b_k, 1, res_history->size[0],
                                        &sb_emlrtBCI, (emlrtConstCTX)sp);
        }
        if ((b_k + 1 < 1) || (b_k + 1 > res_history->size[0])) {
          emlrtDynamicBoundsCheckR2012b(b_k + 1, 1, res_history->size[0],
                                        &tb_emlrtBCI, (emlrtConstCTX)sp);
        }
        res_history_data[b_k] = res_history_data[b_k - 1];
        b_guard1 = true;
      }
      if (b_guard1) {
        if (muDoubleScalarIsNaN(res_sum) || (res_sum > max_residual)) {
          diverged = true;
          guard1 = true;
          exitg1 = 1;
        } else {
          b_k++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)sp);
          }
          guard1 = false;
        }
      }
    } else {
      guard1 = true;
      exitg1 = 1;
    }
  } while (exitg1 == 0);
  if (guard1 && diverged) {
    *k = max_iter;
  }
  emxFree_real_T(sp, &r2);
  emxFree_real_T(sp, &r1);
  emxFree_real_T(sp, &r);
  emxFree_real_T(sp, &local_residual);
  emxFree_real_T(sp, &U);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (run_Jacobi_core.c) */
