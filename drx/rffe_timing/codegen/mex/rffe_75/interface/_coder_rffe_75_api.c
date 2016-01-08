/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_rffe_75_api.c
 *
 * Code generation for function '_coder_rffe_75_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "rffe_75.h"
#include "_coder_rffe_75_api.h"
#include "rffe_75_data.h"

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, creal_T y[1408]);
static boolean_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *ft,
  const char_T *identifier);
static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp, const creal_T u
  [704]);
static boolean_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId);
static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *cas, const
  char_T *identifier);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *df, const
  char_T *identifier, creal_T y[1408]);
static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, creal_T ret[1408]);
static boolean_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static real_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, creal_T y[1408])
{
  g_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
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

static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp, const creal_T u
  [704])
{
  const mxArray *y;
  static const int32_T iv4[1] = { 704 };

  const mxArray *m3;
  y = NULL;
  m3 = emlrtCreateNumericArray(1, iv4, mxDOUBLE_CLASS, mxCOMPLEX);
  emlrtExportNumericArrayR2013b(sp, m3, (void *)u, 8);
  emlrtAssign(&y, m3);
  return y;
}

static boolean_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = h_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *cas, const
  char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = f_emlrt_marshallIn(sp, emlrtAlias(cas), &thisId);
  emlrtDestroyArray(&cas);
  return y;
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *df, const
  char_T *identifier, creal_T y[1408])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(df), &thisId, y);
  emlrtDestroyArray(&df);
}

static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = i_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, creal_T ret[1408])
{
  static const int32_T dims[1] = { 1408 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", true, 1U, dims);
  emlrtImportArrayR2015b(sp, src, ret, 8, true);
  emlrtDestroyArray(&src);
}

static boolean_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  boolean_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "logical", false, 0U, &dims);
  ret = *mxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void rffe_75_api(const mxArray * const prhs[4], const mxArray *plhs[1])
{
  creal_T df[1408];
  boolean_T ft;
  real_T cas;
  real_T cau;
  creal_T dfr[704];
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "df", df);
  ft = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "ft");
  cas = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "cas");
  cau = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "cau");

  /* Invoke the target function */
  rffe_75(&st, df, ft, cas, cau, dfr);

  /* Marshall function outputs */
  plhs[0] = c_emlrt_marshallOut(&st, dfr);
}

/* End of code generation (_coder_rffe_75_api.c) */
