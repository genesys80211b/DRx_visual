/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * transceive103_mexutil.h
 *
 * Code generation for function 'transceive103_mexutil'
 *
 */

#ifndef __TRANSCEIVE103_MEXUTIL_H__
#define __TRANSCEIVE103_MEXUTIL_H__

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
#include "transceive103_types.h"

/* Function Declarations */
extern const mxArray *sdruroot(const emlrtStack *sp, emlrtMCInfo *location);
extern void setupsdru(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                      emlrtMCInfo *location);

#endif

/* End of code generation (transceive103_mexutil.h) */
