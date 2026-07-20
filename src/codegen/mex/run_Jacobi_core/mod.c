/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mod.c
 *
 * Code generation for function 'mod'
 *
 */

/* Include files */
#include "mod.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo u_emlrtRSI = {
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

int32_T b_mod(const emlrtStack *sp, int32_T x, real_T y)
{
  emlrtStack st;
  real_T b_r;
  int32_T i;
  int32_T r;
  st.prev = sp;
  st.tls = sp->tls;
  b_r = muDoubleScalarRound(y);
  if (b_r < 2.147483648E+9) {
    if (b_r >= -2.147483648E+9) {
      i = (int32_T)b_r;
    } else {
      i = MIN_int32_T;
    }
  } else if (b_r >= 2.147483648E+9) {
    i = MAX_int32_T;
  } else {
    i = 0;
  }
  if (i == y) {
    if (i == 0) {
      r = x;
    } else {
      st.site = &u_emlrtRSI;
      r = x - div_s32_floor(&st, x, i) * i;
    }
  } else {
    b_r = x;
    if (!(y == 0.0)) {
      if (muDoubleScalarIsNaN(y)) {
        b_r = rtNaN;
      } else if (muDoubleScalarIsInf(y)) {
        if (y < 0.0) {
          b_r = y;
        }
      } else {
        boolean_T rEQ0;
        b_r = muDoubleScalarRem(x, y);
        rEQ0 = (b_r == 0.0);
        if ((!rEQ0) && (y > muDoubleScalarFloor(y))) {
          real_T q;
          q = muDoubleScalarAbs((real_T)x / y);
          rEQ0 = !(muDoubleScalarAbs(q - muDoubleScalarFloor(q + 0.5)) >
                   2.2204460492503131E-16 * q);
        }
        if (rEQ0) {
          b_r = y * 0.0;
        } else if (y < 0.0) {
          b_r += y;
        }
      }
    }
    b_r = muDoubleScalarRound(b_r);
    if (b_r < 2.147483648E+9) {
      if (b_r >= -2.147483648E+9) {
        r = (int32_T)b_r;
      } else {
        r = MIN_int32_T;
      }
    } else {
      r = 0;
    }
  }
  return r;
}

/* End of code generation (mod.c) */
