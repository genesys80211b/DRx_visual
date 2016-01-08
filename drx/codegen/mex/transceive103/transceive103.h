/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * transceive103.h
 *
 * Code generation for function 'transceive103'
 *
 */

#ifndef __TRANSCEIVE103_H__
#define __TRANSCEIVE103_H__

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
extern void hrx_not_empty_init(void);
extern void htx_not_empty_init(void);
extern void transceive103(transceive103StackData *SD, const emlrtStack *sp,
  const creal_T d2s[1408], boolean_T ft, creal_T dr[1408], uint32_T *ns);

#endif

/* End of code generation (transceive103.h) */
