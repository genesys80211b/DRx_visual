/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rffe_50.h
 *
 * Code generation for function 'rffe_50'
 *
 */

#ifndef __RFFE_50_H__
#define __RFFE_50_H__

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
#include "rffe_50_types.h"

/* Function Declarations */
extern void ha_not_empty_init(void);
extern void hd_not_empty_init(void);
extern void he_not_empty_init(void);
extern void hf_not_empty_init(void);
extern void hrr_not_empty_init(void);
extern void rffe_50(const emlrtStack *sp, const creal_T df[1408], boolean_T ft,
                    real_T cas, real_T cau, creal_T dfr[704]);
extern void rffe_50_free(void);

#endif

/* End of code generation (rffe_50.h) */
