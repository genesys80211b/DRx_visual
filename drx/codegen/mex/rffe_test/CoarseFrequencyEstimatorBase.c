/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * CoarseFrequencyEstimatorBase.c
 *
 * Code generation for function 'CoarseFrequencyEstimatorBase'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "rffe_test.h"
#include "CoarseFrequencyEstimatorBase.h"
#include "rffe_test_mexutil.h"

/* Function Declarations */
static void MWDSPCG_R2DIT_TBLS_Z(creal_T y[], int32_T nChans, int32_T nRows,
  int32_T fftLen, int32_T offset, const real_T tablePtr[], int32_T twiddleStep,
  boolean_T isInverse);
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

void c_CoarseFrequencyEstimatorBase_(c_comm_PSKCoarseFrequencyEstima *obj, const
  creal_T raisedSignal[64], real_T absFFTSig[512])
{
  creal_T b_obj[448];
  int32_T k;
  creal_T varargout_1[512];
  dsp_FFT_3 *c_obj;
  creal_T varargin_1[512];
  for (k = 0; k < 448; k++) {
    b_obj[k] = obj->pRaisedSignalBuffer[64 + k];
  }

  for (k = 0; k < 448; k++) {
    obj->pRaisedSignalBuffer[k] = b_obj[k];
  }

  for (k = 0; k < 64; k++) {
    obj->pRaisedSignalBuffer[k + 448] = raisedSignal[k];
  }

  c_obj = &obj->pFFT;
  for (k = 0; k < 512; k++) {
    varargin_1[k] = obj->pRaisedSignalBuffer[k];
  }

  /* System object Outputs function: dsp.FFT */
  c_MWDSPCG_R2BRScramble_OutPlace((creal_T *)&varargout_1[0U], (creal_T *)
    &varargin_1[0U], 1, 512);
  MWDSPCG_R2DIT_TBLS_Z((creal_T *)&varargout_1[0U], 1, 512, 512, 0, (real_T *)
                       &c_obj->P0_TwiddleTable[0U], 1, false);
  for (k = 0; k < 512; k++) {
    absFFTSig[k] = muDoubleScalarHypot(varargout_1[k].re, varargout_1[k].im);
  }
}

/* End of code generation (CoarseFrequencyEstimatorBase.c) */
