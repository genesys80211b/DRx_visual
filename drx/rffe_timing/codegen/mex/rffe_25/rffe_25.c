/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rffe_25.c
 *
 * Code generation for function 'rffe_25'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "rffe_25.h"
#include "FIRDecimator.h"
#include "PSKCoarseFrequencyEstimator.h"
#include "RaisedCosineReceiveFilter.h"
#include "SystemCore.h"
#include "PhaseFrequencyOffset.h"
#include "AGC.h"

/* Variable Definitions */
static comm_AGC ha;
static boolean_T ha_not_empty;
static dspcodegen_FIRDecimator hd;
static boolean_T hd_not_empty;
static c_comm_PSKCoarseFrequencyEstima he;
static boolean_T he_not_empty;
static c_commcodegen_PhaseFrequencyOff hf;
static boolean_T hf_not_empty;
static c_comm_RaisedCosineReceiveFilte hrr;
static boolean_T hrr_not_empty;
static emlrtRSInfo emlrtRSI = { 33, "rffe_25",
  "/usr/local/MATLAB/V40_demo/drx/rffe_timing/rffe_25.m" };

static emlrtRSInfo b_emlrtRSI = { 36, "rffe_25",
  "/usr/local/MATLAB/V40_demo/drx/rffe_timing/rffe_25.m" };

static emlrtRSInfo c_emlrtRSI = { 39, "rffe_25",
  "/usr/local/MATLAB/V40_demo/drx/rffe_timing/rffe_25.m" };

static emlrtRSInfo d_emlrtRSI = { 43, "rffe_25",
  "/usr/local/MATLAB/V40_demo/drx/rffe_timing/rffe_25.m" };

static emlrtRSInfo e_emlrtRSI = { 47, "rffe_25",
  "/usr/local/MATLAB/V40_demo/drx/rffe_timing/rffe_25.m" };

static emlrtRSInfo f_emlrtRSI = { 59, "rffe_25",
  "/usr/local/MATLAB/V40_demo/drx/rffe_timing/rffe_25.m" };

static emlrtRSInfo g_emlrtRSI = { 60, "rffe_25",
  "/usr/local/MATLAB/V40_demo/drx/rffe_timing/rffe_25.m" };

static emlrtRSInfo h_emlrtRSI = { 61, "rffe_25",
  "/usr/local/MATLAB/V40_demo/drx/rffe_timing/rffe_25.m" };

static emlrtRSInfo i_emlrtRSI = { 62, "rffe_25",
  "/usr/local/MATLAB/V40_demo/drx/rffe_timing/rffe_25.m" };

static emlrtRSInfo j_emlrtRSI = { 63, "rffe_25",
  "/usr/local/MATLAB/V40_demo/drx/rffe_timing/rffe_25.m" };

static emlrtRSInfo k_emlrtRSI = { 67, "rffe_25",
  "/usr/local/MATLAB/V40_demo/drx/rffe_timing/rffe_25.m" };

static emlrtRSInfo l_emlrtRSI = { 69, "rffe_25",
  "/usr/local/MATLAB/V40_demo/drx/rffe_timing/rffe_25.m" };

static emlrtRSInfo m_emlrtRSI = { 71, "rffe_25",
  "/usr/local/MATLAB/V40_demo/drx/rffe_timing/rffe_25.m" };

static emlrtRSInfo n_emlrtRSI = { 73, "rffe_25",
  "/usr/local/MATLAB/V40_demo/drx/rffe_timing/rffe_25.m" };

static emlrtRSInfo o_emlrtRSI = { 75, "rffe_25",
  "/usr/local/MATLAB/V40_demo/drx/rffe_timing/rffe_25.m" };

/* Function Definitions */
void ha_not_empty_init(void)
{
  ha_not_empty = false;
}

void hd_not_empty_init(void)
{
  hd_not_empty = false;
}

void he_not_empty_init(void)
{
  he_not_empty = false;
}

void hf_not_empty_init(void)
{
  hf_not_empty = false;
}

void hrr_not_empty_init(void)
{
  hrr_not_empty = false;
}

void rffe_25(const emlrtStack *sp, const creal_T df[1408], boolean_T ft, real_T
             cas, real_T cau, creal_T dfr[704])
{
  creal_T tmp[1408];
  creal_T ddf[64];
  real_T ofs;
  creal_T b_tmp[1408];
  emlrtStack st;
  (void)cau;
  st.prev = sp;
  st.tls = sp->tls;

  /*  RFFE: Radio Freq Front End: AGC's, Freq Compensates, & RCRF's Input Data */
  /*  Function Arguments:  */
  /*  cas: Constant AGC Step Size (fixed at 1.0) */
  /*  cau: Constant AGC Update Rate (fixed at usrpFrameLength) */
  /*  cef: Constant Frequency Offset Estimation Freq Resolution (~4.0 Hz) */
  /*  df:  This Data Frame: Raw data taken from USRP Rx Buffer (length usrpFrameLength) */
  /*  dfr: This Data Frame Recovered: Data after AGC, FOC & RCRF (length halfUsrpFrameLength) */
  /*  ft:  Flag Terminal: If true, specifies to release all System objects */
  /*  setting global variables */
  /*  ha: Handle to Automatic Gain Control (AGC) System object */
  /*  hd: Handle to FIR Decimator System object */
  /*  he: Handle to Coarse Frequency Estimator (CFE) System object */
  /*  hf: Handle to Frequency Offset Compensator (FOC) System object */
  /*  hrr: Handle to Raised Cosine Receive Filter (RCRF) System object */
  /*  Initialize Persistent Data: Only on first call to RFFE() */
  if (!ha_not_empty) {
    /*      ha = comm.AGC('DetectorMethod','Rectifier','LoopMethod','Logarithmic', ... */
    /*          'MaximumGain',30,'StepSize',cas,'UpdatePeriod',cau); */
    st.site = &emlrtRSI;
    AGC_AGC(&st, &ha, cas);
    ha_not_empty = true;
  }

  /*  END IF ISEMPTY(HA) */
  if (!hd_not_empty) {
    st.site = &b_emlrtRSI;
    FIRDecimator_FIRDecimator(&hd);
    hd_not_empty = true;
  }

  /*  END IF ISEMPTY(HD) */
  if (!he_not_empty) {
    st.site = &c_emlrtRSI;
    c_PSKCoarseFrequencyEstimator_P(&he);
    he_not_empty = true;
  }

  /*  END IF ISEMPTY(HC) */
  if (!hf_not_empty) {
    st.site = &d_emlrtRSI;
    c_PhaseFrequencyOffset_PhaseFre(&st, &hf);
    hf_not_empty = true;
  }

  /*  END IF ISEMPTY(HF) */
  if (!hrr_not_empty) {
    st.site = &e_emlrtRSI;
    c_RaisedCosineReceiveFilter_Rai(&hrr);
    hrr_not_empty = true;
  }

  /*  IF ISEMPTY(HRR) */
  /*  Local data preallocation */
  memset(&dfr[0], 0, 704U * sizeof(creal_T));
  if (ft) {
    /*  Release System objects: only on final call to RFFE() */
    st.site = &f_emlrtRSI;
    SystemCore_release(&st, &ha);
    st.site = &g_emlrtRSI;
    b_SystemCore_release(&st, &hd);
    st.site = &h_emlrtRSI;
    c_SystemCore_release(&st, &he);
    st.site = &i_emlrtRSI;
    d_SystemCore_release(&st, &hf);
    st.site = &j_emlrtRSI;
    e_SystemCore_release(&st, &hrr);

    /* clear('ha','he','hf','hrr'); %Not supported for code generation */
  } else {
    /*  Automatic Gain Control (AGC) */
    st.site = &k_emlrtRSI;
    SystemCore_step(&st, &ha, df, tmp);

    /*  FIR Decimation */
    st.site = &l_emlrtRSI;
    b_SystemCore_step(&st, &hd, tmp, ddf);

    /*  Coarse Frequency Offset Estimation (CFE) */
    st.site = &m_emlrtRSI;
    ofs = c_SystemCore_step(&st, &he, ddf);

    /*  Frequency Offset Compensation (FOC) */
    memcpy(&b_tmp[0], &tmp[0], 1408U * sizeof(creal_T));
    st.site = &n_emlrtRSI;
    d_SystemCore_step(&st, &hf, b_tmp, -ofs, tmp);

    /*  Raised Cosine Receive Filtration (RCRF) */
    st.site = &o_emlrtRSI;
    e_SystemCore_step(&st, &hrr, tmp, dfr);
  }

  /*  IF FT */
  /*  FUNCTION RFFE */
}

void rffe_25_free(void)
{
  dsp_FIRDecimator_0 *obj;
  comm_PhaseFrequencyOffset_2 *b_obj;
  dsp_FIRDecimator_4 *c_obj;
  obj = &hd.cSFunObject;

  /* System object Destructor function: dsp.FIRDecimator */
  if ((obj->S0_isInitialized == 1) && (obj->S0_isInitialized != 2)) {
    obj->S0_isInitialized = 2;
  }

  b_obj = &hf.cSFunObject;

  /* System object Destructor function: comm.PhaseFrequencyOffset */
  if ((b_obj->S0_isInitialized == 1) && (b_obj->S0_isInitialized != 2)) {
    b_obj->S0_isInitialized = 2;
  }

  c_obj = &hrr.pFilter.cSFunObject;

  /* System object Destructor function: dsp.FIRDecimator */
  if ((c_obj->S0_isInitialized == 1) && (c_obj->S0_isInitialized != 2)) {
    c_obj->S0_isInitialized = 2;
  }
}

/* End of code generation (rffe_25.c) */
