#include "__cf_Aluminum_Robot_ARM.h"
#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "sm_CTarget.h"
boolean_T Aluminum_Robot_ARM_3cd5c335_1_getTargetStatus ( const
RuntimeDerivedValuesBundle * rtdv , const double * state , const size_t
targetIndex ) { return true ; } void Aluminum_Robot_ARM_3cd5c335_1_setTargets
( const RuntimeDerivedValuesBundle * rtdv , CTarget * targets ) { ( void )
rtdv ; ( void ) targets ; } void
Aluminum_Robot_ARM_3cd5c335_1_resetStateVector ( const void * mech , double *
state ) { double xx [ 1 ] ; ( void ) mech ; xx [ 0 ] = 0.0 ; state [ 0 ] = xx
[ 0 ] ; state [ 1 ] = xx [ 0 ] ; state [ 2 ] = xx [ 0 ] ; state [ 3 ] = xx [
0 ] ; state [ 4 ] = xx [ 0 ] ; state [ 5 ] = xx [ 0 ] ; state [ 6 ] = xx [ 0
] ; state [ 7 ] = xx [ 0 ] ; } void
Aluminum_Robot_ARM_3cd5c335_1_initializeTrackedAngleState ( const void * mech
, const RuntimeDerivedValuesBundle * rtdv , const double * motionData ,
double * state , void * neDiagMgr0 ) { NeuDiagnosticManager * neDiagMgr = (
NeuDiagnosticManager * ) neDiagMgr0 ; ( void ) mech ; ( void ) rtdv ; ( void
) motionData ; ( void ) state ; ( void ) neDiagMgr ; } void
Aluminum_Robot_ARM_3cd5c335_1_computeDiscreteState ( const void * mech ,
const RuntimeDerivedValuesBundle * rtdv , double * state ) { const double *
rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts .
mValues ; ( void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) state ;
} void Aluminum_Robot_ARM_3cd5c335_1_adjustPosition ( const void * mech ,
const double * dofDeltas , double * state ) { ( void ) mech ; state [ 0 ] =
state [ 0 ] + dofDeltas [ 0 ] ; state [ 2 ] = state [ 2 ] + dofDeltas [ 1 ] ;
state [ 4 ] = state [ 4 ] + dofDeltas [ 2 ] ; state [ 6 ] = state [ 6 ] +
dofDeltas [ 3 ] ; } static void perturbJointPrimitiveState_0_0 ( double mag ,
double * state ) { state [ 0 ] = state [ 0 ] + mag ; } static void
perturbJointPrimitiveState_0_0v ( double mag , double * state ) { state [ 0 ]
= state [ 0 ] + mag ; state [ 1 ] = state [ 1 ] - 0.875 * mag ; } static void
perturbJointPrimitiveState_1_0 ( double mag , double * state ) { state [ 2 ]
= state [ 2 ] + mag ; } static void perturbJointPrimitiveState_1_0v ( double
mag , double * state ) { state [ 2 ] = state [ 2 ] + mag ; state [ 3 ] =
state [ 3 ] - 0.875 * mag ; } static void perturbJointPrimitiveState_2_0 (
double mag , double * state ) { state [ 4 ] = state [ 4 ] + mag ; } static
void perturbJointPrimitiveState_2_0v ( double mag , double * state ) { state
[ 4 ] = state [ 4 ] + mag ; state [ 5 ] = state [ 5 ] - 0.875 * mag ; }
static void perturbJointPrimitiveState_3_0 ( double mag , double * state ) {
state [ 6 ] = state [ 6 ] + mag ; } static void
perturbJointPrimitiveState_3_0v ( double mag , double * state ) { state [ 6 ]
= state [ 6 ] + mag ; state [ 7 ] = state [ 7 ] - 0.875 * mag ; } void
Aluminum_Robot_ARM_3cd5c335_1_perturbJointPrimitiveState ( const void * mech
, size_t stageIdx , size_t primIdx , double mag , boolean_T doPerturbVelocity
, double * state ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; (
void ) mag ; ( void ) doPerturbVelocity ; ( void ) state ; switch ( (
stageIdx * 6 + primIdx ) * 2 + ( doPerturbVelocity ? 1 : 0 ) ) { case 0 :
perturbJointPrimitiveState_0_0 ( mag , state ) ; break ; case 1 :
perturbJointPrimitiveState_0_0v ( mag , state ) ; break ; case 12 :
perturbJointPrimitiveState_1_0 ( mag , state ) ; break ; case 13 :
perturbJointPrimitiveState_1_0v ( mag , state ) ; break ; case 24 :
perturbJointPrimitiveState_2_0 ( mag , state ) ; break ; case 25 :
perturbJointPrimitiveState_2_0v ( mag , state ) ; break ; case 36 :
perturbJointPrimitiveState_3_0 ( mag , state ) ; break ; case 37 :
perturbJointPrimitiveState_3_0v ( mag , state ) ; break ; } } void
Aluminum_Robot_ARM_3cd5c335_1_perturbFlexibleBodyState ( const void * mech ,
size_t stageIdx , double mag , boolean_T doPerturbVelocity , double * state )
{ ( void ) mech ; ( void ) stageIdx ; ( void ) mag ; ( void )
doPerturbVelocity ; ( void ) state ; switch ( stageIdx * 2 + (
doPerturbVelocity ? 1 : 0 ) ) { } } void
Aluminum_Robot_ARM_3cd5c335_1_computeDofBlendMatrix ( const void * mech ,
size_t stageIdx , size_t primIdx , const double * state , int partialType ,
double * matrix ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; (
void ) state ; ( void ) partialType ; ( void ) matrix ; switch ( ( stageIdx *
6 + primIdx ) ) { } } void
Aluminum_Robot_ARM_3cd5c335_1_projectPartiallyTargetedPos ( const void * mech
, size_t stageIdx , size_t primIdx , const double * origState , int
partialType , double * state ) { ( void ) mech ; ( void ) stageIdx ; ( void )
primIdx ; ( void ) origState ; ( void ) partialType ; ( void ) state ; switch
( ( stageIdx * 6 + primIdx ) ) { } } void
Aluminum_Robot_ARM_3cd5c335_1_propagateMotion ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , const double * state , double *
motionData ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int
* rtdvi = rtdv -> mInts . mValues ; double xx [ 64 ] ; ( void ) mech ; ( void
) rtdvd ; ( void ) rtdvi ; xx [ 0 ] = 0.9422787284768807 ; xx [ 1 ] = -
0.05585051596064775 ; xx [ 2 ] = - 0.3301325867908895 ; xx [ 3 ] = -
1.998215623677746e-3 ; xx [ 4 ] = 0.5 ; xx [ 5 ] = xx [ 4 ] * state [ 0 ] ;
xx [ 6 ] = 0.6223770309673717 ; xx [ 7 ] = sin ( xx [ 5 ] ) ; xx [ 8 ] =
0.1039341541427324 ; xx [ 9 ] = 0.7757863900113715 ; xx [ 10 ] = cos ( xx [ 5
] ) ; xx [ 11 ] = - ( xx [ 6 ] * xx [ 7 ] ) ; xx [ 12 ] = xx [ 8 ] * xx [ 7 ]
; xx [ 13 ] = - ( xx [ 9 ] * xx [ 7 ] ) ; pm_math_quatCompose ( xx + 0 , xx +
10 , xx + 14 ) ; xx [ 0 ] = - 0.08425961981326874 ; xx [ 1 ] =
1.343617205003816e-3 ; xx [ 2 ] = - 0.01278645671885595 ; pm_math_quatXform (
xx + 14 , xx + 0 , xx + 10 ) ; xx [ 0 ] = - 0.6346176628654751 ; xx [ 1 ] =
0.6360857280474078 ; xx [ 2 ] = 0.2677201164389672 ; xx [ 3 ] =
0.3478236734431223 ; xx [ 5 ] = xx [ 4 ] * state [ 2 ] ; xx [ 7 ] =
3.46958819767948e-3 ; xx [ 13 ] = sin ( xx [ 5 ] ) ; xx [ 18 ] =
0.09115167987116077 ; xx [ 19 ] = 0.9958309762275948 ; xx [ 20 ] = cos ( xx [
5 ] ) ; xx [ 21 ] = - ( xx [ 7 ] * xx [ 13 ] ) ; xx [ 22 ] = xx [ 18 ] * xx [
13 ] ; xx [ 23 ] = - ( xx [ 19 ] * xx [ 13 ] ) ; pm_math_quatCompose ( xx + 0
, xx + 20 , xx + 24 ) ; xx [ 0 ] = - 0.1407398768514533 ; xx [ 1 ] =
3.421461385860196e-3 ; xx [ 2 ] = 0.03627804230933915 ; pm_math_quatXform (
xx + 24 , xx + 0 , xx + 20 ) ; xx [ 0 ] = 0.1201757092040852 - xx [ 20 ] ; xx
[ 1 ] = - ( 7.110878959537235e-3 + xx [ 21 ] ) ; xx [ 2 ] =
2.53404406177922e-3 - xx [ 22 ] ; xx [ 20 ] = - 0.4975090844878828 ; xx [ 21
] = - 0.4312760743433633 ; xx [ 22 ] = - 0.5900191990405114 ; xx [ 23 ] = -
0.4672932733461935 ; xx [ 3 ] = xx [ 4 ] * state [ 4 ] ; xx [ 5 ] =
0.2724806919110529 ; xx [ 13 ] = sin ( xx [ 3 ] ) ; xx [ 28 ] =
0.9591809870827044 ; xx [ 29 ] = 0.07567104171823891 ; xx [ 30 ] = cos ( xx [
3 ] ) ; xx [ 31 ] = xx [ 5 ] * xx [ 13 ] ; xx [ 32 ] = - ( xx [ 28 ] * xx [
13 ] ) ; xx [ 33 ] = xx [ 29 ] * xx [ 13 ] ; pm_math_quatCompose ( xx + 20 ,
xx + 30 , xx + 34 ) ; xx [ 20 ] = 0.04398570207652783 ; xx [ 21 ] = -
0.01557660780770878 ; xx [ 22 ] = - 0.1107295332843811 ; pm_math_quatXform (
xx + 34 , xx + 20 , xx + 30 ) ; xx [ 3 ] = 0.2092407478047954 - xx [ 30 ] ;
xx [ 13 ] = 6.994431946624804e-3 - xx [ 31 ] ; xx [ 20 ] =
0.03538571580294131 - xx [ 32 ] ; xx [ 21 ] = 0.5199080987731124 ; xx [ 22 ]
= xx [ 4 ] * state [ 6 ] ; xx [ 4 ] = cos ( xx [ 22 ] ) ; xx [ 23 ] =
0.4380183192185113 ; xx [ 30 ] = sin ( xx [ 22 ] ) ; xx [ 22 ] = xx [ 21 ] *
xx [ 4 ] + xx [ 23 ] * xx [ 30 ] ; xx [ 31 ] = 0.4103889911533808 ; xx [ 32 ]
= 0.6077963448386543 ; xx [ 33 ] = xx [ 31 ] * xx [ 4 ] + xx [ 32 ] * xx [ 30
] ; xx [ 38 ] = - xx [ 33 ] ; xx [ 39 ] = xx [ 31 ] * xx [ 30 ] - xx [ 32 ] *
xx [ 4 ] ; xx [ 31 ] = xx [ 21 ] * xx [ 30 ] - xx [ 23 ] * xx [ 4 ] ; xx [ 40
] = xx [ 38 ] ; xx [ 41 ] = xx [ 39 ] ; xx [ 42 ] = xx [ 31 ] ; xx [ 4 ] =
0.02250000000000072 ; xx [ 21 ] = xx [ 4 ] * xx [ 39 ] ; xx [ 23 ] =
0.06076178437482628 ; xx [ 30 ] = xx [ 31 ] * xx [ 23 ] + xx [ 33 ] * xx [ 4
] ; xx [ 32 ] = xx [ 23 ] * xx [ 39 ] ; xx [ 43 ] = - xx [ 21 ] ; xx [ 44 ] =
- xx [ 30 ] ; xx [ 45 ] = xx [ 32 ] ; pm_math_cross3 ( xx + 40 , xx + 43 , xx
+ 46 ) ; xx [ 33 ] = 2.0 ; xx [ 40 ] = 6.325759716908248e-3 - ( ( xx [ 46 ] -
xx [ 21 ] * xx [ 22 ] ) * xx [ 33 ] - xx [ 23 ] ) ; xx [ 21 ] = - (
0.02164782195543678 + ( xx [ 47 ] - xx [ 22 ] * xx [ 30 ] ) * xx [ 33 ] ) ;
xx [ 30 ] = 0.2452615216924889 - ( xx [ 33 ] * ( xx [ 48 ] + xx [ 32 ] * xx [
22 ] ) - xx [ 4 ] ) ; xx [ 4 ] = - ( xx [ 6 ] * state [ 1 ] ) ; xx [ 6 ] = xx
[ 8 ] * state [ 1 ] ; xx [ 8 ] = - ( xx [ 9 ] * state [ 1 ] ) ; xx [ 9 ] =
2.865896225298708e-4 * state [ 1 ] ; xx [ 32 ] = 0.05740946930939202 * state
[ 1 ] ; xx [ 33 ] = 7.921215826873348e-3 * state [ 1 ] ; xx [ 41 ] = xx [ 4 ]
; xx [ 42 ] = xx [ 6 ] ; xx [ 43 ] = xx [ 8 ] ; pm_math_quatInverseXform ( xx
+ 24 , xx + 41 , xx + 44 ) ; xx [ 47 ] = xx [ 44 ] - xx [ 7 ] * state [ 3 ] ;
xx [ 7 ] = xx [ 45 ] + xx [ 18 ] * state [ 3 ] ; xx [ 18 ] = xx [ 46 ] - xx [
19 ] * state [ 3 ] ; pm_math_cross3 ( xx + 41 , xx + 0 , xx + 44 ) ; xx [ 41
] = xx [ 44 ] + xx [ 9 ] ; xx [ 42 ] = xx [ 45 ] - xx [ 32 ] ; xx [ 43 ] = xx
[ 46 ] - xx [ 33 ] ; pm_math_quatInverseXform ( xx + 24 , xx + 41 , xx + 44 )
; xx [ 19 ] = xx [ 44 ] - 6.714001730939487e-3 * state [ 3 ] ; xx [ 41 ] = xx
[ 45 ] - 0.1402789988265656 * state [ 3 ] ; xx [ 42 ] = xx [ 46 ] -
0.01281680513782706 * state [ 3 ] ; xx [ 43 ] = xx [ 47 ] ; xx [ 44 ] = xx [
7 ] ; xx [ 45 ] = xx [ 18 ] ; pm_math_quatInverseXform ( xx + 34 , xx + 43 ,
xx + 48 ) ; xx [ 46 ] = xx [ 48 ] + xx [ 5 ] * state [ 5 ] ; xx [ 5 ] = xx [
49 ] - xx [ 28 ] * state [ 5 ] ; xx [ 28 ] = xx [ 50 ] + xx [ 29 ] * state [
5 ] ; xx [ 48 ] = xx [ 3 ] ; xx [ 49 ] = xx [ 13 ] ; xx [ 50 ] = xx [ 20 ] ;
pm_math_cross3 ( xx + 43 , xx + 48 , xx + 51 ) ; xx [ 43 ] = xx [ 51 ] + xx [
19 ] ; xx [ 44 ] = xx [ 52 ] + xx [ 41 ] ; xx [ 45 ] = xx [ 53 ] + xx [ 42 ]
; pm_math_quatInverseXform ( xx + 34 , xx + 43 , xx + 48 ) ; xx [ 29 ] = xx [
48 ] - 0.1073883611741656 * state [ 5 ] ; xx [ 43 ] = xx [ 49 ] -
0.03350010374115508 * state [ 5 ] ; xx [ 44 ] = xx [ 50 ] -
0.03794592426221813 * state [ 5 ] ; xx [ 48 ] = xx [ 22 ] ; xx [ 49 ] = xx [
38 ] ; xx [ 50 ] = xx [ 39 ] ; xx [ 51 ] = xx [ 31 ] ; xx [ 52 ] = xx [ 46 ]
; xx [ 53 ] = xx [ 5 ] ; xx [ 54 ] = xx [ 28 ] ; pm_math_quatInverseXform (
xx + 48 , xx + 52 , xx + 55 ) ; xx [ 58 ] = xx [ 40 ] ; xx [ 59 ] = xx [ 21 ]
; xx [ 60 ] = xx [ 30 ] ; pm_math_cross3 ( xx + 52 , xx + 58 , xx + 61 ) ; xx
[ 52 ] = xx [ 61 ] + xx [ 29 ] ; xx [ 53 ] = xx [ 62 ] + xx [ 43 ] ; xx [ 54
] = xx [ 63 ] + xx [ 44 ] ; pm_math_quatInverseXform ( xx + 48 , xx + 52 , xx
+ 58 ) ; motionData [ 0 ] = xx [ 14 ] ; motionData [ 1 ] = xx [ 15 ] ;
motionData [ 2 ] = xx [ 16 ] ; motionData [ 3 ] = xx [ 17 ] ; motionData [ 4
] = - ( 0.1203536615433424 + xx [ 10 ] ) ; motionData [ 5 ] =
0.2843729045233387 - xx [ 11 ] ; motionData [ 6 ] = 0.4485487893685208 - xx [
12 ] ; motionData [ 7 ] = xx [ 24 ] ; motionData [ 8 ] = xx [ 25 ] ;
motionData [ 9 ] = xx [ 26 ] ; motionData [ 10 ] = xx [ 27 ] ; motionData [
11 ] = xx [ 0 ] ; motionData [ 12 ] = xx [ 1 ] ; motionData [ 13 ] = xx [ 2 ]
; motionData [ 14 ] = xx [ 34 ] ; motionData [ 15 ] = xx [ 35 ] ; motionData
[ 16 ] = xx [ 36 ] ; motionData [ 17 ] = xx [ 37 ] ; motionData [ 18 ] = xx [
3 ] ; motionData [ 19 ] = xx [ 13 ] ; motionData [ 20 ] = xx [ 20 ] ;
motionData [ 21 ] = xx [ 22 ] ; motionData [ 22 ] = xx [ 38 ] ; motionData [
23 ] = xx [ 39 ] ; motionData [ 24 ] = xx [ 31 ] ; motionData [ 25 ] = xx [
40 ] ; motionData [ 26 ] = xx [ 21 ] ; motionData [ 27 ] = xx [ 30 ] ;
motionData [ 28 ] = xx [ 4 ] ; motionData [ 29 ] = xx [ 6 ] ; motionData [ 30
] = xx [ 8 ] ; motionData [ 31 ] = xx [ 9 ] ; motionData [ 32 ] = - xx [ 32 ]
; motionData [ 33 ] = - xx [ 33 ] ; motionData [ 34 ] = xx [ 47 ] ;
motionData [ 35 ] = xx [ 7 ] ; motionData [ 36 ] = xx [ 18 ] ; motionData [
37 ] = xx [ 19 ] ; motionData [ 38 ] = xx [ 41 ] ; motionData [ 39 ] = xx [
42 ] ; motionData [ 40 ] = xx [ 46 ] ; motionData [ 41 ] = xx [ 5 ] ;
motionData [ 42 ] = xx [ 28 ] ; motionData [ 43 ] = xx [ 29 ] ; motionData [
44 ] = xx [ 43 ] ; motionData [ 45 ] = xx [ 44 ] ; motionData [ 46 ] = xx [
55 ] ; motionData [ 47 ] = xx [ 56 ] ; motionData [ 48 ] = xx [ 57 ] + state
[ 7 ] ; motionData [ 49 ] = xx [ 58 ] ; motionData [ 50 ] = xx [ 59 ] + xx [
23 ] * state [ 7 ] ; motionData [ 51 ] = xx [ 60 ] ; } size_t
Aluminum_Robot_ARM_3cd5c335_1_computeAssemblyError ( const void * mech ,
const RuntimeDerivedValuesBundle * rtdv , size_t constraintIdx , const double
* state , const double * motionData , double * error ) { ( void ) mech ; (
void ) rtdv ; ( void ) state ; ( void ) motionData ; ( void ) error ; switch
( constraintIdx ) { } return 0 ; } size_t
Aluminum_Robot_ARM_3cd5c335_1_computeAssemblyJacobian ( const void * mech ,
const RuntimeDerivedValuesBundle * rtdv , size_t constraintIdx , boolean_T
forVelocitySatisfaction , const double * state , const double * motionData ,
double * J ) { ( void ) mech ; ( void ) rtdv ; ( void ) state ; ( void )
forVelocitySatisfaction ; ( void ) motionData ; ( void ) J ; switch (
constraintIdx ) { } return 0 ; } size_t
Aluminum_Robot_ARM_3cd5c335_1_computeFullAssemblyJacobian ( const void * mech
, const RuntimeDerivedValuesBundle * rtdv , const double * state , const
double * motionData , double * J ) { const double * rtdvd = rtdv -> mDoubles
. mValues ; const int * rtdvi = rtdv -> mInts . mValues ; ( void ) mech ; (
void ) rtdvd ; ( void ) rtdvi ; ( void ) state ; ( void ) motionData ; ( void
) J ; return 0 ; } int Aluminum_Robot_ARM_3cd5c335_1_isInKinematicSingularity
( const void * mech , const RuntimeDerivedValuesBundle * rtdv , size_t
constraintIdx , const double * motionData ) { ( void ) mech ; ( void ) rtdv ;
( void ) motionData ; switch ( constraintIdx ) { } return 0 ; } PmfMessageId
Aluminum_Robot_ARM_3cd5c335_1_convertStateVector ( const void * asmMech ,
const RuntimeDerivedValuesBundle * rtdv , const void * simMech , const double
* asmState , double * simState , void * neDiagMgr0 ) { const double * rtdvd =
rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ;
NeuDiagnosticManager * neDiagMgr = ( NeuDiagnosticManager * ) neDiagMgr0 ; (
void ) asmMech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) simMech ; ( void
) neDiagMgr ; simState [ 0 ] = asmState [ 0 ] ; simState [ 1 ] = asmState [ 1
] ; simState [ 2 ] = asmState [ 2 ] ; simState [ 3 ] = asmState [ 3 ] ;
simState [ 4 ] = asmState [ 4 ] ; simState [ 5 ] = asmState [ 5 ] ; simState
[ 6 ] = asmState [ 6 ] ; simState [ 7 ] = asmState [ 7 ] ; return NULL ; }
void Aluminum_Robot_ARM_3cd5c335_1_constructStateVector ( const void * mech ,
const double * solverState , const double * u , const double * uDot , double
* discreteState , double * fullState ) { ( void ) mech ; ( void ) u ; ( void
) uDot ; ( void ) discreteState ; fullState [ 0 ] = solverState [ 0 ] ;
fullState [ 1 ] = solverState [ 1 ] ; fullState [ 2 ] = solverState [ 2 ] ;
fullState [ 3 ] = solverState [ 3 ] ; fullState [ 4 ] = solverState [ 4 ] ;
fullState [ 5 ] = solverState [ 5 ] ; fullState [ 6 ] = solverState [ 6 ] ;
fullState [ 7 ] = solverState [ 7 ] ; } void
Aluminum_Robot_ARM_3cd5c335_1_extractSolverStateVector ( const void * mech ,
const double * fullState , double * solverState ) { ( void ) mech ;
solverState [ 0 ] = fullState [ 0 ] ; solverState [ 1 ] = fullState [ 1 ] ;
solverState [ 2 ] = fullState [ 2 ] ; solverState [ 3 ] = fullState [ 3 ] ;
solverState [ 4 ] = fullState [ 4 ] ; solverState [ 5 ] = fullState [ 5 ] ;
solverState [ 6 ] = fullState [ 6 ] ; solverState [ 7 ] = fullState [ 7 ] ; }
int Aluminum_Robot_ARM_3cd5c335_1_isPositionViolation ( const void * mech ,
const RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const
double * state ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const
int * rtdvi = rtdv -> mInts . mValues ; ( void ) mech ; ( void ) rtdvd ; (
void ) rtdvi ; ( void ) eqnEnableFlags ; ( void ) state ; return 0 ; } int
Aluminum_Robot_ARM_3cd5c335_1_isVelocityViolation ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const double
* state ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int *
rtdvi = rtdv -> mInts . mValues ; ( void ) mech ; ( void ) rtdvd ; ( void )
rtdvi ; ( void ) eqnEnableFlags ; ( void ) state ; return 0 ; } PmfMessageId
Aluminum_Robot_ARM_3cd5c335_1_projectStateSim ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const double
* input , double * state , void * neDiagMgr0 ) { const double * rtdvd = rtdv
-> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ;
NeuDiagnosticManager * neDiagMgr = ( NeuDiagnosticManager * ) neDiagMgr0 ; (
void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) eqnEnableFlags ; (
void ) input ; ( void ) state ; ( void ) neDiagMgr ; return NULL ; }
