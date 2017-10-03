#ifndef PARAMETERSTRUCT_H
    #include "parameterStruct.h"
#endif

void rateInit(paramList *pList, int detj, int fluxj, double (*rateFunc)(double, paramList *, int, int, int), gsl_spline *rateSpline);

double nuRate(double ErKeV, paramList *pList, double Mt, int sourcej, int fluxj);

double nuRateOsc(double ErKeV, paramList *pList, double Mt, int sourcej, int fluxj);
