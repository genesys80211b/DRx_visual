/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * transceive103_terminate.c
 *
 * Code generation for function 'transceive103_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "transceive103.h"
#include "transceive103_terminate.h"
#include "_coder_transceive103_mex.h"
#include "transceive103_data.h"

/* Function Definitions */
void transceive103_atexit(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void transceive103_terminate(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (transceive103_terminate.c) */
