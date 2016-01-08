/*
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * SDRuTransmitter.h
 *
 * Code generation for function 'SDRuTransmitter'
 *
 */

#ifndef __SDRUTRANSMITTER_H__
#define __SDRUTRANSMITTER_H__

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
extern comm_SDRuTransmitter *SDRuTransmitter_SDRuTransmitter(const emlrtStack
  *sp, comm_SDRuTransmitter *obj);
extern void SDRuTransmitter_setupImplLocal(const emlrtStack *sp,
  comm_SDRuTransmitter *obj, UsrpErrorCapiEnumT *errStatus, char_T errMsg_data[],
  int32_T errMsg_size[2]);
extern void SDRuTransmitter_stepImpl(const emlrtStack *sp, const
  comm_SDRuTransmitter *obj, const creal_T x[1408]);

#endif

/* End of code generation (SDRuTransmitter.h) */
