/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * rand.c
 *
 * Code generation for function 'rand'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "transceive103.h"
#include "rand.h"

/* Function Definitions */
void b_rand(real_T r[10])
{
  emlrtRandu(r, 10);
}

/* End of code generation (rand.c) */
