/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * mapiPrivate.c
 *
 * Code generation for function 'mapiPrivate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "transceive103.h"
#include "mapiPrivate.h"
#include "receiveData.h"
#include "transceive103_mexutil.h"
#include "transceive103_data.h"

/* Function Definitions */
void b_mapiPrivate(const emlrtStack *sp, int32_T varargin_1, UsrpErrorCapiEnumT *
                   varargout_1, char_T varargout_2_data[], int32_T
                   varargout_2_size[2])
{
  int32_T i12;
  static const char_T cv10[6] = { 's', 'i', 'l', 'e', 'n', 't' };

  char_T u[6];
  const mxArray *y;
  static const int32_T iv4[2] = { 1, 6 };

  const mxArray *m1;
  UsrpErrorCapiEnumT errStat_i;
  int32_T errStrSize;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /*  */
  /*  This function unifies handling of interp vs. codegen call as well as */
  /*  errStat / errStr assignment. */
  /*  */
  /*    Copyright 2011-2015 The MathWorks, Inc. */
  if (!isSetupsdruCalled) {
    for (i12 = 0; i12 < 6; i12++) {
      u[i12] = cv10[i12];
    }

    y = NULL;
    m1 = emlrtCreateCharArray(2, iv4);
    emlrtInitCharArrayR2013a(sp, 6, m1, &u[0]);
    emlrtAssign(&y, m1);
    st.site = &cb_emlrtRSI;
    setupsdru(&st, sdruroot(&st, &c_emlrtMCI), y, &d_emlrtMCI);
    isSetupsdruCalled = true;
  }

  /*  These sizes must match those in C code. */
  /*  Arbitrary max imposed on ML/SL side */
  /*  function is being called in interpreted mode */
  /*  not being found:  */
  /*  eml_allow_enum_inputs; */
  /* errStat_i = int32(0); */
  varargout_2_size[0] = 1;
  memset(&varargout_2_data[0], 0, sizeof(char_T) << 10);
  closeDataConnection_c(varargin_1, &errStat_i, &varargout_2_data[0]);

  /* errStat = UsrpErrorCapiEnumT(errStat_i); */
  errStrSize = strlen(&varargout_2_data[0]);
  if (errStrSize <= 1024) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &d_emlrtRTEI,
      "Coder:builtins:AssertionFailed", 0);
  }

  if (1 > errStrSize) {
    varargout_2_size[1] = 0;
  } else {
    varargout_2_size[1] = errStrSize;
  }

  *varargout_1 = errStat_i;
}

void c_isSetupsdruCalled_not_empty_i(void)
{
}

void mapiPrivate(const emlrtStack *sp, const uint8_T varargin_1[12],
                 BoardIdCapiEnumT varargin_2, const uint8_T varargin_3[15],
                 DataPortDataTypeCapiEnumT varargin_5, int32_T *varargout_1,
                 UsrpErrorCapiEnumT *varargout_2, char_T varargout_3_data[],
                 int32_T varargout_3_size[2])
{
  int32_T i11;
  static const char_T cv9[6] = { 's', 'i', 'l', 'e', 'n', 't' };

  char_T u[6];
  const mxArray *y;
  static const int32_T iv3[2] = { 1, 6 };

  const mxArray *m0;
  uint8_T addr_null[13];
  char * addr_c;
  uint8_T req_null[16];
  char * req_c;
  int32_T driverApiH;
  UsrpErrorCapiEnumT errStat_i;
  int32_T errStrSize;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /*  */
  /*  This function unifies handling of interp vs. codegen call as well as */
  /*  errStat / errStr assignment. */
  /*  */
  /*    Copyright 2011-2015 The MathWorks, Inc. */
  if (!isSetupsdruCalled) {
    for (i11 = 0; i11 < 6; i11++) {
      u[i11] = cv9[i11];
    }

    y = NULL;
    m0 = emlrtCreateCharArray(2, iv3);
    emlrtInitCharArrayR2013a(sp, 6, m0, &u[0]);
    emlrtAssign(&y, m0);
    st.site = &cb_emlrtRSI;
    setupsdru(&st, sdruroot(&st, &c_emlrtMCI), y, &d_emlrtMCI);
    isSetupsdruCalled = true;
  }

  /*  These sizes must match those in C code. */
  /*  Arbitrary max imposed on ML/SL side */
  /*  function is being called in interpreted mode */
  /*  not being found:  */
  /*  eml_allow_enum_inputs; */
  /* errStat_i = int32(0); */
  varargout_3_size[0] = 1;
  memset(&varargout_3_data[0], 0, sizeof(char_T) << 10);

  /*  varargin   1      2         3          4              5       6         7             8              9 */
  /*            addr, boardId, requester, frameLength, dportType, buffMode, buffSize, masterClockRate, channelMapping */
  /*  varargout  1         2         3 */
  /*            driverH, errStat, errMsg */
  for (i11 = 0; i11 < 12; i11++) {
    addr_null[i11] = varargin_1[i11];
  }

  addr_null[12] = 0;
  addr_c = (char *)(addr_null);
  for (i11 = 0; i11 < 15; i11++) {
    req_null[i11] = varargin_3[i11];
  }

  req_null[15] = 0;
  req_c = (char *)(req_null);
  openDataConnection_c(addr_c, varargin_2, req_c, 1408U, varargin_5, false, 0U,
                       1.0E+8, 1.0, &driverApiH, &errStat_i, &varargout_3_data[0]);
  *varargout_1 = driverApiH;

  /*  Tell coder that addr_null & req_null must be alive and separate throughout the call to cmd_c. */
  (void)(addr_null);
  (void)(req_null);

  /* errStat = UsrpErrorCapiEnumT(errStat_i); */
  errStrSize = strlen(&varargout_3_data[0]);
  if (errStrSize <= 1024) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &d_emlrtRTEI,
      "Coder:builtins:AssertionFailed", 0);
  }

  if (1 > errStrSize) {
    varargout_3_size[1] = 0;
  } else {
    varargout_3_size[1] = errStrSize;
  }

  *varargout_2 = errStat_i;
}

void mapiPrivate_init(void)
{
  isSetupsdruCalled = false;
}

/* End of code generation (mapiPrivate.c) */
