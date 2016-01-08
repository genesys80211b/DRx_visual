/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rffe_100_terminate.c
 *
 * Code generation for function 'rffe_100_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "rffe_100.h"
#include "rffe_100_terminate.h"
#include "_coder_rffe_100_mex.h"
#include "rffe_100_data.h"

/* Function Definitions */
void rffe_100_atexit(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  rffe_100_free();
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void rffe_100_terminate(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (rffe_100_terminate.c) */
