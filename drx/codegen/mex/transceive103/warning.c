/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * warning.c
 *
 * Code generation for function 'warning'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "transceive103.h"
#include "warning.h"

/* Variable Definitions */
static emlrtMCInfo emlrtMCI = { 14, 25, "warning",
  "/usr/local/MATLAB/R2015b/toolbox/shared/coder/coder/+coder/+internal/warning.m"
};

static emlrtMCInfo b_emlrtMCI = { 14, 9, "warning",
  "/usr/local/MATLAB/R2015b/toolbox/shared/coder/coder/+coder/+internal/warning.m"
};

static emlrtRSInfo db_emlrtRSI = { 14, "warning",
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
  const mxArray *m13;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m13, 3, pArrays, "feval", true, location);
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
  int32_T i19;
  static const char_T cv18[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  char_T u[7];
  const mxArray *y;
  static const int32_T iv9[2] = { 1, 7 };

  const mxArray *m6;
  static const char_T cv19[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  char_T b_u[7];
  const mxArray *b_y;
  static const int32_T iv10[2] = { 1, 7 };

  static const char_T msgID[31] = { 's', 'd', 'r', 'u', ':', 'S', 'D', 'R', 'u',
    'B', 'a', 's', 'e', ':', 'D', 'i', 's', 'c', 'o', 'n', 'n', 'e', 'c', 't',
    'P', 'r', 'o', 'b', 'l', 'e', 'm' };

  char_T c_u[31];
  const mxArray *c_y;
  static const int32_T iv11[2] = { 1, 31 };

  int32_T u_size[2];
  int32_T loop_ub;
  char_T u_data[1024];
  const mxArray *d_y;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  for (i19 = 0; i19 < 7; i19++) {
    u[i19] = cv18[i19];
  }

  y = NULL;
  m6 = emlrtCreateCharArray(2, iv9);
  emlrtInitCharArrayR2013a(sp, 7, m6, &u[0]);
  emlrtAssign(&y, m6);
  for (i19 = 0; i19 < 7; i19++) {
    b_u[i19] = cv19[i19];
  }

  b_y = NULL;
  m6 = emlrtCreateCharArray(2, iv10);
  emlrtInitCharArrayR2013a(sp, 7, m6, &b_u[0]);
  emlrtAssign(&b_y, m6);
  for (i19 = 0; i19 < 31; i19++) {
    c_u[i19] = msgID[i19];
  }

  c_y = NULL;
  m6 = emlrtCreateCharArray(2, iv11);
  emlrtInitCharArrayR2013a(sp, 31, m6, &c_u[0]);
  emlrtAssign(&c_y, m6);
  u_size[0] = 1;
  u_size[1] = varargin_1_size[1];
  loop_ub = varargin_1_size[0] * varargin_1_size[1];
  for (i19 = 0; i19 < loop_ub; i19++) {
    u_data[i19] = varargin_1_data[i19];
  }

  d_y = NULL;
  m6 = emlrtCreateCharArray(2, u_size);
  emlrtInitCharArrayR2013a(sp, u_size[1], m6, &u_data[0]);
  emlrtAssign(&d_y, m6);
  st.site = &db_emlrtRSI;
  feval(&st, y, b_feval(&st, b_y, c_y, d_y, &emlrtMCI), &b_emlrtMCI);
}

/* End of code generation (warning.c) */
