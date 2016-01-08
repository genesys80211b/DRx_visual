/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * exp.c
 *
 * Code generation for function 'exp'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "rffe_test.h"
#include "exp.h"

/* Function Definitions */
void b_exp(creal_T x[1408])
{
  int32_T k;
  real_T x_re;
  real_T r;
  for (k = 0; k < 1408; k++) {
    if (muDoubleScalarIsInf(x[k].im) && muDoubleScalarIsInf(x[k].re) && (x[k].re
         < 0.0)) {
      x_re = 0.0;
      r = 0.0;
    } else {
      r = muDoubleScalarExp(x[k].re / 2.0);
      x_re = r * (r * muDoubleScalarCos(x[k].im));
      r *= r * muDoubleScalarSin(x[k].im);
    }

    x[k].re = x_re;
    x[k].im = r;
  }
}

/* End of code generation (exp.c) */
