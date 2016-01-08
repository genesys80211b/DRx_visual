/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * SystemCore.h
 *
 * Code generation for function 'SystemCore'
 *
 */

#ifndef __SYSTEMCORE_H__
#define __SYSTEMCORE_H__

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blas.h"
#include "rtwtypes.h"
#include "omp.h"
#include "rffe_test_types.h"

/* Function Declarations */
extern void SystemCore_release(const emlrtStack *sp, comm_AGC *obj);
extern void SystemCore_step(const emlrtStack *sp, comm_AGC *obj, const creal_T
  varargin_1[1408], creal_T varargout_1[1408]);
extern void b_SystemCore_release(const emlrtStack *sp, dspcodegen_FIRDecimator
  *obj);
extern void b_SystemCore_step(const emlrtStack *sp, dspcodegen_FIRDecimator *obj,
  const creal_T varargin_1[1408], creal_T varargout_1[64]);
extern void c_SystemCore_release(const emlrtStack *sp,
  c_comm_PSKCoarseFrequencyEstima *obj);
extern real_T c_SystemCore_step(const emlrtStack *sp,
  c_comm_PSKCoarseFrequencyEstima *obj, const creal_T varargin_1[64]);

#ifdef __WATCOMC__

#pragma aux c_SystemCore_step value [8087];

#endif

extern void d_SystemCore_release(const emlrtStack *sp,
  c_commcodegen_PhaseFrequencyOff *obj);
extern void d_SystemCore_step(const emlrtStack *sp,
  c_commcodegen_PhaseFrequencyOff *obj, const creal_T varargin_1[1408], real_T
  varargin_2, creal_T varargout_1[1408]);
extern void e_SystemCore_release(const emlrtStack *sp,
  c_comm_RaisedCosineReceiveFilte *obj);
extern void e_SystemCore_step(const emlrtStack *sp,
  c_comm_RaisedCosineReceiveFilte *obj, const creal_T varargin_1[1408], creal_T
  varargout_1[704]);

#endif

/* End of code generation (SystemCore.h) */
