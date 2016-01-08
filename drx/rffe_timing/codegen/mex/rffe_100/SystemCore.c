/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * SystemCore.c
 *
 * Code generation for function 'SystemCore'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "rffe_100.h"
#include "SystemCore.h"
#include "PSKCoarseFrequencyEstimator.h"
#include "AGC.h"
#include "rffe_100_data.h"

/* Variable Definitions */
static emlrtRSInfo ab_emlrtRSI = { 1, "FIRDecimator",
  "/usr/local/MATLAB/R2015b/toolbox/dsp/dsp/compiled/+dspcodegen/FIRDecimator.p"
};

static emlrtRSInfo bb_emlrtRSI = { 1, "Nondirect",
  "/usr/local/MATLAB/R2015b/toolbox/shared/system/coder/+matlab/+system/+mixin/+coder/Nondirect.p"
};

static emlrtRSInfo jb_emlrtRSI = { 535, "AGC",
  "/usr/local/MATLAB/R2015b/toolbox/comm/comm/+comm/AGC.m" };

static emlrtRSInfo ec_emlrtRSI = { 129, "RaisedCosineReceiveFilter",
  "/usr/local/MATLAB/R2015b/toolbox/comm/comm/+comm/RaisedCosineReceiveFilter.m"
};

static emlrtRSInfo fc_emlrtRSI = { 838, "RaisedCosineFilterBase",
  "/usr/local/MATLAB/R2015b/toolbox/comm/comm/+comm/+internal/RaisedCosineFilterBase.m"
};

static emlrtRSInfo gc_emlrtRSI = { 834, "RaisedCosineFilterBase",
  "/usr/local/MATLAB/R2015b/toolbox/comm/comm/+comm/+internal/RaisedCosineFilterBase.m"
};

static emlrtRSInfo hc_emlrtRSI = { 842, "RaisedCosineFilterBase",
  "/usr/local/MATLAB/R2015b/toolbox/comm/comm/+comm/+internal/RaisedCosineFilterBase.m"
};

static emlrtRTEInfo e_emlrtRTEI = { 1, 1, "SystemCore",
  "/usr/local/MATLAB/R2015b/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"
};

static emlrtRTEInfo f_emlrtRTEI = { 15, 1, "release",
  "/usr/local/MATLAB/R2015b/toolbox/eml/lib/scomp/release.m" };

static emlrtRTEInfo h_emlrtRTEI = { 39, 1, "update",
  "/usr/local/MATLAB/R2015b/toolbox/eml/lib/scomp/update.m" };

static emlrtRTEInfo i_emlrtRTEI = { 15, 1, "reset",
  "/usr/local/MATLAB/R2015b/toolbox/eml/lib/scomp/reset.m" };

static emlrtRTEInfo j_emlrtRTEI = { 39, 1, "setup",
  "/usr/local/MATLAB/R2015b/toolbox/eml/lib/scomp/setup.m" };

/* Function Definitions */
void SystemCore_release(const emlrtStack *sp, comm_AGC *obj)
{
  static const char_T cv3[7] = { 'r', 'e', 'l', 'e', 'a', 's', 'e' };

  if (obj->isInitialized != 2) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &e_emlrtRTEI,
      "MATLAB:system:methodCalledWhenReleasedCodegen", 3, 4, 7, cv3);
  }

  if (obj->isInitialized == 1) {
    obj->isInitialized = 2;
  }
}

void SystemCore_step(const emlrtStack *sp, comm_AGC *obj, const creal_T
                     varargin_1[1408], creal_T varargout_1[1408])
{
  static const char_T cv8[4] = { 's', 't', 'e', 'p' };

  comm_AGC *b_obj;
  static const char_T cv9[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T k;
  static const int16_T inputSize[8] = { 1408, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  static const int16_T iv0[8] = { 1408, 1, 1, 1, 1, 1, 1, 1 };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  if (obj->isInitialized != 2) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &e_emlrtRTEI,
      "MATLAB:system:methodCalledWhenReleasedCodegen", 3, 4, 4, cv8);
  }

  if (obj->isInitialized != 1) {
    st.site = &u_emlrtRSI;
    b_obj = obj;
    b_st.site = &u_emlrtRSI;
    if (b_obj->isInitialized == 0) {
    } else {
      emlrtErrorWithMessageIdR2012b(&b_st, &e_emlrtRTEI,
        "MATLAB:system:methodCalledWhenLockedReleasedCodegen", 3, 4, 5, cv9);
    }

    b_obj->isInitialized = 1;
    c_st.site = &u_emlrtRSI;
    for (k = 0; k < 8; k++) {
      b_obj->inputVarSize1[k] = (uint32_T)inputSize[k];
    }

    c_st.site = &u_emlrtRSI;
    d_st.site = &u_emlrtRSI;
    AGC_validatePropertiesImpl(&d_st, b_obj);
    c_st.site = &u_emlrtRSI;
    for (k = 0; k < 99; k++) {
      b_obj->FilterState[k] = 0.0;
    }

    b_obj->Gain = 0.0;
    b_obj->pCastedStepSize = b_obj->AdaptationStepSize;
    b_obj->TunablePropsChanged = false;
    b_st.site = &u_emlrtRSI;
    for (k = 0; k < 99; k++) {
      b_obj->FilterState[k] = 0.0;
    }

    c_st.site = &jb_emlrtRSI;
    b_obj->Gain = 0.0;
  }

  st.site = &u_emlrtRSI;
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    b_st.site = &u_emlrtRSI;
    AGC_validatePropertiesImpl(&b_st, b_obj);
    b_obj->TunablePropsChanged = false;
    b_st.site = &u_emlrtRSI;
    b_obj->pCastedStepSize = b_obj->AdaptationStepSize;
  }

  st.site = &u_emlrtRSI;
  b_obj = obj;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 8)) {
    if (b_obj->inputVarSize1[k] != (uint32_T)iv0[k]) {
      for (k = 0; k < 8; k++) {
        b_obj->inputVarSize1[k] = (uint32_T)inputSize[k];
      }

      exitg1 = true;
    } else {
      k++;
    }
  }

  st.site = &u_emlrtRSI;
  AGC_stepImpl(&st, obj, varargin_1, varargout_1);
}

void b_SystemCore_release(const emlrtStack *sp, dspcodegen_FIRDecimator *obj)
{
  static const char_T cv4[7] = { 'r', 'e', 'l', 'e', 'a', 's', 'e' };

  dspcodegen_FIRDecimator *b_obj;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (obj->isInitialized != 2) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &e_emlrtRTEI,
      "MATLAB:system:methodCalledWhenReleasedCodegen", 3, 4, 7, cv4);
  }

  if (obj->isInitialized == 1) {
    obj->isInitialized = 2;
    st.site = &u_emlrtRSI;
    b_obj = obj;
    b_st.site = &ab_emlrtRSI;
    if (b_obj->cSFunObject.S0_isInitialized == 2) {
      emlrtErrorWithMessageIdR2012b(&b_st, &f_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    /* System object Destructor function: dsp.FIRDecimator */
    if ((b_obj->cSFunObject.S0_isInitialized == 1) &&
        (b_obj->cSFunObject.S0_isInitialized != 2)) {
      b_obj->cSFunObject.S0_isInitialized = 2;
    }
  }
}

void b_SystemCore_step(const emlrtStack *sp, dspcodegen_FIRDecimator *obj, const
  creal_T varargin_1[1408], creal_T varargout_1[64])
{
  static const char_T cv17[4] = { 's', 't', 'e', 'p' };

  dspcodegen_FIRDecimator *b_obj;
  static const char_T cv18[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T i;
  dsp_FIRDecimator_0 *c_obj;
  int32_T phaseIdx;
  int32_T cffIdx;
  int32_T outBufIdx;
  int32_T iIdx;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  if (obj->isInitialized != 2) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &e_emlrtRTEI,
      "MATLAB:system:methodCalledWhenReleasedCodegen", 3, 4, 4, cv17);
  }

  if (obj->isInitialized != 1) {
    st.site = &u_emlrtRSI;
    b_obj = obj;
    b_st.site = &u_emlrtRSI;
    if (b_obj->isInitialized == 0) {
    } else {
      emlrtErrorWithMessageIdR2012b(&b_st, &e_emlrtRTEI,
        "MATLAB:system:methodCalledWhenLockedReleasedCodegen", 3, 4, 5, cv18);
    }

    b_obj->isInitialized = 1;
    c_st.site = &u_emlrtRSI;
    d_st.site = &ab_emlrtRSI;
    if (b_obj->cSFunObject.S0_isInitialized != 1) {
      if (b_obj->cSFunObject.S0_isInitialized == 2) {
        emlrtErrorWithMessageIdR2012b(&d_st, &j_emlrtRTEI,
          "MATLAB:system:setupCalledWhenLockedReleasedCodegen", 0);
      }

      b_obj->cSFunObject.S0_isInitialized = 1;
    } else {
      emlrtErrorWithMessageIdR2012b(&d_st, &j_emlrtRTEI,
        "MATLAB:system:setupCalledWhenLockedCodegen", 0);
    }

    b_st.site = &u_emlrtRSI;
    c_st.site = &ab_emlrtRSI;
    if (b_obj->cSFunObject.S0_isInitialized == 2) {
      emlrtErrorWithMessageIdR2012b(&c_st, &i_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    d_st.site = NULL;

    /* System object Initialization function: dsp.FIRDecimator */
    b_obj->cSFunObject.W2_CoeffIdx = 42;
    b_obj->cSFunObject.W0_PhaseIdx = 21;
    b_obj->cSFunObject.W1_Sums.re = 0.0;
    b_obj->cSFunObject.W1_Sums.im = 0.0;
    for (i = 0; i < 22; i++) {
      b_obj->cSFunObject.W3_StatesBuff[i].re = 0.0;
      b_obj->cSFunObject.W3_StatesBuff[i].im = 0.0;
    }
  }

  st.site = &u_emlrtRSI;
  b_obj = obj;
  b_st.site = &bb_emlrtRSI;
  c_st.site = &ab_emlrtRSI;
  c_obj = &b_obj->cSFunObject;
  d_st.site = NULL;

  /* System object Outputs function: dsp.FIRDecimator */
  i = 0;
  phaseIdx = b_obj->cSFunObject.W0_PhaseIdx;
  cffIdx = b_obj->cSFunObject.W2_CoeffIdx;
  outBufIdx = 0;
  for (iIdx = 0; iIdx < 1408; iIdx++) {
    c_obj->W1_Sums.re += varargin_1[i].re * c_obj->P1_FILT[cffIdx];
    c_obj->W1_Sums.im += varargin_1[i].im * c_obj->P1_FILT[cffIdx];
    c_obj->W1_Sums.re += c_obj->W3_StatesBuff[phaseIdx].re * c_obj->
      P1_FILT[cffIdx + 1];
    c_obj->W1_Sums.im += c_obj->W3_StatesBuff[phaseIdx].im * c_obj->
      P1_FILT[cffIdx + 1];
    cffIdx += 2;
    c_obj->W3_StatesBuff[phaseIdx] = varargin_1[i];
    i++;
    phaseIdx++;
    if (phaseIdx >= 22) {
      c_obj->O0_Y0[outBufIdx] = c_obj->W1_Sums;
      outBufIdx++;
      c_obj->W1_Sums.re = 0.0;
      c_obj->W1_Sums.im = 0.0;
      phaseIdx = 0;
      cffIdx = 0;
    }
  }

  b_obj->cSFunObject.W2_CoeffIdx = cffIdx;
  b_obj->cSFunObject.W0_PhaseIdx = phaseIdx;
  for (i = 0; i < 64; i++) {
    varargout_1[i] = b_obj->cSFunObject.O0_Y0[i];
  }

  b_st.site = &bb_emlrtRSI;
  c_st.site = &ab_emlrtRSI;
  if (b_obj->cSFunObject.S0_isInitialized != 1) {
    emlrtErrorWithMessageIdR2012b(&c_st, &h_emlrtRTEI,
      "MATLAB:system:updateCalledBeforeSetup", 0);
  }
}

void c_SystemCore_release(const emlrtStack *sp, c_comm_PSKCoarseFrequencyEstima *
  obj)
{
  static const char_T cv5[7] = { 'r', 'e', 'l', 'e', 'a', 's', 'e' };

  if (obj->isInitialized != 2) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &e_emlrtRTEI,
      "MATLAB:system:methodCalledWhenReleasedCodegen", 3, 4, 7, cv5);
  }

  if (obj->isInitialized == 1) {
    obj->isInitialized = 2;

    /* System object Destructor function: dsp.FFT */
  }
}

real_T c_SystemCore_step(const emlrtStack *sp, c_comm_PSKCoarseFrequencyEstima
  *obj, const creal_T varargin_1[64])
{
  static const char_T cv19[4] = { 's', 't', 'e', 'p' };

  c_comm_PSKCoarseFrequencyEstima *b_obj;
  static const char_T cv20[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T i;
  static const real_T dv4[96] = { 1.0, 0.99879545620517241, 0.99518472667219693,
    0.989176509964781, 0.98078528040323043, 0.970031253194544,
    0.95694033573220882, 0.94154406518302081, 0.92387953251128674,
    0.90398929312344334, 0.881921264348355, 0.85772861000027212,
    0.83146961230254524, 0.80320753148064494, 0.773010453362737,
    0.74095112535495911, 0.70710678118654757, 0.67155895484701833,
    0.63439328416364549, 0.59569930449243347, 0.55557023301960229,
    0.51410274419322166, 0.47139673682599781, 0.4275550934302822,
    0.38268343236508984, 0.33688985339222005, 0.29028467725446233,
    0.24298017990326398, 0.19509032201612833, 0.14673047445536175,
    0.09801714032956077, 0.049067674327418126, 6.123233995736766E-17,
    -0.049067674327418008, -0.098017140329560645, -0.14673047445536164,
    -0.19509032201612819, -0.24298017990326387, -0.29028467725446216,
    -0.33688985339221994, -0.38268343236508973, -0.42755509343028186,
    -0.4713967368259977, -0.51410274419322166, -0.555570233019602,
    -0.59569930449243336, -0.63439328416364538, -0.67155895484701844,
    -0.70710678118654746, -0.74095112535495888, -0.773010453362737,
    -0.80320753148064483, -0.83146961230254535, -0.857728610000272,
    -0.88192126434835494, -0.90398929312344334, -0.92387953251128674,
    -0.9415440651830207, -0.95694033573220882, -0.970031253194544,
    -0.98078528040323043, -0.989176509964781, -0.99518472667219682,
    -0.99879545620517241, -1.0, -0.99879545620517241, -0.99518472667219693,
    -0.989176509964781, -0.98078528040323043, -0.970031253194544,
    -0.95694033573220894, -0.94154406518302081, -0.92387953251128685,
    -0.90398929312344345, -0.881921264348355, -0.85772861000027212,
    -0.83146961230254546, -0.80320753148064494, -0.7730104533627371,
    -0.74095112535495911, -0.70710678118654768, -0.67155895484701866,
    -0.63439328416364593, -0.59569930449243313, -0.55557023301960218,
    -0.51410274419322177, -0.47139673682599786, -0.42755509343028247,
    -0.38268343236509034, -0.33688985339221994, -0.29028467725446244,
    -0.24298017990326412, -0.19509032201612866, -0.1467304744553623,
    -0.098017140329560451, -0.049067674327418029 };

  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (obj->isInitialized != 2) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &e_emlrtRTEI,
      "MATLAB:system:methodCalledWhenReleasedCodegen", 3, 4, 4, cv19);
  }

  if (obj->isInitialized != 1) {
    st.site = &u_emlrtRSI;
    b_obj = obj;
    b_st.site = &u_emlrtRSI;
    if (b_obj->isInitialized == 0) {
    } else {
      emlrtErrorWithMessageIdR2012b(&b_st, &e_emlrtRTEI,
        "MATLAB:system:methodCalledWhenLockedReleasedCodegen", 3, 4, 5, cv20);
    }

    b_obj->isInitialized = 1;
    for (i = 0; i < 128; i++) {
      b_obj->pRaisedSignalBuffer[i].re = 0.0;
      b_obj->pRaisedSignalBuffer[i].im = 0.0;
    }

    /* System object Constructor function: dsp.FFT */
    b_obj->pFFT.S0_isInitialized = 0;
    for (i = 0; i < 96; i++) {
      b_obj->pFFT.P0_TwiddleTable[i] = dv4[i];
    }
  }

  st.site = &u_emlrtRSI;
  return c_PSKCoarseFrequencyEstimator_s(&st, obj, varargin_1);
}

void d_SystemCore_release(const emlrtStack *sp, c_commcodegen_PhaseFrequencyOff *
  obj)
{
  static const char_T cv6[7] = { 'r', 'e', 'l', 'e', 'a', 's', 'e' };

  c_commcodegen_PhaseFrequencyOff *b_obj;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (obj->isInitialized != 2) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &e_emlrtRTEI,
      "MATLAB:system:methodCalledWhenReleasedCodegen", 3, 4, 7, cv6);
  }

  if (obj->isInitialized == 1) {
    obj->isInitialized = 2;
    st.site = &u_emlrtRSI;
    b_obj = obj;
    b_st.site = &eb_emlrtRSI;
    if (b_obj->cSFunObject.S0_isInitialized == 2) {
      emlrtErrorWithMessageIdR2012b(&b_st, &f_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    /* System object Destructor function: comm.PhaseFrequencyOffset */
    if ((b_obj->cSFunObject.S0_isInitialized == 1) &&
        (b_obj->cSFunObject.S0_isInitialized != 2)) {
      b_obj->cSFunObject.S0_isInitialized = 2;
    }
  }
}

void d_SystemCore_step(const emlrtStack *sp, c_commcodegen_PhaseFrequencyOff
  *obj, const creal_T varargin_1[1408], real_T varargin_2, creal_T varargout_1
  [1408])
{
  static const char_T cv22[4] = { 's', 't', 'e', 'p' };

  c_commcodegen_PhaseFrequencyOff *b_obj;
  static const char_T cv23[5] = { 's', 'e', 't', 'u', 'p' };

  comm_PhaseFrequencyOffset_2 *c_obj;
  int32_T spfIdx;
  real_T omegaT_plus_phi;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  if (obj->isInitialized != 2) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &e_emlrtRTEI,
      "MATLAB:system:methodCalledWhenReleasedCodegen", 3, 4, 4, cv22);
  }

  if (obj->isInitialized != 1) {
    st.site = &u_emlrtRSI;
    b_obj = obj;
    b_st.site = &u_emlrtRSI;
    if (b_obj->isInitialized == 0) {
    } else {
      emlrtErrorWithMessageIdR2012b(&b_st, &e_emlrtRTEI,
        "MATLAB:system:methodCalledWhenLockedReleasedCodegen", 3, 4, 5, cv23);
    }

    b_obj->isInitialized = 1;
    c_st.site = &u_emlrtRSI;
    d_st.site = &eb_emlrtRSI;
    if (b_obj->cSFunObject.S0_isInitialized != 1) {
      if (b_obj->cSFunObject.S0_isInitialized == 2) {
        emlrtErrorWithMessageIdR2012b(&d_st, &j_emlrtRTEI,
          "MATLAB:system:setupCalledWhenLockedReleasedCodegen", 0);
      }

      b_obj->cSFunObject.S0_isInitialized = 1;
    } else {
      emlrtErrorWithMessageIdR2012b(&d_st, &j_emlrtRTEI,
        "MATLAB:system:setupCalledWhenLockedCodegen", 0);
    }

    b_obj->c_NoTuningBeforeLockingCodeGenE = true;
    b_st.site = &u_emlrtRSI;
    c_st.site = &eb_emlrtRSI;
    if (b_obj->cSFunObject.S0_isInitialized == 2) {
      emlrtErrorWithMessageIdR2012b(&c_st, &i_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    d_st.site = NULL;

    /* System object Initialization function: comm.PhaseFrequencyOffset */
    b_obj->cSFunObject.W0_omegatTnow = 0.0;
  }

  st.site = &u_emlrtRSI;
  b_obj = obj;
  b_st.site = &bb_emlrtRSI;
  c_st.site = &eb_emlrtRSI;
  c_obj = &b_obj->cSFunObject;
  d_st.site = NULL;

  /* System object Outputs function: comm.PhaseFrequencyOffset */
  for (spfIdx = 0; spfIdx < 1408; spfIdx++) {
    /* Compute (w*t + phi) argument for calls to cos and sin below */
    omegaT_plus_phi = 6.2831853071795862 * c_obj->W0_omegatTnow +
      c_obj->P0_Phase;
    varargout_1[spfIdx].re = varargin_1[spfIdx].re * muDoubleScalarCos
      (omegaT_plus_phi) - varargin_1[spfIdx].im * muDoubleScalarSin
      (omegaT_plus_phi);
    varargout_1[spfIdx].im = varargin_1[spfIdx].re * muDoubleScalarSin
      (omegaT_plus_phi) + varargin_1[spfIdx].im * muDoubleScalarCos
      (omegaT_plus_phi);
    c_obj->W0_omegatTnow += varargin_2 * 5.0E-6;
  }

  b_st.site = &bb_emlrtRSI;
  c_st.site = &eb_emlrtRSI;
  if (b_obj->cSFunObject.S0_isInitialized != 1) {
    emlrtErrorWithMessageIdR2012b(&c_st, &h_emlrtRTEI,
      "MATLAB:system:updateCalledBeforeSetup", 0);
  }
}

void e_SystemCore_release(const emlrtStack *sp, c_comm_RaisedCosineReceiveFilte *
  obj)
{
  static const char_T cv7[7] = { 'r', 'e', 'l', 'e', 'a', 's', 'e' };

  c_comm_RaisedCosineReceiveFilte *b_obj;
  dspcodegen_FIRDecimator_1 *c_obj;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  if (obj->isInitialized != 2) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &e_emlrtRTEI,
      "MATLAB:system:methodCalledWhenReleasedCodegen", 3, 4, 7, cv7);
  }

  if (obj->isInitialized == 1) {
    obj->isInitialized = 2;
    st.site = &u_emlrtRSI;
    b_obj = obj;
    b_st.site = &hc_emlrtRSI;
    c_obj = &b_obj->pFilter;
    if (b_obj->pFilter.isInitialized != 2) {
    } else {
      emlrtErrorWithMessageIdR2012b(&b_st, &e_emlrtRTEI,
        "MATLAB:system:methodCalledWhenReleasedCodegen", 3, 4, 7, cv7);
    }

    if (b_obj->pFilter.isInitialized == 1) {
      b_obj->pFilter.isInitialized = 2;
      c_st.site = &u_emlrtRSI;
      d_st.site = &ab_emlrtRSI;
      if (c_obj->cSFunObject.S0_isInitialized == 2) {
        emlrtErrorWithMessageIdR2012b(&d_st, &f_emlrtRTEI,
          "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
      }

      /* System object Destructor function: dsp.FIRDecimator */
      if ((c_obj->cSFunObject.S0_isInitialized == 1) &&
          (c_obj->cSFunObject.S0_isInitialized != 2)) {
        c_obj->cSFunObject.S0_isInitialized = 2;
      }
    }
  }
}

void e_SystemCore_step(const emlrtStack *sp, c_comm_RaisedCosineReceiveFilte
  *obj, const creal_T varargin_1[1408], creal_T varargout_1[704])
{
  static const char_T cv24[4] = { 's', 't', 'e', 'p' };

  c_comm_RaisedCosineReceiveFilte *b_obj;
  static const char_T cv25[5] = { 's', 'e', 't', 'u', 'p' };

  dspcodegen_FIRDecimator_1 *c_obj;
  int32_T i;
  static const real_T dv5[18] = { -0.0012781195636223334, 0.031836218258752352,
    -0.10863220255043712, 0.43518607964699429, 0.43518607964699429,
    -0.10863220255043712, 0.031836218258752352, -0.0012781195636223334, 0.0,
    0.0084150310965014751, -0.02342022927216195, 0.040026611817101494,
    -0.053042813435272153, 0.76519533802772377, -0.053042813435272153,
    0.040026611817101494, -0.02342022927216195, 0.0084150310965014751 };

  static const char_T cv26[5] = { 'r', 'e', 's', 'e', 't' };

  dsp_FIRDecimator_4 *d_obj;
  int32_T curTapIdx;
  int32_T phaseIdx;
  int32_T cffIdx;
  int32_T outBufIdx;
  int32_T maxWindow;
  int32_T iIdx;
  int32_T jIdx;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
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
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  if (obj->isInitialized != 2) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &e_emlrtRTEI,
      "MATLAB:system:methodCalledWhenReleasedCodegen", 3, 4, 4, cv24);
  }

  if (obj->isInitialized != 1) {
    st.site = &u_emlrtRSI;
    b_obj = obj;
    b_st.site = &u_emlrtRSI;
    if (b_obj->isInitialized == 0) {
    } else {
      emlrtErrorWithMessageIdR2012b(&b_st, &e_emlrtRTEI,
        "MATLAB:system:methodCalledWhenLockedReleasedCodegen", 3, 4, 5, cv25);
    }

    b_obj->isInitialized = 1;
    c_st.site = &u_emlrtRSI;
    d_st.site = &ec_emlrtRSI;
    c_obj = &b_obj->pFilter;
    e_st.site = &ab_emlrtRSI;
    f_st.site = &s_emlrtRSI;
    f_st.site = &s_emlrtRSI;
    b_obj->pFilter.isInitialized = 0;
    e_st.site = &ab_emlrtRSI;
    f_st.site = &bb_emlrtRSI;
    e_st.site = &ab_emlrtRSI;

    /* System object Constructor function: dsp.FIRDecimator */
    c_obj->cSFunObject.S0_isInitialized = 0;
    c_obj->cSFunObject.P0_IC.re = 0.0;
    c_obj->cSFunObject.P0_IC.im = 0.0;
    for (i = 0; i < 18; i++) {
      c_obj->cSFunObject.P1_FILT[i] = dv5[i];
    }

    b_st.site = &u_emlrtRSI;
    c_st.site = &fc_emlrtRSI;
    c_obj = &b_obj->pFilter;
    if (b_obj->pFilter.isInitialized != 2) {
    } else {
      emlrtErrorWithMessageIdR2012b(&c_st, &e_emlrtRTEI,
        "MATLAB:system:methodCalledWhenReleasedCodegen", 3, 4, 5, cv26);
    }

    if (b_obj->pFilter.isInitialized == 1) {
      d_st.site = &u_emlrtRSI;
      e_st.site = &ab_emlrtRSI;
      if (c_obj->cSFunObject.S0_isInitialized == 2) {
        emlrtErrorWithMessageIdR2012b(&e_st, &i_emlrtRTEI,
          "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
      }

      f_st.site = NULL;

      /* System object Initialization function: dsp.FIRDecimator */
      c_obj->cSFunObject.W2_CoeffIdx = 9;
      c_obj->cSFunObject.W0_PhaseIdx = 1;
      c_obj->cSFunObject.W4_TapDelayIndex = 8;
      c_obj->cSFunObject.W1_Sums.re = 0.0;
      c_obj->cSFunObject.W1_Sums.im = 0.0;
      for (i = 0; i < 16; i++) {
        c_obj->cSFunObject.W3_StatesBuff[i].re = 0.0;
        c_obj->cSFunObject.W3_StatesBuff[i].im = 0.0;
      }
    }
  }

  st.site = &u_emlrtRSI;
  b_obj = obj;
  b_st.site = &gc_emlrtRSI;
  c_obj = &b_obj->pFilter;
  if (b_obj->pFilter.isInitialized != 2) {
  } else {
    emlrtErrorWithMessageIdR2012b(&b_st, &e_emlrtRTEI,
      "MATLAB:system:methodCalledWhenReleasedCodegen", 3, 4, 4, cv24);
  }

  if (b_obj->pFilter.isInitialized != 1) {
    c_st.site = &u_emlrtRSI;
    d_st.site = &u_emlrtRSI;
    if (b_obj->pFilter.isInitialized == 0) {
    } else {
      emlrtErrorWithMessageIdR2012b(&d_st, &e_emlrtRTEI,
        "MATLAB:system:methodCalledWhenLockedReleasedCodegen", 3, 4, 5, cv25);
    }

    b_obj->pFilter.isInitialized = 1;
    e_st.site = &u_emlrtRSI;
    f_st.site = &ab_emlrtRSI;
    if (c_obj->cSFunObject.S0_isInitialized != 1) {
      if (c_obj->cSFunObject.S0_isInitialized == 2) {
        emlrtErrorWithMessageIdR2012b(&f_st, &j_emlrtRTEI,
          "MATLAB:system:setupCalledWhenLockedReleasedCodegen", 0);
      }

      c_obj->cSFunObject.S0_isInitialized = 1;
    } else {
      emlrtErrorWithMessageIdR2012b(&f_st, &j_emlrtRTEI,
        "MATLAB:system:setupCalledWhenLockedCodegen", 0);
    }

    d_st.site = &u_emlrtRSI;
    e_st.site = &ab_emlrtRSI;
    if (c_obj->cSFunObject.S0_isInitialized == 2) {
      emlrtErrorWithMessageIdR2012b(&e_st, &i_emlrtRTEI,
        "MATLAB:system:runtimeMethodCalledWhenReleasedCodegen", 0);
    }

    f_st.site = NULL;

    /* System object Initialization function: dsp.FIRDecimator */
    c_obj->cSFunObject.W2_CoeffIdx = 9;
    c_obj->cSFunObject.W0_PhaseIdx = 1;
    c_obj->cSFunObject.W4_TapDelayIndex = 8;
    c_obj->cSFunObject.W1_Sums.re = 0.0;
    c_obj->cSFunObject.W1_Sums.im = 0.0;
    for (i = 0; i < 16; i++) {
      c_obj->cSFunObject.W3_StatesBuff[i].re = 0.0;
      c_obj->cSFunObject.W3_StatesBuff[i].im = 0.0;
    }
  }

  c_st.site = &u_emlrtRSI;
  d_st.site = &bb_emlrtRSI;
  e_st.site = &ab_emlrtRSI;
  d_obj = &b_obj->pFilter.cSFunObject;
  f_st.site = NULL;

  /* System object Outputs function: dsp.FIRDecimator */
  i = 0;
  curTapIdx = b_obj->pFilter.cSFunObject.W4_TapDelayIndex;
  phaseIdx = b_obj->pFilter.cSFunObject.W0_PhaseIdx;
  cffIdx = b_obj->pFilter.cSFunObject.W2_CoeffIdx;
  outBufIdx = 0;
  maxWindow = (phaseIdx + 1) << 3;
  for (iIdx = 0; iIdx < 1408; iIdx++) {
    d_obj->W1_Sums.re += varargin_1[i].re * d_obj->P1_FILT[cffIdx];
    d_obj->W1_Sums.im += varargin_1[i].im * d_obj->P1_FILT[cffIdx];
    cffIdx++;
    for (jIdx = curTapIdx + 1; jIdx < maxWindow; jIdx++) {
      d_obj->W1_Sums.re += d_obj->W3_StatesBuff[jIdx].re * d_obj->P1_FILT[cffIdx];
      d_obj->W1_Sums.im += d_obj->W3_StatesBuff[jIdx].im * d_obj->P1_FILT[cffIdx];
      cffIdx++;
    }

    for (jIdx = maxWindow - 8; jIdx <= curTapIdx; jIdx++) {
      d_obj->W1_Sums.re += d_obj->W3_StatesBuff[jIdx].re * d_obj->P1_FILT[cffIdx];
      d_obj->W1_Sums.im += d_obj->W3_StatesBuff[jIdx].im * d_obj->P1_FILT[cffIdx];
      cffIdx++;
    }

    d_obj->W3_StatesBuff[curTapIdx] = varargin_1[i];
    i++;
    curTapIdx += 8;
    if (curTapIdx >= 16) {
      curTapIdx -= 16;
    }

    phaseIdx++;
    if (phaseIdx < 2) {
      maxWindow += 8;
    } else {
      d_obj->O0_Y0[outBufIdx] = d_obj->W1_Sums;
      outBufIdx++;
      d_obj->W1_Sums.re = 0.0;
      d_obj->W1_Sums.im = 0.0;
      phaseIdx = 0;
      cffIdx = 0;
      curTapIdx--;
      if (curTapIdx < 0) {
        curTapIdx += 8;
      }

      maxWindow = 8;
    }
  }

  c_obj->cSFunObject.W4_TapDelayIndex = curTapIdx;
  c_obj->cSFunObject.W2_CoeffIdx = cffIdx;
  c_obj->cSFunObject.W0_PhaseIdx = phaseIdx;
  for (i = 0; i < 704; i++) {
    varargout_1[i] = c_obj->cSFunObject.O0_Y0[i];
  }

  d_st.site = &bb_emlrtRSI;
  e_st.site = &ab_emlrtRSI;
  if (c_obj->cSFunObject.S0_isInitialized != 1) {
    emlrtErrorWithMessageIdR2012b(&e_st, &h_emlrtRTEI,
      "MATLAB:system:updateCalledBeforeSetup", 0);
  }
}

/* End of code generation (SystemCore.c) */
