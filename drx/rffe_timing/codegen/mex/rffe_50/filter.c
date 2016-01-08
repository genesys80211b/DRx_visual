/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * filter.c
 *
 * Code generation for function 'filter'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "rffe_50.h"
#include "filter.h"

/* Function Definitions */
void filter(const real_T x[1408], const real_T zi[99], real_T y[1408], real_T
            zf[99])
{
  real_T dbuffer[100];
  int32_T j;
  int32_T k;
  memcpy(&dbuffer[1], &zi[0], 99U * sizeof(real_T));
  for (j = 0; j < 1408; j++) {
    for (k = 0; k < 99; k++) {
      dbuffer[k] = dbuffer[k + 1];
    }

    dbuffer[99] = 0.0;
    if (x[j] == 0.0) {
      for (k = 0; k < 100; k++) {
        dbuffer[k] += x[j] * 0.01;
      }
    } else if (x[j] == 0.0) {
    } else {
      for (k = 0; k < 100; k++) {
        dbuffer[k] += x[j] * 0.01;
      }
    }

    y[j] = dbuffer[0];
  }

  memcpy(&zf[0], &dbuffer[1], 99U * sizeof(real_T));
}

/* End of code generation (filter.c) */
