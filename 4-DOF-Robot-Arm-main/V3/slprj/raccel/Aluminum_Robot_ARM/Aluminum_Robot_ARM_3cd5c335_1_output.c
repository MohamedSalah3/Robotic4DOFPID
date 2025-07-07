#include "__cf_Aluminum_Robot_ARM.h"
#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
PmfMessageId Aluminum_Robot_ARM_3cd5c335_1_output ( const
RuntimeDerivedValuesBundle * rtdv , const double * state , const double *
input , const double * inputDot , const double * inputDdot , const double *
discreteState , double * output , NeuDiagnosticManager * neDiagMgr ) { const
double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv ->
mInts . mValues ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) input ; ( void )
inputDot ; ( void ) inputDdot ; ( void ) discreteState ; ( void ) neDiagMgr ;
output [ 0 ] = state [ 0 ] ; output [ 1 ] = state [ 1 ] ; output [ 2 ] =
state [ 2 ] ; output [ 3 ] = state [ 3 ] ; output [ 4 ] = state [ 4 ] ;
output [ 5 ] = state [ 5 ] ; output [ 6 ] = state [ 6 ] ; output [ 7 ] =
state [ 7 ] ; return NULL ; }
