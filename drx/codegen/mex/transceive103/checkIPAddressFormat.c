/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * checkIPAddressFormat.c
 *
 * Code generation for function 'checkIPAddressFormat'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "transceive103.h"
#include "checkIPAddressFormat.h"

/* Variable Definitions */
static emlrtRSInfo o_emlrtRSI = { 43, "checkIPAddressFormat",
  "/usr/local/MATLAB/R2015b/SupportPackages/R2015bPrerelease/usrpradio/toolbox/shared/sdr/sdru/checkIPAddressFormat.m"
};

static emlrtRSInfo p_emlrtRSI = { 44, "checkIPAddressFormat",
  "/usr/local/MATLAB/R2015b/SupportPackages/R2015bPrerelease/usrpradio/toolbox/shared/sdr/sdru/checkIPAddressFormat.m"
};

static emlrtRSInfo q_emlrtRSI = { 45, "checkIPAddressFormat",
  "/usr/local/MATLAB/R2015b/SupportPackages/R2015bPrerelease/usrpradio/toolbox/shared/sdr/sdru/checkIPAddressFormat.m"
};

static emlrtRSInfo r_emlrtRSI = { 46, "checkIPAddressFormat",
  "/usr/local/MATLAB/R2015b/SupportPackages/R2015bPrerelease/usrpradio/toolbox/shared/sdr/sdru/checkIPAddressFormat.m"
};

static emlrtRTEInfo emlrtRTEI = { 35, 3, "checkIPAddressFormat",
  "/usr/local/MATLAB/R2015b/SupportPackages/R2015bPrerelease/usrpradio/toolbox/shared/sdr/sdru/checkIPAddressFormat.m"
};

static emlrtBCInfo b_emlrtBCI = { 1, 12, 38, 8, "aAddrs", "checkIPAddressFormat",
  "/usr/local/MATLAB/R2015b/SupportPackages/R2015bPrerelease/usrpradio/toolbox/shared/sdr/sdru/checkIPAddressFormat.m",
  0 };

static emlrtBCInfo c_emlrtBCI = { 1, 12, 39, 8, "aAddrs", "checkIPAddressFormat",
  "/usr/local/MATLAB/R2015b/SupportPackages/R2015bPrerelease/usrpradio/toolbox/shared/sdr/sdru/checkIPAddressFormat.m",
  0 };

static emlrtBCInfo d_emlrtBCI = { 1, 12, 40, 8, "aAddrs", "checkIPAddressFormat",
  "/usr/local/MATLAB/R2015b/SupportPackages/R2015bPrerelease/usrpradio/toolbox/shared/sdr/sdru/checkIPAddressFormat.m",
  0 };

static emlrtBCInfo e_emlrtBCI = { 1, 12, 41, 8, "aAddrs", "checkIPAddressFormat",
  "/usr/local/MATLAB/R2015b/SupportPackages/R2015bPrerelease/usrpradio/toolbox/shared/sdr/sdru/checkIPAddressFormat.m",
  0 };

static emlrtRTEInfo b_emlrtRTEI = { 54, 3, "checkIPAddressFormat",
  "/usr/local/MATLAB/R2015b/SupportPackages/R2015bPrerelease/usrpradio/toolbox/shared/sdr/sdru/checkIPAddressFormat.m"
};

static emlrtECInfo emlrtECI = { 2, 53, 23, "checkIPAddressFormat",
  "/usr/local/MATLAB/R2015b/SupportPackages/R2015bPrerelease/usrpradio/toolbox/shared/sdr/sdru/checkIPAddressFormat.m"
};

/* Function Declarations */
static void checkNumeric(const emlrtStack *sp, const int16_T x_data[], const
  int32_T x_size[2]);

/* Function Definitions */
static void checkNumeric(const emlrtStack *sp, const int16_T x_data[], const
  int32_T x_size[2])
{
  boolean_T guard1 = false;
  int32_T b_x_size[2];
  int32_T ix;
  int32_T i8;
  boolean_T b_x_data[12];
  int32_T tmp_size[2];
  boolean_T tmp_data[12];
  int32_T x[2];
  int32_T iv1[2];
  boolean_T y;
  boolean_T exitg1;
  static const char_T cv3[9] = { 'I', 'P', 'A', 'd', 'd', 'r', 'e', 's', 's' };

  guard1 = false;
  if (x_size[1] == 0) {
    guard1 = true;
  } else {
    b_x_size[0] = 1;
    b_x_size[1] = x_size[1];
    ix = x_size[0] * x_size[1];
    for (i8 = 0; i8 < ix; i8++) {
      b_x_data[i8] = (x_data[i8] >= 48);
    }

    tmp_size[0] = 1;
    tmp_size[1] = x_size[1];
    ix = x_size[0] * x_size[1];
    for (i8 = 0; i8 < ix; i8++) {
      tmp_data[i8] = (x_data[i8] <= 57);
    }

    for (i8 = 0; i8 < 2; i8++) {
      x[i8] = b_x_size[i8];
      iv1[i8] = tmp_size[i8];
    }

    if ((x[0] != iv1[0]) || (x[1] != iv1[1])) {
      emlrtSizeEqCheckNDR2012b(&x[0], &iv1[0], &emlrtECI, sp);
    }

    ix = x_size[1];
    for (i8 = 0; i8 < ix; i8++) {
      b_x_data[i8] = !(b_x_data[i8] && tmp_data[i8]);
    }

    y = false;
    ix = 1;
    exitg1 = false;
    while ((!exitg1) && (ix <= b_x_size[1])) {
      if (!!b_x_data[ix - 1]) {
        y = true;
        exitg1 = true;
      } else {
        ix++;
      }
    }

    if (y) {
      guard1 = true;
    } else {
      y = false;
    }
  }

  if (guard1) {
    y = true;
  }

  if (!y) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &b_emlrtRTEI,
      "sdru:checkIPAddressFormat:InvalidIPAddress", 3, 4, 9, cv3);
  }
}

void checkIPAddressFormat(const emlrtStack *sp)
{
  int32_T idx;
  int8_T ii_data[12];
  int8_T ii_size[2];
  int32_T i1;
  static const int8_T iv0[2] = { 1, 12 };

  int32_T ii;
  boolean_T exitg1;
  boolean_T guard1 = false;
  static const boolean_T bv0[12] = { false, false, false, true, false, false,
    false, true, false, false, true, false };

  int32_T i2;
  int32_T loop_ub;
  int8_T dotIndices_data[12];
  int32_T i3;
  static const char_T cv1[9] = { 'I', 'P', 'A', 'd', 'd', 'r', 'e', 's', 's' };

  int32_T i4;
  int32_T i5;
  int32_T i6;
  int16_T tmp_data[11];
  int32_T tmp_size[2];
  int32_T i7;
  static const char_T cv2[12] = { '1', '9', '2', '.', '1', '6', '8', '.', '1',
    '0', '.', '3' };

  int32_T b_tmp_size[2];
  int32_T c_tmp_size[2];
  int16_T b_tmp_data[12];
  int32_T d_tmp_size[2];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /* checkIPAddressFormat IP address format checker */
  /*  */
  /*    Warning: This function is an internal MathWorks function and may be removed */
  /*    in a future release. */
  /*  */
  /*    checkIPAddressFormat(ADDRS, NAME) returns true if the ADDRS is a valid */
  /*    dotted quad IP address. Otherwise, it errors out and prompts that variable */
  /*    NAME is not a valid IP address. */
  /*  */
  /*    % Example: */
  /*    %   Check if the string '192.168.10.a' is a valid IP address for variable */
  /*    %   IPAddress */
  /*    checkIPAddressFormat('192.168.10.a', 'IPAddress') */
  /*    Copyright 2012-2015 The MathWorks, Inc. */
  /*  Look for three dots */
  idx = 0;
  for (i1 = 0; i1 < 2; i1++) {
    ii_size[i1] = iv0[i1];
  }

  ii = 1;
  exitg1 = false;
  while ((!exitg1) && (ii < 13)) {
    guard1 = false;
    if (bv0[ii - 1]) {
      idx++;
      ii_data[idx - 1] = (int8_T)ii;
      if (idx >= 12) {
        exitg1 = true;
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      ii++;
    }
  }

  if (1 > idx) {
    i2 = 0;
  } else {
    i2 = idx;
  }

  loop_ub = ii_size[0] * i2;
  for (i1 = 0; i1 < loop_ub; i1++) {
    dotIndices_data[i1] = ii_data[i1];
  }

  /*  Used instead of findstr since */
  /*  findstr does not generate code */
  if (1 > idx) {
    i3 = 0;
  } else {
    i3 = idx;
  }

  if (!(i3 != 3)) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &emlrtRTEI,
      "sdru:checkIPAddressFormat:InvalidIPAddress", 3, 4, 9, cv1);
  }

  /*  Check if all the elements other than the dots are numbers */
  if (1 > dotIndices_data[0] - 1) {
    loop_ub = 0;
  } else {
    loop_ub = dotIndices_data[0] - 1;
    if (!(loop_ub >= 1)) {
      emlrtDynamicBoundsCheckR2012b(0, 1, 12, &b_emlrtBCI, sp);
    }
  }

  if (dotIndices_data[0] + 1 > dotIndices_data[1] - 1) {
    i1 = 0;
    ii = 0;
  } else {
    i1 = dotIndices_data[0] + 1;
    if (!(i1 <= 12)) {
      emlrtDynamicBoundsCheckR2012b(13, 1, 12, &c_emlrtBCI, sp);
    }

    i1--;
    ii = dotIndices_data[1] - 1;
    if (!(ii >= 1)) {
      emlrtDynamicBoundsCheckR2012b(0, 1, 12, &c_emlrtBCI, sp);
    }
  }

  if (dotIndices_data[1] + 1 > dotIndices_data[2] - 1) {
    idx = 0;
    i4 = 0;
  } else {
    idx = dotIndices_data[1] + 1;
    if (!(idx <= 12)) {
      emlrtDynamicBoundsCheckR2012b(13, 1, 12, &d_emlrtBCI, sp);
    }

    idx--;
    i4 = dotIndices_data[2] - 1;
    if (!(i4 >= 1)) {
      emlrtDynamicBoundsCheckR2012b(0, 1, 12, &d_emlrtBCI, sp);
    }
  }

  if (dotIndices_data[2] + 1 > 12) {
    i5 = 1;
    i6 = 1;
  } else {
    i5 = dotIndices_data[2] + 1;
    if (!(i5 <= 12)) {
      emlrtDynamicBoundsCheckR2012b(13, 1, 12, &e_emlrtBCI, sp);
    }

    i6 = 13;
  }

  tmp_size[0] = 1;
  tmp_size[1] = loop_ub;
  for (i7 = 0; i7 < loop_ub; i7++) {
    tmp_data[i7] = cv2[i7];
  }

  st.site = &o_emlrtRSI;
  checkNumeric(&st, tmp_data, tmp_size);
  b_tmp_size[0] = 1;
  b_tmp_size[1] = ii - i1;
  loop_ub = ii - i1;
  for (ii = 0; ii < loop_ub; ii++) {
    tmp_data[ii] = cv2[i1 + ii];
  }

  st.site = &p_emlrtRSI;
  checkNumeric(&st, tmp_data, b_tmp_size);
  c_tmp_size[0] = 1;
  c_tmp_size[1] = i4 - idx;
  loop_ub = i4 - idx;
  for (i1 = 0; i1 < loop_ub; i1++) {
    tmp_data[i1] = cv2[idx + i1];
  }

  st.site = &q_emlrtRSI;
  checkNumeric(&st, tmp_data, c_tmp_size);
  d_tmp_size[0] = 1;
  d_tmp_size[1] = i6 - i5;
  loop_ub = i6 - i5;
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_tmp_data[i1] = cv2[(i5 + i1) - 1];
  }

  st.site = &r_emlrtRSI;
  checkNumeric(&st, b_tmp_data, d_tmp_size);
}

/* End of code generation (checkIPAddressFormat.c) */
