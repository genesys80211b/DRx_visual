/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * CoarseFrequencyEstimatorBase.h
 *
 * Code generation for function 'CoarseFrequencyEstimatorBase'
 *
 */

#ifndef __COARSEFREQUENCYESTIMATORBASE_H__
#define __COARSEFREQUENCYESTIMATORBASE_H__

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
extern void c_CoarseFrequencyEstimatorBase_(c_comm_PSKCoarseFrequencyEstima *obj,
  const creal_T raisedSignal[64], real_T absFFTSig[512]);

#endif

/* End of code generation (CoarseFrequencyEstimatorBase.h) */
