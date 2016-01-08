/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * PhaseFrequencyOffset.c
 *
 * Code generation for function 'PhaseFrequencyOffset'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "rffe_100.h"
#include "PhaseFrequencyOffset.h"
#include "rffe_100_data.h"

/* Variable Definitions */
static emlrtRTEInfo d_emlrtRTEI = { 1, 1, "PhaseFrequencyOffset",
  "/usr/local/MATLAB/R2015b/toolbox/comm/comm/compiled/+commcodegen/PhaseFrequencyOffset.p"
};

/* Function Definitions */
c_commcodegen_PhaseFrequencyOff *c_PhaseFrequencyOffset_PhaseFre(const
  emlrtStack *sp, c_commcodegen_PhaseFrequencyOff *obj)
{
  c_commcodegen_PhaseFrequencyOff *b_obj;
  c_commcodegen_PhaseFrequencyOff *c_obj;
  comm_PhaseFrequencyOffset_2 *d_obj;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  b_obj = obj;
  st.site = &eb_emlrtRSI;
  c_obj = b_obj;
  c_obj->isInitialized = 0;
  st.site = &eb_emlrtRSI;
  b_obj->c_NoTuningBeforeLockingCodeGenE = true;
  st.site = &eb_emlrtRSI;
  d_obj = &b_obj->cSFunObject;

  /* System object Constructor function: comm.PhaseFrequencyOffset */
  d_obj->S0_isInitialized = 0;
  d_obj->P0_Phase = 0.0;
  st.site = &eb_emlrtRSI;
  c_obj = b_obj;
  if (c_obj->c_NoTuningBeforeLockingCodeGenE) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &d_emlrtRTEI,
      "MATLAB:system:noTuningBeforeLockingCodeGen", 0);
  }

  b_obj->c_NoTuningBeforeLockingCodeGenE = false;
  return b_obj;
}

/* End of code generation (PhaseFrequencyOffset.c) */
