/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rffe_50_types.h
 *
 * Code generation for function 'rffe_50'
 *
 */

#ifndef __RFFE_50_TYPES_H__
#define __RFFE_50_TYPES_H__

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef struct_dsp_FFT_3
#define struct_dsp_FFT_3

struct dsp_FFT_3
{
  int32_T S0_isInitialized;
  real_T P0_TwiddleTable[192];
};

#endif                                 /*struct_dsp_FFT_3*/

#ifndef typedef_dsp_FFT_3
#define typedef_dsp_FFT_3

typedef struct dsp_FFT_3 dsp_FFT_3;

#endif                                 /*typedef_dsp_FFT_3*/

#ifndef typedef_c_comm_PSKCoarseFrequencyEstima
#define typedef_c_comm_PSKCoarseFrequencyEstima

typedef struct {
  int32_T isInitialized;
  dsp_FFT_3 pFFT;
  creal_T pRaisedSignalBuffer[256];
} c_comm_PSKCoarseFrequencyEstima;

#endif                                 /*typedef_c_comm_PSKCoarseFrequencyEstima*/

#ifndef struct_dsp_FIRDecimator_4
#define struct_dsp_FIRDecimator_4

struct dsp_FIRDecimator_4
{
  int32_T S0_isInitialized;
  int32_T W0_PhaseIdx;
  creal_T W1_Sums;
  int32_T W2_CoeffIdx;
  creal_T W3_StatesBuff[16];
  int32_T W4_TapDelayIndex;
  int32_T W5_PrevNumChan;
  creal_T P0_IC;
  real_T P1_FILT[18];
  creal_T O0_Y0[704];
};

#endif                                 /*struct_dsp_FIRDecimator_4*/

#ifndef typedef_dsp_FIRDecimator_4
#define typedef_dsp_FIRDecimator_4

typedef struct dsp_FIRDecimator_4 dsp_FIRDecimator_4;

#endif                                 /*typedef_dsp_FIRDecimator_4*/

#ifndef typedef_dspcodegen_FIRDecimator_1
#define typedef_dspcodegen_FIRDecimator_1

typedef struct {
  int32_T isInitialized;
  dsp_FIRDecimator_4 cSFunObject;
} dspcodegen_FIRDecimator_1;

#endif                                 /*typedef_dspcodegen_FIRDecimator_1*/

#ifndef typedef_c_comm_RaisedCosineReceiveFilte
#define typedef_c_comm_RaisedCosineReceiveFilte

typedef struct {
  int32_T isInitialized;
  dspcodegen_FIRDecimator_1 pFilter;
} c_comm_RaisedCosineReceiveFilte;

#endif                                 /*typedef_c_comm_RaisedCosineReceiveFilte*/

#ifndef struct_comm_PhaseFrequencyOffset_2
#define struct_comm_PhaseFrequencyOffset_2

struct comm_PhaseFrequencyOffset_2
{
  int32_T S0_isInitialized;
  real_T W0_omegatTnow;
  real_T P0_Phase;
};

#endif                                 /*struct_comm_PhaseFrequencyOffset_2*/

#ifndef typedef_comm_PhaseFrequencyOffset_2
#define typedef_comm_PhaseFrequencyOffset_2

typedef struct comm_PhaseFrequencyOffset_2 comm_PhaseFrequencyOffset_2;

#endif                                 /*typedef_comm_PhaseFrequencyOffset_2*/

#ifndef typedef_c_commcodegen_PhaseFrequencyOff
#define typedef_c_commcodegen_PhaseFrequencyOff

typedef struct {
  int32_T isInitialized;
  comm_PhaseFrequencyOffset_2 cSFunObject;
  boolean_T c_NoTuningBeforeLockingCodeGenE;
} c_commcodegen_PhaseFrequencyOff;

#endif                                 /*typedef_c_commcodegen_PhaseFrequencyOff*/

#ifndef typedef_comm_AGC
#define typedef_comm_AGC

typedef struct {
  int32_T isInitialized;
  boolean_T TunablePropsChanged;
  uint32_T inputVarSize1[8];
  real_T AdaptationStepSize;
  real_T pCastedStepSize;
  boolean_T pStepSizeSet;
  boolean_T pDetectorMethodSet;
  boolean_T pLoopMethodSet;
  boolean_T pUpdatePeriodSet;
  boolean_T pGainOutputPortSet;
  real_T Gain;
  real_T FilterState[99];
} comm_AGC;

#endif                                 /*typedef_comm_AGC*/

#ifndef struct_dsp_FIRDecimator_0
#define struct_dsp_FIRDecimator_0

struct dsp_FIRDecimator_0
{
  int32_T S0_isInitialized;
  int32_T W0_PhaseIdx;
  creal_T W1_Sums;
  int32_T W2_CoeffIdx;
  creal_T W3_StatesBuff[22];
  int32_T W4_PrevNumChan;
  creal_T P0_IC;
  real_T P1_FILT[44];
  creal_T O0_Y0[64];
};

#endif                                 /*struct_dsp_FIRDecimator_0*/

#ifndef typedef_dsp_FIRDecimator_0
#define typedef_dsp_FIRDecimator_0

typedef struct dsp_FIRDecimator_0 dsp_FIRDecimator_0;

#endif                                 /*typedef_dsp_FIRDecimator_0*/

#ifndef typedef_dspcodegen_FIRDecimator
#define typedef_dspcodegen_FIRDecimator

typedef struct {
  int32_T isInitialized;
  dsp_FIRDecimator_0 cSFunObject;
} dspcodegen_FIRDecimator;

#endif                                 /*typedef_dspcodegen_FIRDecimator*/
#endif

/* End of code generation (rffe_50_types.h) */
