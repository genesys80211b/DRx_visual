/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rffe_25_terminate.c
 *
 * Code generation for function 'rffe_25_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "rffe_25.h"
#include "rffe_25_terminate.h"
#include "_coder_rffe_25_mex.h"
#include "rffe_25_data.h"

/* Function Definitions */
void rffe_25_atexit(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  rffe_25_free();
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void rffe_25_terminate(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (rffe_25_terminate.c) */
