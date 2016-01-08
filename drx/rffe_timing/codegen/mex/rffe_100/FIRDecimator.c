/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FIRDecimator.c
 *
 * Code generation for function 'FIRDecimator'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "rffe_100.h"
#include "FIRDecimator.h"

/* Function Definitions */
dspcodegen_FIRDecimator *FIRDecimator_FIRDecimator(dspcodegen_FIRDecimator *obj)
{
  dspcodegen_FIRDecimator *b_obj;
  dspcodegen_FIRDecimator *c_obj;
  dsp_FIRDecimator_0 *d_obj;
  int32_T i;
  static const real_T dv0[44] = { -0.078759811193972379, 0.0,
    1.4856729672754624E-17, 0.0, 0.198132880044913, 0.0, 0.37285919704681353,
    0.0, 0.37285919704681353, 0.0, 0.198132880044913, 0.0,
    1.4856729672754624E-17, 0.0, -0.078759811193972379, 0.0,
    -0.035607242376925904, 1.2452656025148105E-18, 0.026943639374828902,
    0.001600652863930364, 0.033512266120542422, 0.0013174534552817744,
    9.9988543901227614E-18, -0.001869217448560894, -0.019932921419138615,
    -0.0043336136492038557, -0.0094027236100340285, 3.9411829952776E-18,
    0.0070770504736392308, 0.0084623903178864569, 0.0084623903178864569,
    0.0070770504736392308, 3.9411829952776E-18, -0.0094027236100340285,
    -0.0043336136492038557, -0.019932921419138615, -0.001869217448560894,
    9.9988543901227614E-18, 0.0013174534552817744, 0.033512266120542422,
    0.001600652863930364, 0.026943639374828902, 1.2452656025148105E-18,
    -0.035607242376925904 };

  b_obj = obj;
  c_obj = b_obj;
  c_obj->isInitialized = 0;
  d_obj = &b_obj->cSFunObject;

  /* System object Constructor function: dsp.FIRDecimator */
  d_obj->S0_isInitialized = 0;
  d_obj->P0_IC.re = 0.0;
  d_obj->P0_IC.im = 0.0;
  for (i = 0; i < 44; i++) {
    d_obj->P1_FILT[i] = dv0[i];
  }

  return b_obj;
}

/* End of code generation (FIRDecimator.c) */
