/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * power.c
 *
 * Code generation for function 'power'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "rffe_50.h"
#include "power.h"

/* Variable Definitions */
static emlrtRSInfo mb_emlrtRSI = { 49, "power",
  "/usr/local/MATLAB/R2015b/toolbox/eml/lib/matlab/ops/power.m" };

/* Function Definitions */
void power(const emlrtStack *sp, const real_T a[1408], real_T y[1408])
{
  real_T x[1408];
  int32_T k;
  int32_T b_k;
  jmp_buf * volatile emlrtJBStack;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &mb_emlrtRSI;
  memcpy(&x[0], &a[0], 1408U * sizeof(real_T));
  emlrtEnterParallelRegion(&st, omp_in_parallel());
  emlrtPushJmpBuf(&st, &emlrtJBStack);

#pragma omp parallel for \
 num_threads(emlrtAllocRegionTLSs(st.tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs())) \
 private(b_k)

  for (k = 1; k < 1409; k++) {
    b_k = k;
    y[b_k - 1] = x[b_k - 1] * x[b_k - 1];
  }

  emlrtPopJmpBuf(&st, &emlrtJBStack);
  emlrtExitParallelRegion(&st, omp_in_parallel());
}

/* End of code generation (power.c) */
