/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * warning.c
 *
 * Code generation for function 'warning'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "rffe_50.h"
#include "warning.h"

/* Variable Definitions */
static emlrtMCInfo emlrtMCI = { 14, 25, "warning",
  "/usr/local/MATLAB/R2015b/toolbox/shared/coder/coder/+coder/+internal/warning.m"
};

static emlrtMCInfo b_emlrtMCI = { 14, 9, "warning",
  "/usr/local/MATLAB/R2015b/toolbox/shared/coder/coder/+coder/+internal/warning.m"
};

static emlrtRSInfo ic_emlrtRSI = { 14, "warning",
  "/usr/local/MATLAB/R2015b/toolbox/shared/coder/coder/+coder/+internal/warning.m"
};

/* Function Declarations */
static const mxArray *b_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);
static void feval(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                  emlrtMCInfo *location);

/* Function Definitions */
static const mxArray *b_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m4;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m4, 3, pArrays, "feval", true, location);
}

static void feval(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                  emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(sp, 0, NULL, 2, pArrays, "feval", true, location);
}

void warning(const emlrtStack *sp, const char_T varargin_1_data[], const int32_T
             varargin_1_size[2])
{
  int32_T i1;
  static const char_T cv15[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  char_T u[7];
  const mxArray *y;
  static const int32_T iv1[2] = { 1, 7 };

  const mxArray *m0;
  static const char_T cv16[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  char_T b_u[7];
  const mxArray *b_y;
  static const int32_T iv2[2] = { 1, 7 };

  static const char_T msgID[27] = { 'c', 'o', 'm', 'm', ':', 'A', 'G', 'C', ':',
    'L', 'e', 'g', 'a', 'c', 'y', 'M', 'o', 'd', 'e', 'P', 'r', 'o', 'p', 'e',
    'r', 't', 'y' };

  char_T c_u[27];
  const mxArray *c_y;
  static const int32_T iv3[2] = { 1, 27 };

  int32_T u_size[2];
  int32_T loop_ub;
  char_T u_data[14];
  const mxArray *d_y;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  for (i1 = 0; i1 < 7; i1++) {
    u[i1] = cv15[i1];
  }

  y = NULL;
  m0 = emlrtCreateCharArray(2, iv1);
  emlrtInitCharArrayR2013a(sp, 7, m0, &u[0]);
  emlrtAssign(&y, m0);
  for (i1 = 0; i1 < 7; i1++) {
    b_u[i1] = cv16[i1];
  }

  b_y = NULL;
  m0 = emlrtCreateCharArray(2, iv2);
  emlrtInitCharArrayR2013a(sp, 7, m0, &b_u[0]);
  emlrtAssign(&b_y, m0);
  for (i1 = 0; i1 < 27; i1++) {
    c_u[i1] = msgID[i1];
  }

  c_y = NULL;
  m0 = emlrtCreateCharArray(2, iv3);
  emlrtInitCharArrayR2013a(sp, 27, m0, &c_u[0]);
  emlrtAssign(&c_y, m0);
  u_size[0] = 1;
  u_size[1] = varargin_1_size[1];
  loop_ub = varargin_1_size[0] * varargin_1_size[1];
  for (i1 = 0; i1 < loop_ub; i1++) {
    u_data[i1] = varargin_1_data[i1];
  }

  d_y = NULL;
  m0 = emlrtCreateCharArray(2, u_size);
  emlrtInitCharArrayR2013a(sp, u_size[1], m0, &u_data[0]);
  emlrtAssign(&d_y, m0);
  st.site = &ic_emlrtRSI;
  feval(&st, y, b_feval(&st, b_y, c_y, d_y, &emlrtMCI), &b_emlrtMCI);
}

/* End of code generation (warning.c) */
