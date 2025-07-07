#include "__cf_Aluminum_Robot_ARM.h"
#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
void Aluminum_Robot_ARM_3cd5c335_1_computeConstraintError ( const void * mech
, const RuntimeDerivedValuesBundle * rtdv , const double * state , double *
error ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int *
rtdvi = rtdv -> mInts . mValues ; ( void ) mech ; ( void ) rtdvd ; ( void )
rtdvi ; ( void ) state ; ( void ) error ; }
