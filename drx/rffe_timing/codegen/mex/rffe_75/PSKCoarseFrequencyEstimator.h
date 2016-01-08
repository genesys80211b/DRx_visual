/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * PSKCoarseFrequencyEstimator.h
 *
 * Code generation for function 'PSKCoarseFrequencyEstimator'
 *
 */

#ifndef __PSKCOARSEFREQUENCYESTIMATOR_H__
#define __PSKCOARSEFREQUENCYESTIMATOR_H__

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
extern c_comm_PSKCoarseFrequencyEstima *c_PSKCoarseFrequencyEstimator_P
  (c_comm_PSKCoarseFrequencyEstima *obj);
extern real_T c_PSKCoarseFrequencyEstimator_s(const emlrtStack *sp,
  c_comm_PSKCoarseFrequencyEstima *obj, const creal_T x[64]);

#ifdef __WATCOMC__

#pragma aux c_PSKCoarseFrequencyEstimator_s value [8087];

#endif
#endif

/* End of code generation (PSKCoarseFrequencyEstimator.h) */
