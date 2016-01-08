/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * fftshift.h
 *
 * Code generation for function 'fftshift'
 *
 */

#ifndef __FFTSHIFT_H__
#define __FFTSHIFT_H__

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
#include "rffe_25_types.h"

/* Function Declarations */
extern void fftshift(const emlrtStack *sp, real_T x[512]);

#endif

/* End of code generation (fftshift.h) */
