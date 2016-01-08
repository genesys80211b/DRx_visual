/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * PSKCoarseFrequencyEstimator.c
 *
 * Code generation for function 'PSKCoarseFrequencyEstimator'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "rffe_25.h"
#include "PSKCoarseFrequencyEstimator.h"
#include "CoarseFrequencyEstimatorBase.h"
#include "fftshift.h"
#include "power.h"

/* Variable Definitions */
static emlrtRSInfo pb_emlrtRSI = { 198, "PSKCoarseFrequencyEstimator",
  "/usr/local/MATLAB/R2015b/toolbox/comm/comm/+comm/PSKCoarseFrequencyEstimator.m"
};

static emlrtRSInfo rb_emlrtRSI = { 163, "CoarseFrequencyEstimatorBase",
  "/usr/local/MATLAB/R2015b/toolbox/comm/comm/+comm/+internal/CoarseFrequencyEstimatorBase.m"
};

/* Function Definitions */
c_comm_PSKCoarseFrequencyEstima *c_PSKCoarseFrequencyEstimator_P
  (c_comm_PSKCoarseFrequencyEstima *obj)
{
  c_comm_PSKCoarseFrequencyEstima *b_obj;
  c_comm_PSKCoarseFrequencyEstima *c_obj;
  b_obj = obj;
  c_obj = b_obj;
  c_obj->isInitialized = 0;
  return b_obj;
}

real_T c_PSKCoarseFrequencyEstimator_s(const emlrtStack *sp,
  c_comm_PSKCoarseFrequencyEstima *obj, const creal_T x[64])
{
  c_comm_PSKCoarseFrequencyEstima *b_obj;
  creal_T dcv0[64];
  real_T absFFTSig[512];
  int32_T ixstart;
  real_T mtmp;
  int32_T itmp;
  int32_T ix;
  boolean_T exitg1;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &pb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_obj = obj;
  b_power(x, dcv0);
  c_CoarseFrequencyEstimatorBase_(b_obj, dcv0, absFFTSig);
  b_st.site = &rb_emlrtRSI;
  fftshift(&b_st, absFFTSig);
  ixstart = 1;
  mtmp = absFFTSig[0];
  itmp = 1;
  if (muDoubleScalarIsNaN(absFFTSig[0])) {
    ix = 2;
    exitg1 = false;
    while ((!exitg1) && (ix < 513)) {
      ixstart = ix;
      if (!muDoubleScalarIsNaN(absFFTSig[ix - 1])) {
        mtmp = absFFTSig[ix - 1];
        itmp = ix;
        exitg1 = true;
      } else {
        ix++;
      }
    }
  }

  if (ixstart < 512) {
    while (ixstart + 1 < 513) {
      if (absFFTSig[ixstart] > mtmp) {
        mtmp = absFFTSig[ixstart];
        itmp = ixstart + 1;
      }

      ixstart++;
    }
  }

  return 17.755681818181817 * (((real_T)itmp - 256.0) - 1.0) / 2.0;
}

/* End of code generation (PSKCoarseFrequencyEstimator.c) */
