/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * fftshift.c
 *
 * Code generation for function 'fftshift'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "rffe_test.h"
#include "fftshift.h"
#include "CoarseFrequencyEstimatorBase.h"
#include "eml_int_forloop_overflow_check.h"
#include "rffe_test_mexutil.h"

/* Variable Definitions */
static emlrtRSInfo tb_emlrtRSI = { 11, "fftshift",
  "/usr/local/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/fftshift.m" };

static emlrtRSInfo ub_emlrtRSI = { 58, "eml_fftshift",
  "/usr/local/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/private/eml_fftshift.m"
};

static emlrtRSInfo vb_emlrtRSI = { 51, "eml_fftshift",
  "/usr/local/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/private/eml_fftshift.m"
};

static emlrtRSInfo wb_emlrtRSI = { 48, "eml_fftshift",
  "/usr/local/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/private/eml_fftshift.m"
};

static emlrtRSInfo xb_emlrtRSI = { 36, "eml_fftshift",
  "/usr/local/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/private/eml_fftshift.m"
};

static emlrtRSInfo yb_emlrtRSI = { 30, "eml_fftshift",
  "/usr/local/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/private/eml_fftshift.m"
};

static emlrtRSInfo ac_emlrtRSI = { 27, "eml_fftshift",
  "/usr/local/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/private/eml_fftshift.m"
};

static emlrtRSInfo bc_emlrtRSI = { 20, "eml_fftshift",
  "/usr/local/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/private/eml_fftshift.m"
};

static emlrtRSInfo dc_emlrtRSI = { 20, "eml_int_forloop_overflow_check",
  "/usr/local/MATLAB/R2015b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

/* Function Definitions */
void fftshift(const emlrtStack *sp, real_T x[512])
{
  int32_T dim;
  int32_T i1;
  int32_T vlend2;
  int32_T vstride;
  int32_T k;
  int32_T midoffset;
  boolean_T b0;
  int32_T j;
  int32_T ia;
  int32_T ib;
  real_T xtmp;
  boolean_T b1;
  int32_T ic;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  for (dim = 0; dim < 2; dim++) {
    st.site = &tb_emlrtRSI;
    if (dim + 1 <= 1) {
      i1 = 512;
    } else {
      i1 = 1;
    }

    if (i1 <= 1) {
    } else {
      vlend2 = asr_s32(i1, 1U);
      b_st.site = &bc_emlrtRSI;
      vstride = 1;
      k = 1;
      while (k <= dim) {
        vstride <<= 9;
        k = 2;
      }

      midoffset = vlend2 * vstride - 1;
      if (vlend2 << 1 == i1) {
        b_st.site = &ac_emlrtRSI;
        i1 = -1;
        b_st.site = &yb_emlrtRSI;
        if (1 > vstride) {
          b0 = false;
        } else {
          b0 = (vstride > 2147483646);
        }

        if (b0) {
          c_st.site = &dc_emlrtRSI;
          check_forloop_overflow_error(&c_st);
        }

        for (j = 1; j <= vstride; j++) {
          i1++;
          ia = i1;
          ib = (i1 + midoffset) + 1;
          b_st.site = &xb_emlrtRSI;
          for (k = 1; k <= vlend2; k++) {
            xtmp = x[ia];
            x[ia] = x[ib];
            x[ib] = xtmp;
            ia += vstride;
            ib += vstride;
          }
        }
      } else {
        b_st.site = &wb_emlrtRSI;
        i1 = -1;
        b_st.site = &vb_emlrtRSI;
        if (1 > vstride) {
          b1 = false;
        } else {
          b1 = (vstride > 2147483646);
        }

        if (b1) {
          c_st.site = &dc_emlrtRSI;
          check_forloop_overflow_error(&c_st);
        }

        for (j = 1; j <= vstride; j++) {
          i1++;
          ia = i1;
          ib = (i1 + midoffset) + 1;
          xtmp = x[ib];
          b_st.site = &ub_emlrtRSI;
          for (k = 1; k <= vlend2; k++) {
            ic = ib + vstride;
            x[ib] = x[ia];
            x[ia] = x[ic];
            ia += vstride;
            ib = ic;
          }

          x[ib] = xtmp;
        }
      }
    }
  }
}

/* End of code generation (fftshift.c) */
