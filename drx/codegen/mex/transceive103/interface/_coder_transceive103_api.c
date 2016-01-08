/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * _coder_transceive103_api.c
 *
 * Code generation for function '_coder_transceive103_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "transceive103.h"
#include "_coder_transceive103_api.h"
#include "transceive103_data.h"

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, creal_T y[1408]);
static boolean_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *ft,
  const char_T *identifier);
static boolean_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId);
static const mxArray *d_emlrt_marshallOut(const emlrtStack *sp, const creal_T u
  [1408]);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, creal_T ret[1408]);
static const mxArray *e_emlrt_marshallOut(const uint32_T u);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *d2s, const
  char_T *identifier, creal_T y[1408]);
static boolean_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, creal_T y[1408])
{
  e_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static boolean_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *ft,
  const char_T *identifier)
{
  boolean_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(ft), &thisId);
  emlrtDestroyArray(&ft);
  return y;
}

static boolean_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = f_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *d_emlrt_marshallOut(const emlrtStack *sp, const creal_T u
  [1408])
{
  const mxArray *y;
  static const int32_T iv13[1] = { 1408 };

  const mxArray *m10;
  y = NULL;
  m10 = emlrtCreateNumericArray(1, iv13, mxDOUBLE_CLASS, mxCOMPLEX);
  emlrtExportNumericArrayR2013b(sp, m10, (void *)u, 8);
  emlrtAssign(&y, m10);
  return y;
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, creal_T ret[1408])
{
  static const int32_T dims[1] = { 1408 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", true, 1U, dims);
  emlrtImportArrayR2015b(sp, src, ret, 8, true);
  emlrtDestroyArray(&src);
}

static const mxArray *e_emlrt_marshallOut(const uint32_T u)
{
  const mxArray *y;
  const mxArray *m11;
  y = NULL;
  m11 = emlrtCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
  *(uint32_T *)mxGetData(m11) = u;
  emlrtAssign(&y, m11);
  return y;
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *d2s, const
  char_T *identifier, creal_T y[1408])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(d2s), &thisId, y);
  emlrtDestroyArray(&d2s);
}

static boolean_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  boolean_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "logical", false, 0U, &dims);
  ret = *mxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

void transceive103_api(transceive103StackData *SD, const mxArray * const prhs[2],
  const mxArray *plhs[2])
{
  creal_T d2s[1408];
  boolean_T ft;
  uint32_T ns;
  creal_T dr[1408];
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "d2s", d2s);
  ft = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "ft");

  /* Invoke the target function */
  transceive103(SD, &st, d2s, ft, dr, &ns);

  /* Marshall function outputs */
  plhs[0] = d_emlrt_marshallOut(&st, dr);
  plhs[1] = e_emlrt_marshallOut(ns);
}

/* End of code generation (_coder_transceive103_api.c) */
