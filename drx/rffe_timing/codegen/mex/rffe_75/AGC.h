/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * AGC.h
 *
 * Code generation for function 'AGC'
 *
 */

#ifndef __AGC_H__
#define __AGC_H__

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
#include "rffe_75_types.h"

/* Function Declarations */
extern comm_AGC *AGC_AGC(const emlrtStack *sp, comm_AGC *obj, real_T varargin_4);
extern void AGC_stepImpl(const emlrtStack *sp, comm_AGC *obj, const creal_T x
  [1408], creal_T y[1408]);
extern void AGC_validatePropertiesImpl(const emlrtStack *sp, const comm_AGC *obj);

#endif

/* End of code generation (AGC.h) */
