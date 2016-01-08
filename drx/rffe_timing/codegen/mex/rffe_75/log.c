/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * log.c
 *
 * Code generation for function 'log'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "rffe_75.h"
#include "log.h"
#include "error.h"

/* Variable Definitions */
static emlrtRSInfo ib_emlrtRSI = { 13, "log",
  "/usr/local/MATLAB/R2015b/toolbox/eml/lib/matlab/elfun/log.m" };

/* Function Definitions */
void b_log(const emlrtStack *sp, real_T x[1408])
{
  boolean_T p;
  int32_T k;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  p = false;
  for (k = 0; k < 1408; k++) {
    if (p || (x[k] < 0.0)) {
      p = true;
    } else {
      p = false;
    }
  }

  if (p) {
    st.site = &ib_emlrtRSI;
    error(&st);
  }

  for (k = 0; k < 1408; k++) {
    x[k] = muDoubleScalarLog(x[k]);
  }
}

/* End of code generation (log.c) */
