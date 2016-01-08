/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * sendComplexDoubleData.c
 *
 * Code generation for function 'sendComplexDoubleData'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "transceive103.h"
#include "sendComplexDoubleData.h"
#include "receiveData.h"
#include "transceive103_mexutil.h"
#include "transceive103_data.h"

/* Variable Definitions */
static emlrtRSInfo x_emlrtRSI = { 9, "sendComplexDoubleData",
  "/usr/local/MATLAB/R2015b/SupportPackages/R2015bPrerelease/usrpradio/toolbox/shared/sdr/sdru/usrp_uhd_mapi/sendComplexDoubleData."
  "m" };

/* Function Definitions */
void sendComplexDoubleData(const emlrtStack *sp, int32_T driverApiH, const
  creal_T data[1408], const real_T freq[2], const real_T loOffset[2], const
  real_T gain[2], real_T interp, uint32_T *underflow, UsrpErrorCapiEnumT
  *errStat, char_T errStr_data[], int32_T errStr_size[2])
{
  int32_T i13;
  static const char_T cv13[6] = { 's', 'i', 'l', 'e', 'n', 't' };

  char_T u[6];
  const mxArray *y;
  static const int32_T iv5[2] = { 1, 6 };

  const mxArray *m2;
  UsrpErrorCapiEnumT errStat_i;
  creal_T b_data[1408];
  real_T b_freq[2];
  real_T b_loOffset[2];
  real_T b_gain[2];
  int32_T errStrSize;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /*  bug: must pass as top-level arg */
  /*  dportDtype = DataPortDataTypeCapiEnumT.DPortDTypeCDouble; */
  /*    Copyright 2011-2012 The MathWorks, Inc. */
  st.site = &x_emlrtRSI;

  /*  */
  /*  This function unifies handling of interp vs. codegen call as well as */
  /*  errStat / errStr assignment. */
  /*  */
  /*    Copyright 2011-2015 The MathWorks, Inc. */
  if (!isSetupsdruCalled) {
    for (i13 = 0; i13 < 6; i13++) {
      u[i13] = cv13[i13];
    }

    y = NULL;
    m2 = emlrtCreateCharArray(2, iv5);
    emlrtInitCharArrayR2013a(&st, 6, m2, &u[0]);
    emlrtAssign(&y, m2);
    b_st.site = &cb_emlrtRSI;
    setupsdru(&b_st, sdruroot(&b_st, &c_emlrtMCI), y, &d_emlrtMCI);
    isSetupsdruCalled = true;
  }

  /*  These sizes must match those in C code. */
  /*  Arbitrary max imposed on ML/SL side */
  /*  function is being called in interpreted mode */
  /*  not being found:  */
  /*  eml_allow_enum_inputs; */
  /* errStat_i = int32(0); */
  errStr_size[0] = 1;
  memset(&errStr_data[0], 0, sizeof(char_T) << 10);
  memcpy(&b_data[0], &data[0], 1408U * sizeof(creal_T));
  for (i13 = 0; i13 < 2; i13++) {
    b_freq[i13] = freq[i13];
    b_loOffset[i13] = loOffset[i13];
    b_gain[i13] = gain[i13];
  }

  sendData_c(driverApiH, b_data, b_freq, b_loOffset, b_gain, interp, underflow,
             &errStat_i, &errStr_data[0]);

  /* errStat = UsrpErrorCapiEnumT(errStat_i); */
  errStrSize = strlen(&errStr_data[0]);
  if (errStrSize <= 1024) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &d_emlrtRTEI,
      "Coder:builtins:AssertionFailed", 0);
  }

  if (1 > errStrSize) {
    errStr_size[1] = 0;
  } else {
    errStr_size[1] = errStrSize;
  }

  *errStat = errStat_i;
}

/* End of code generation (sendComplexDoubleData.c) */
