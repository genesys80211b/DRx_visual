/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * PSKCoarseFrequencyEstimator.c
 *
 * Code generation for function 'PSKCoarseFrequencyEstimator'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "rffe_75.h"
#include "PSKCoarseFrequencyEstimator.h"
#include "eml_int_forloop_overflow_check.h"

/* Variable Definitions */
static emlrtRSInfo pb_emlrtRSI = { 198, "PSKCoarseFrequencyEstimator",
  "/usr/local/MATLAB/R2015b/toolbox/comm/comm/+comm/PSKCoarseFrequencyEstimator.m"
};

static emlrtRSInfo qb_emlrtRSI = { 160, "CoarseFrequencyEstimatorBase",
  "/usr/local/MATLAB/R2015b/toolbox/comm/comm/+comm/+internal/CoarseFrequencyEstimatorBase.m"
};

static emlrtRSInfo rb_emlrtRSI = { 163, "CoarseFrequencyEstimatorBase",
  "/usr/local/MATLAB/R2015b/toolbox/comm/comm/+comm/+internal/CoarseFrequencyEstimatorBase.m"
};

static emlrtRSInfo sb_emlrtRSI = { 179, "CoarseFrequencyEstimatorBase",
  "/usr/local/MATLAB/R2015b/toolbox/comm/comm/+comm/+internal/CoarseFrequencyEstimatorBase.m"
};

static emlrtRSInfo tb_emlrtRSI = { 11, "fftshift",
  "/usr/local/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/fftshift.m" };

static emlrtRSInfo ub_emlrtRSI = { 58, "eml_fftshift",
  "/usr/local/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/private/eml_fftshift.m"
};

static emlrtRSInfo vb_emlrtRSI = { 51, "eml_fftshift",
  "/usr/local/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/private/eml_fftshift.m"
};

static emlrtRSInfo wb_emlrtRSI = { 48, "eml_fftshift",
  "/usr/local/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/private/eml_fftshift.m"
};

static emlrtRSInfo xb_emlrtRSI = { 36, "eml_fftshift",
  "/usr/local/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/private/eml_fftshift.m"
};

static emlrtRSInfo yb_emlrtRSI = { 30, "eml_fftshift",
  "/usr/local/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/private/eml_fftshift.m"
};

static emlrtRSInfo ac_emlrtRSI = { 27, "eml_fftshift",
  "/usr/local/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/private/eml_fftshift.m"
};

static emlrtRSInfo bc_emlrtRSI = { 20, "eml_fftshift",
  "/usr/local/MATLAB/R2015b/toolbox/eml/lib/matlab/datafun/private/eml_fftshift.m"
};

static emlrtRSInfo dc_emlrtRSI = { 20, "eml_int_forloop_overflow_check",
  "/usr/local/MATLAB/R2015b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

/* Function Declarations */
static void MWDSPCG_R2DIT_TBLS_Z(creal_T y[], int32_T nChans, int32_T nRows,
  int32_T fftLen, int32_T offset, const real_T tablePtr[], int32_T twiddleStep,
  boolean_T isInverse);
static int32_T asr_s32(int32_T u, uint32_T n);
static void c_MWDSPCG_R2BRScramble_OutPlace(creal_T y[], const creal_T x[],
  int32_T nChans, int32_T nRows);

/* Function Definitions */
static void MWDSPCG_R2DIT_TBLS_Z(creal_T y[], int32_T nChans, int32_T nRows,
  int32_T fftLen, int32_T offset, const real_T tablePtr[], int32_T twiddleStep,
  boolean_T isInverse)
{
  int32_T nHalf;
  int32_T nQtr;
  int32_T fwdInvFactor;
  int32_T offsetCh;
  int32_T iCh;
  int32_T ix;
  int32_T i2;
  real_T tmp_re;
  real_T tmp_im;
  int32_T idelta;
  int32_T k;
  int32_T kratio;
  int32_T i1;
  int32_T istart;
  int32_T j;
  real_T twidRe;
  real_T twidIm;

  /* DSP System Toolbox Decimation in Time FFT  */
  /* Computation performed using table lookup  */
  /* Output type: complex real_T */
  nHalf = asr_s32(fftLen, 1U) * twiddleStep;
  nQtr = asr_s32(nHalf, 1U);
  if (isInverse) {
    fwdInvFactor = -1;
  } else {
    fwdInvFactor = 1;
  }

  /* For each channel */
  offsetCh = offset;
  for (iCh = 0; iCh < nChans; iCh++) {
    /* Perform butterflies for the first stage, where no multiply is required. */
    for (ix = offsetCh; ix < (fftLen + offsetCh) - 1; ix += 2) {
      i2 = ix + 1;
      tmp_re = y[i2].re;
      tmp_im = y[i2].im;
      y[i2].re = y[ix].re - tmp_re;
      y[i2].im = y[ix].im - tmp_im;
      y[ix].re += tmp_re;
      y[ix].im += tmp_im;
    }

    idelta = 2;
    k = asr_s32(fftLen, 2U);
    kratio = k * twiddleStep;
    while (k > 0) {
      i1 = offsetCh;

      /* Perform the first butterfly in each remaining stage, where no multiply is required. */
      for (ix = 0; ix < k; ix++) {
        i2 = i1 + idelta;
        tmp_re = y[i2].re;
        tmp_im = y[i2].im;
        y[i2].re = y[i1].re - tmp_re;
        y[i2].im = y[i1].im - tmp_im;
        y[i1].re += tmp_re;
        y[i1].im += tmp_im;
        i1 += idelta << 1;
      }

      istart = offsetCh + 1;

      /* Perform remaining butterflies */
      for (j = kratio; j < nHalf; j += kratio) {
        i1 = istart;
        twidRe = tablePtr[j];
        twidIm = (real_T)fwdInvFactor * tablePtr[j + nQtr];
        for (ix = 0; ix < k; ix++) {
          i2 = i1 + idelta;
          tmp_re = y[i2].re * twidRe - y[i2].im * twidIm;
          tmp_im = y[i2].re * twidIm + y[i2].im * twidRe;
          y[i2].re = y[i1].re - tmp_re;
          y[i2].im = y[i1].im - tmp_im;
          y[i1].re += tmp_re;
          y[i1].im += tmp_im;
          i1 += idelta << 1;
        }

        istart++;
      }

      idelta <<= 1;
      k = asr_s32(k, 1U);
      kratio = asr_s32(kratio, 1U);
    }

    /* Point to next channel */
    offsetCh += nRows;
  }
}

static int32_T asr_s32(int32_T u, uint32_T n)
{
  int32_T y;
  if (u >= 0) {
    y = (int32_T)((uint32_T)u >> n);
  } else {
    y = -(int32_T)((uint32_T)-(u + 1) >> n) - 1;
  }

  return y;
}

static void c_MWDSPCG_R2BRScramble_OutPlace(creal_T y[], const creal_T x[],
  int32_T nChans, int32_T nRows)
{
  int32_T yIdx;
  int32_T j;
  int32_T i;
  int32_T bit_fftLen;

  /* out of place algorithm */
  yIdx = 0;
  while (nChans > 0) {
    nChans--;
    j = 0;

    /* For each element in the source array */
    for (i = 0; i < nRows - 1; i++) {
      /* Copy element into bit-rev position */
      y[j + yIdx] = x[i + yIdx];

      /* Compute next bit-reversed destination index */
      bit_fftLen = nRows;
      do {
        bit_fftLen = (int32_T)((uint32_T)bit_fftLen >> 1);
        j ^= bit_fftLen;
      } while (!((j & bit_fftLen) != 0));
    }

    /* Copy final element */
    y[j + yIdx] = x[i + yIdx];
    yIdx += nRows;
  }
}

c_comm_PSKCoarseFrequencyEstima *c_PSKCoarseFrequencyEstimator_P
  (c_comm_PSKCoarseFrequencyEstima *obj)
{
  c_comm_PSKCoarseFrequencyEstima *b_obj;
  c_comm_PSKCoarseFrequencyEstima *c_obj;
  b_obj = obj;
  c_obj = b_obj;
  c_obj->isInitialized = 0;
  return b_obj;
}

real_T c_PSKCoarseFrequencyEstimator_s(const emlrtStack *sp,
  c_comm_PSKCoarseFrequencyEstima *obj, const creal_T x[64])
{
  c_comm_PSKCoarseFrequencyEstima *b_obj;
  creal_T raisedSignal[64];
  int32_T k;
  creal_T c_obj[64];
  int32_T ixstart;
  creal_T varargout_1[128];
  creal_T varargin_1[128];
  real_T absFFTSig[128];
  int32_T dim;
  int32_T vlend2;
  int32_T vstride;
  int32_T midoffset;
  boolean_T b0;
  int32_T itmp;
  int32_T ia;
  int32_T ib;
  real_T xtmp;
  boolean_T b1;
  int32_T ic;
  boolean_T exitg1;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &pb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_obj = obj;
  for (k = 0; k < 64; k++) {
    raisedSignal[k].re = x[k].re * x[k].re - x[k].im * x[k].im;
    raisedSignal[k].im = x[k].re * x[k].im + x[k].im * x[k].re;
  }

  b_st.site = &qb_emlrtRSI;
  for (ixstart = 0; ixstart < 64; ixstart++) {
    c_obj[ixstart] = b_obj->pRaisedSignalBuffer[64 + ixstart];
  }

  for (ixstart = 0; ixstart < 64; ixstart++) {
    b_obj->pRaisedSignalBuffer[ixstart] = c_obj[ixstart];
  }

  for (ixstart = 0; ixstart < 64; ixstart++) {
    b_obj->pRaisedSignalBuffer[ixstart + 64] = raisedSignal[ixstart];
  }

  c_st.site = &sb_emlrtRSI;
  for (ixstart = 0; ixstart < 128; ixstart++) {
    varargin_1[ixstart] = b_obj->pRaisedSignalBuffer[ixstart];
  }

  d_st.site = NULL;

  /* System object Outputs function: dsp.FFT */
  c_MWDSPCG_R2BRScramble_OutPlace((creal_T *)&varargout_1[0U], (creal_T *)
    &varargin_1[0U], 1, 128);
  MWDSPCG_R2DIT_TBLS_Z((creal_T *)&varargout_1[0U], 1, 128, 128, 0, (real_T *)
                       &b_obj->pFFT.P0_TwiddleTable[0U], 1, false);
  for (k = 0; k < 128; k++) {
    absFFTSig[k] = muDoubleScalarHypot(varargout_1[k].re, varargout_1[k].im);
  }

  b_st.site = &rb_emlrtRSI;
  for (dim = 0; dim < 2; dim++) {
    c_st.site = &tb_emlrtRSI;
    if (dim + 1 <= 1) {
      ixstart = 128;
    } else {
      ixstart = 1;
    }

    if (ixstart <= 1) {
    } else {
      vlend2 = asr_s32(ixstart, 1U);
      d_st.site = &bc_emlrtRSI;
      vstride = 1;
      k = 1;
      while (k <= dim) {
        vstride <<= 7;
        k = 2;
      }

      midoffset = vlend2 * vstride - 1;
      if (vlend2 << 1 == ixstart) {
        d_st.site = &ac_emlrtRSI;
        ixstart = -1;
        d_st.site = &yb_emlrtRSI;
        if (1 > vstride) {
          b0 = false;
        } else {
          b0 = (vstride > 2147483646);
        }

        if (b0) {
          e_st.site = &dc_emlrtRSI;
          check_forloop_overflow_error(&e_st);
        }

        for (itmp = 1; itmp <= vstride; itmp++) {
          ixstart++;
          ia = ixstart;
          ib = (ixstart + midoffset) + 1;
          d_st.site = &xb_emlrtRSI;
          for (k = 1; k <= vlend2; k++) {
            xtmp = absFFTSig[ia];
            absFFTSig[ia] = absFFTSig[ib];
            absFFTSig[ib] = xtmp;
            ia += vstride;
            ib += vstride;
          }
        }
      } else {
        d_st.site = &wb_emlrtRSI;
        ixstart = -1;
        d_st.site = &vb_emlrtRSI;
        if (1 > vstride) {
          b1 = false;
        } else {
          b1 = (vstride > 2147483646);
        }

        if (b1) {
          e_st.site = &dc_emlrtRSI;
          check_forloop_overflow_error(&e_st);
        }

        for (itmp = 1; itmp <= vstride; itmp++) {
          ixstart++;
          ia = ixstart;
          ib = (ixstart + midoffset) + 1;
          xtmp = absFFTSig[ib];
          d_st.site = &ub_emlrtRSI;
          for (k = 1; k <= vlend2; k++) {
            ic = ib + vstride;
            absFFTSig[ib] = absFFTSig[ia];
            absFFTSig[ia] = absFFTSig[ic];
            ia += vstride;
            ib = ic;
          }

          absFFTSig[ib] = xtmp;
        }
      }
    }
  }

  ixstart = 1;
  xtmp = absFFTSig[0];
  itmp = 1;
  if (muDoubleScalarIsNaN(absFFTSig[0])) {
    ia = 2;
    exitg1 = false;
    while ((!exitg1) && (ia < 129)) {
      ixstart = ia;
      if (!muDoubleScalarIsNaN(absFFTSig[ia - 1])) {
        xtmp = absFFTSig[ia - 1];
        itmp = ia;
        exitg1 = true;
      } else {
        ia++;
      }
    }
  }

  if (ixstart < 128) {
    while (ixstart + 1 < 129) {
      if (absFFTSig[ixstart] > xtmp) {
        xtmp = absFFTSig[ixstart];
        itmp = ixstart + 1;
      }

      ixstart++;
    }
  }

  return 71.022727272727266 * (((real_T)itmp - 64.0) - 1.0) / 2.0;
}

/* End of code generation (PSKCoarseFrequencyEstimator.c) */
