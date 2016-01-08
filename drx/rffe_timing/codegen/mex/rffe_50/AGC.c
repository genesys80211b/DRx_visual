/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * AGC.c
 *
 * Code generation for function 'AGC'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "rffe_50.h"
#include "AGC.h"
#include "exp.h"
#include "log.h"
#include "filter.h"
#include "power.h"
#include "abs.h"
#include "warning.h"
#include "rffe_50_data.h"

/* Variable Definitions */
static emlrtRSInfo p_emlrtRSI = { 261, "AGC",
  "/usr/local/MATLAB/R2015b/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo q_emlrtRSI = { 262, "AGC",
  "/usr/local/MATLAB/R2015b/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo r_emlrtRSI = { 1, "Helper",
  "/usr/local/MATLAB/R2015b/toolbox/comm/comm/compiled/+comm/+internal/Helper.p"
};

static emlrtRSInfo t_emlrtRSI = { 1, "SystemProp",
  "/usr/local/MATLAB/R2015b/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"
};

static emlrtRSInfo v_emlrtRSI = { 1, "Propagates",
  "/usr/local/MATLAB/R2015b/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Propagates.p"
};

static emlrtRSInfo w_emlrtRSI = { 1, "CustomIcon",
  "/usr/local/MATLAB/R2015b/toolbox/matlab/system/+matlab/+system/+mixin/CustomIcon.p"
};

static emlrtRSInfo x_emlrtRSI = { 1, "pvParse",
  "/usr/local/MATLAB/R2015b/toolbox/matlab/system/+matlab/+system/pvParse.p" };

static emlrtRSInfo y_emlrtRSI = { 274, "AGC",
  "/usr/local/MATLAB/R2015b/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo hb_emlrtRSI = { 357, "AGC",
  "/usr/local/MATLAB/R2015b/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo kb_emlrtRSI = { 435, "AGC",
  "/usr/local/MATLAB/R2015b/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo lb_emlrtRSI = { 436, "AGC",
  "/usr/local/MATLAB/R2015b/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRTEInfo emlrtRTEI = { 152, 28, "validateattributes",
  "/usr/local/MATLAB/R2015b/toolbox/eml/lib/matlab/lang/validateattributes.m" };

static emlrtRTEInfo b_emlrtRTEI = { 171, 28, "validateattributes",
  "/usr/local/MATLAB/R2015b/toolbox/eml/lib/matlab/lang/validateattributes.m" };

static emlrtRTEInfo c_emlrtRTEI = { 162, 28, "validateattributes",
  "/usr/local/MATLAB/R2015b/toolbox/eml/lib/matlab/lang/validateattributes.m" };

/* Function Definitions */
comm_AGC *AGC_AGC(const emlrtStack *sp, comm_AGC *obj, real_T varargin_4)
{
  comm_AGC *b_obj;
  comm_AGC *c_obj;
  boolean_T flag;
  static const char_T cv0[43] = { 'E', 'x', 'p', 'e', 'c', 't', 'e', 'd', ' ',
    'A', 'd', 'a', 'p', 't', 'a', 't', 'i', 'o', 'n', 'S', 't', 'e', 'p', 'S',
    'i', 'z', 'e', ' ', 't', 'o', ' ', 'b', 'e', ' ', 'p', 'o', 's', 'i', 't',
    'i', 'v', 'e', '.' };

  static const char_T cv1[42] = { 'E', 'x', 'p', 'e', 'c', 't', 'e', 'd', ' ',
    'A', 'd', 'a', 'p', 't', 'a', 't', 'i', 'o', 'n', 'S', 't', 'e', 'p', 'S',
    'i', 'z', 'e', ' ', 't', 'o', ' ', 'b', 'e', ' ', 'n', 'o', 'n', '-', 'N',
    'a', 'N', '.' };

  static const char_T cv2[41] = { 'E', 'x', 'p', 'e', 'c', 't', 'e', 'd', ' ',
    'A', 'd', 'a', 'p', 't', 'a', 't', 'i', 'o', 'n', 'S', 't', 'e', 'p', 'S',
    'i', 'z', 'e', ' ', 't', 'o', ' ', 'b', 'e', ' ', 'f', 'i', 'n', 'i', 't',
    'e', '.' };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_obj = obj;
  b_obj->pStepSizeSet = false;
  b_obj->pDetectorMethodSet = false;
  b_obj->pLoopMethodSet = false;
  b_obj->pUpdatePeriodSet = false;
  b_obj->pGainOutputPortSet = false;
  st.site = &p_emlrtRSI;
  c_obj = b_obj;
  b_st.site = &r_emlrtRSI;
  c_st.site = &s_emlrtRSI;
  d_st.site = &t_emlrtRSI;
  c_st.site = &s_emlrtRSI;
  c_obj->isInitialized = 0;
  d_st.site = &u_emlrtRSI;
  st.site = &p_emlrtRSI;
  b_st.site = &v_emlrtRSI;
  st.site = &p_emlrtRSI;
  b_st.site = &w_emlrtRSI;
  st.site = &q_emlrtRSI;
  c_obj = b_obj;
  b_st.site = &t_emlrtRSI;
  c_st.site = &t_emlrtRSI;
  d_st.site = &x_emlrtRSI;
  flag = (c_obj->isInitialized == 1);
  if (flag) {
    c_obj->TunablePropsChanged = true;
  }

  d_st.site = &x_emlrtRSI;
  e_st.site = &y_emlrtRSI;
  flag = true;
  if (!(varargin_4 <= 0.0)) {
  } else {
    flag = false;
  }

  if (flag) {
  } else {
    emlrtErrMsgIdAndExplicitTxt(&e_st, &emlrtRTEI, "MATLAB:expectedPositive", 43,
      cv0);
  }

  flag = true;
  if (!muDoubleScalarIsNaN(varargin_4)) {
  } else {
    flag = false;
  }

  if (flag) {
  } else {
    emlrtErrMsgIdAndExplicitTxt(&e_st, &b_emlrtRTEI, "MATLAB:expectedNonNaN", 42,
      cv1);
  }

  flag = true;
  if ((!muDoubleScalarIsInf(varargin_4)) && (!muDoubleScalarIsNaN(varargin_4)))
  {
  } else {
    flag = false;
  }

  if (flag) {
  } else {
    emlrtErrMsgIdAndExplicitTxt(&e_st, &c_emlrtRTEI, "MATLAB:expectedFinite", 41,
      cv2);
  }

  c_obj->AdaptationStepSize = varargin_4;
  return b_obj;
}

void AGC_stepImpl(const emlrtStack *sp, comm_AGC *obj, const creal_T x[1408],
                  creal_T y[1408])
{
  real_T g;
  real_T K;
  real_T dv1[1408];
  real_T dv2[1408];
  real_T dv3[99];
  real_T logAbsX2[1408];
  int32_T p;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  g = obj->Gain;
  K = obj->pCastedStepSize;
  b_abs(x, dv1);
  st.site = &kb_emlrtRSI;
  power(&st, dv1, dv2);
  filter(dv2, obj->FilterState, logAbsX2, dv3);
  for (p = 0; p < 99; p++) {
    obj->FilterState[p] = dv3[p];
  }

  st.site = &lb_emlrtRSI;
  b_log(&st, logAbsX2);
  for (p = 0; p < 1408; p++) {
    y[p].re = g;
    y[p].im = 0.0;
    g = muDoubleScalarMin(g + K * (0.0 - (logAbsX2[p] + 2.0 * g)),
                          3.4538776394910684);
  }

  b_exp(y);
  for (p = 0; p < 1408; p++) {
    K = y[p].re;
    y[p].re = x[p].re * y[p].re - x[p].im * y[p].im;
    y[p].im = x[p].re * y[p].im + x[p].im * K;
  }

  obj->Gain = g;
}

void AGC_validatePropertiesImpl(const emlrtStack *sp, const comm_AGC *obj)
{
  boolean_T throwWarning;
  int32_T propertyName_size[2];
  int32_T i0;
  static const char_T cv10[8] = { 'S', 't', 'e', 'p', 'S', 'i', 'z', 'e' };

  char_T propertyName_data[14];
  static const char_T cv11[12] = { 'U', 'p', 'd', 'a', 't', 'e', 'P', 'e', 'r',
    'i', 'o', 'd' };

  static const char_T cv12[14] = { 'D', 'e', 't', 'e', 'c', 't', 'o', 'r', 'M',
    'e', 't', 'h', 'o', 'd' };

  static const char_T cv13[10] = { 'L', 'o', 'o', 'p', 'M', 'e', 't', 'h', 'o',
    'd' };

  static const char_T cv14[14] = { 'G', 'a', 'i', 'n', 'O', 'u', 't', 'p', 'u',
    't', 'P', 'o', 'r', 't' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if (obj->pStepSizeSet) {
    throwWarning = true;
    propertyName_size[0] = 1;
    propertyName_size[1] = 8;
    for (i0 = 0; i0 < 8; i0++) {
      propertyName_data[i0] = cv10[i0];
    }
  } else if (obj->pUpdatePeriodSet) {
    throwWarning = true;
    propertyName_size[0] = 1;
    propertyName_size[1] = 12;
    for (i0 = 0; i0 < 12; i0++) {
      propertyName_data[i0] = cv11[i0];
    }
  } else if (obj->pDetectorMethodSet) {
    throwWarning = true;
    propertyName_size[0] = 1;
    propertyName_size[1] = 14;
    for (i0 = 0; i0 < 14; i0++) {
      propertyName_data[i0] = cv12[i0];
    }
  } else if (obj->pLoopMethodSet) {
    throwWarning = true;
    propertyName_size[0] = 1;
    propertyName_size[1] = 10;
    for (i0 = 0; i0 < 10; i0++) {
      propertyName_data[i0] = cv13[i0];
    }
  } else if (obj->pGainOutputPortSet) {
    throwWarning = true;
    propertyName_size[0] = 1;
    propertyName_size[1] = 14;
    for (i0 = 0; i0 < 14; i0++) {
      propertyName_data[i0] = cv14[i0];
    }
  } else {
    throwWarning = false;
    propertyName_size[0] = 1;
    propertyName_size[1] = 0;
  }

  if (throwWarning) {
    st.site = &hb_emlrtRSI;
    warning(&st, propertyName_data, propertyName_size);
  }
}

/* End of code generation (AGC.c) */
