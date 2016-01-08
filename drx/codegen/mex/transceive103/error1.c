/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * error1.c
 *
 * Code generation for function 'error1'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "transceive103.h"
#include "error1.h"

/* Variable Definitions */
static emlrtMCInfo e_emlrtMCI = { 20, 5, "error",
  "/usr/local/MATLAB/R2015b/toolbox/eml/lib/matlab/lang/error.m" };

static emlrtRSInfo bb_emlrtRSI = { 20, "error",
  "/usr/local/MATLAB/R2015b/toolbox/eml/lib/matlab/lang/error.m" };

/* Function Declarations */
static void c_error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    emlrtMCInfo *location);

/* Function Definitions */
static void c_error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(sp, 0, NULL, 2, pArrays, "error", true, location);
}

void b_error(const emlrtStack *sp, const char_T varargin_2_data[], const int32_T
             varargin_2_size[2])
{
  int32_T i17;
  static const char_T varargin_1[37] = { 's', 'd', 'r', 'u', ':', 'S', 'D', 'R',
    'u', 'R', 'e', 'c', 'e', 'i', 'v', 'e', 'r', ':', 'R', 'e', 'c', 'e', 'i',
    'v', 'e', 'U', 'n', 's', 'u', 'c', 'c', 'e', 's', 's', 'f', 'u', 'l' };

  char_T u[37];
  const mxArray *y;
  static const int32_T iv7[2] = { 1, 37 };

  const mxArray *m4;
  int32_T u_size[2];
  int32_T loop_ub;
  char_T u_data[1024];
  const mxArray *b_y;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  for (i17 = 0; i17 < 37; i17++) {
    u[i17] = varargin_1[i17];
  }

  y = NULL;
  m4 = emlrtCreateCharArray(2, iv7);
  emlrtInitCharArrayR2013a(sp, 37, m4, &u[0]);
  emlrtAssign(&y, m4);
  u_size[0] = 1;
  u_size[1] = varargin_2_size[1];
  loop_ub = varargin_2_size[0] * varargin_2_size[1];
  for (i17 = 0; i17 < loop_ub; i17++) {
    u_data[i17] = varargin_2_data[i17];
  }

  b_y = NULL;
  m4 = emlrtCreateCharArray(2, u_size);
  emlrtInitCharArrayR2013a(sp, u_size[1], m4, &u_data[0]);
  emlrtAssign(&b_y, m4);
  st.site = &bb_emlrtRSI;
  c_error(&st, y, b_y, &e_emlrtMCI);
}

void error(const emlrtStack *sp, const char_T varargin_2_data[], const int32_T
           varargin_2_size[2])
{
  int32_T i14;
  static const char_T varargin_1[41] = { 's', 'd', 'r', 'u', ':', 'S', 'D', 'R',
    'u', 'T', 'r', 'a', 'n', 's', 'm', 'i', 't', 't', 'e', 'r', ':', 'T', 'r',
    'a', 'n', 's', 'm', 'i', 't', 'U', 'n', 's', 'u', 'c', 'c', 'e', 's', 's',
    'f', 'u', 'l' };

  char_T u[41];
  const mxArray *y;
  static const int32_T iv6[2] = { 1, 41 };

  const mxArray *m3;
  int32_T u_size[2];
  int32_T loop_ub;
  char_T u_data[1024];
  const mxArray *b_y;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  for (i14 = 0; i14 < 41; i14++) {
    u[i14] = varargin_1[i14];
  }

  y = NULL;
  m3 = emlrtCreateCharArray(2, iv6);
  emlrtInitCharArrayR2013a(sp, 41, m3, &u[0]);
  emlrtAssign(&y, m3);
  u_size[0] = 1;
  u_size[1] = varargin_2_size[1];
  loop_ub = varargin_2_size[0] * varargin_2_size[1];
  for (i14 = 0; i14 < loop_ub; i14++) {
    u_data[i14] = varargin_2_data[i14];
  }

  b_y = NULL;
  m3 = emlrtCreateCharArray(2, u_size);
  emlrtInitCharArrayR2013a(sp, u_size[1], m3, &u_data[0]);
  emlrtAssign(&b_y, m3);
  st.site = &bb_emlrtRSI;
  c_error(&st, y, b_y, &e_emlrtMCI);
}

/* End of code generation (error1.c) */
