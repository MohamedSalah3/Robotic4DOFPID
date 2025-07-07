#include "__cf_Aluminum_Robot_ARM.h"
#include "rt_logging_mmi.h"
#include "Aluminum_Robot_ARM_capi.h"
#include <math.h>
#include "Aluminum_Robot_ARM.h"
#include "Aluminum_Robot_ARM_private.h"
#include "Aluminum_Robot_ARM_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; extern boolean_T
gblExtModeStartPktReceived ; void raccelForceExtModeShutdown ( ) { if ( !
gblExtModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 4 , & stopRequested ) ; }
rtExtModeShutdown ( 4 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 1 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 5 ; const char_T
* gbl_raccel_Version = "9.1 (R2019a) 23-Nov-2018" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const char * gblSlvrJacPatternFileName =
"slprj\\raccel\\Aluminum_Robot_ARM\\Aluminum_Robot_ARM_Jpattern.mat" ; const
int_T gblNumRootInportBlks = 0 ; const int_T gblNumModelInputs = 0 ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
extern void * gblAperiodicPartitionHitTimes ; const int_T
gblInportDataTypeIdx [ ] = { - 1 } ; const int_T gblInportDims [ ] = { - 1 }
; const int_T gblInportComplex [ ] = { - 1 } ; const int_T
gblInportInterpoFlag [ ] = { - 1 } ; const int_T gblInportContinuous [ ] = {
- 1 } ; int_T enableFcnCallFlag [ ] = { 1 , 1 , 1 , 1 , 1 } ; const char *
raccelLoadInputsAndAperiodicHitTimes ( const char * inportFileName , int *
matFileFormat ) { return rt_RapidReadInportsMatFile ( inportFileName ,
matFileFormat , 1 ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
B rtB ; X rtX ; MassMatrix rtMassMatrix ; DW rtDW ; static SimStruct model_S
; SimStruct * const rtS = & model_S ; void MdlInitialize ( void ) { boolean_T
tmp ; int_T tmp_p ; char * tmp_e ; tmp = false ; if ( tmp ) { tmp_p = strcmp
( "ode23t" , ssGetSolverName ( rtS ) ) ; if ( tmp_p != 0 ) { tmp_e =
solver_mismatch_message ( "ode23t" , ssGetSolverName ( rtS ) ) ;
ssSetErrorStatus ( rtS , tmp_e ) ; } } rtDW . brd5pvpnwz = rtP .
PIDController_InitialConditionForIntegrator ; rtDW . aph4a3hagw = rtP .
PIDController_InitialConditionForFilter ; rtDW . nmj1xcahr1 = rtP .
DiscreteTransferFcn1_InitialStates ; rtDW . k2qwlebtbj = rtP .
PIDController1_InitialConditionForIntegrator ; rtDW . pfrj0uy4xn = rtP .
PIDController1_InitialConditionForFilter ; rtDW . faouxk0mcc = rtP .
DiscreteTransferFcn2_InitialStates ; rtX . ho32jzvqwd = rtP .
PIDController2_InitialConditionForIntegrator ; rtX . cnzrnlw10x = rtP .
PIDController2_InitialConditionForFilter ; rtDW . j5idu3rbuu = rtP .
DiscreteTransferFcn3_InitialStates ; rtX . cf4eknbnqt = rtP .
PIDController3_InitialConditionForIntegrator ; rtX . fabp12nunk = rtP .
PIDController3_InitialConditionForFilter ; rtDW . kmlkzpy3eu = rtP .
Memory_InitialCondition ; rtDW . ksnx1fvtcv = rtP .
Memory_InitialCondition_btlhzlk5fx ; tmp = false ; if ( tmp ) { tmp_p =
strcmp ( "ode23t" , ssGetSolverName ( rtS ) ) ; if ( tmp_p != 0 ) { tmp_e =
solver_mismatch_message ( "ode23t" , ssGetSolverName ( rtS ) ) ;
ssSetErrorStatus ( rtS , tmp_e ) ; } } tmp = false ; if ( tmp ) { tmp_p =
strcmp ( "ode23t" , ssGetSolverName ( rtS ) ) ; if ( tmp_p != 0 ) { tmp_e =
solver_mismatch_message ( "ode23t" , ssGetSolverName ( rtS ) ) ;
ssSetErrorStatus ( rtS , tmp_e ) ; } } tmp = false ; if ( tmp ) { tmp_p =
strcmp ( "ode23t" , ssGetSolverName ( rtS ) ) ; if ( tmp_p != 0 ) { tmp_e =
solver_mismatch_message ( "ode23t" , ssGetSolverName ( rtS ) ) ;
ssSetErrorStatus ( rtS , tmp_e ) ; } } tmp = false ; if ( tmp ) { tmp_p =
strcmp ( "ode23t" , ssGetSolverName ( rtS ) ) ; if ( tmp_p != 0 ) { tmp_e =
solver_mismatch_message ( "ode23t" , ssGetSolverName ( rtS ) ) ;
ssSetErrorStatus ( rtS , tmp_e ) ; } } { static int_T modelMassMatrixIr [ 32
] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 14 , 16 , 13 ,
15 , 19 , 21 , 23 , 20 , 22 , 26 , 28 , 30 , 27 , 29 , 33 , 35 , 37 , 34 , 36
} ; static int_T modelMassMatrixJc [ 41 ] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 ,
8 , 9 , 10 , 11 , 12 , 13 , 15 , 16 , 17 , 17 , 17 , 17 , 18 , 20 , 21 , 22 ,
22 , 22 , 22 , 23 , 25 , 26 , 27 , 27 , 27 , 27 , 28 , 30 , 31 , 32 , 32 , 32
, 32 } ; static real_T modelMassMatrixPr [ 32 ] = { 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 } ; ( void ) memcpy ( rtMassMatrix . ir , modelMassMatrixIr , 32 *
sizeof ( int_T ) ) ; ( void ) memcpy ( rtMassMatrix . jc , modelMassMatrixJc
, 41 * sizeof ( int_T ) ) ; ( void ) memcpy ( rtMassMatrix . pr ,
modelMassMatrixPr , 32 * sizeof ( real_T ) ) ; } } void MdlStart ( void ) {
NeslSimulator * tmp ; boolean_T tmp_p ; NeuDiagnosticManager *
diagnosticManager ; NeModelParameters modelParameters ; real_T tmp_e ;
NeuDiagnosticTree * diagnosticTree ; int32_T tmp_i ; char * msg ;
NeslSimulationData * simulationData ; real_T time ; NeModelParameters
modelParameters_p ; real_T time_p ; NeModelParameters modelParameters_e ;
real_T time_e ; NeModelParameters modelParameters_i ; real_T time_i ;
NeModelParameters modelParameters_m ; real_T time_m ; NeModelParameters
modelParameters_g ; real_T time_g ; NeModelParameters modelParameters_j ;
real_T time_j ; NeModelParameters modelParameters_f ; real_T time_f ;
NeModelParameters modelParameters_c ; real_T time_c ; NeModelParameters
modelParameters_k ; real_T time_k ; NeParameterBundle expl_temp ;
NeParameterBundle expl_temp_p ; NeParameterBundle expl_temp_e ;
NeParameterBundle expl_temp_i ; NeParameterBundle expl_temp_m ; { void * *
slioCatalogueAddr = rt_slioCatalogueAddr ( ) ; void * r2 = ( NULL ) ; void *
* pOSigstreamManagerAddr = ( NULL ) ; const int maxErrorBufferSize = 16384 ;
char errMsgCreatingOSigstreamManager [ 16384 ] ; bool
errorCreatingOSigstreamManager = false ; const char *
errorAddingR2SharedResource = ( NULL ) ; * slioCatalogueAddr =
rtwGetNewSlioCatalogue ( rt_GetMatSigLogSelectorFileName ( ) ) ;
errorAddingR2SharedResource = rtwAddR2SharedResource (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) , 1 ) ; if (
errorAddingR2SharedResource != ( NULL ) ) { rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = ( NULL ) ; ssSetErrorStatus ( rtS
, errorAddingR2SharedResource ) ; return ; } r2 = rtwGetR2SharedResource (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) ) ;
pOSigstreamManagerAddr = rt_GetOSigstreamManagerAddr ( ) ;
errorCreatingOSigstreamManager = rtwOSigstreamManagerCreateInstance (
rt_GetMatSigLogSelectorFileName ( ) , r2 , pOSigstreamManagerAddr ,
errMsgCreatingOSigstreamManager , maxErrorBufferSize ) ; if (
errorCreatingOSigstreamManager ) { * pOSigstreamManagerAddr = ( NULL ) ;
ssSetErrorStatus ( rtS , errMsgCreatingOSigstreamManager ) ; return ; } } {
bool externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( ) ; rtwISigstreamManagerGetInputIsInDatasetFormat (
pISigstreamManager , & externalInputIsInDatasetFormat ) ; if (
externalInputIsInDatasetFormat ) { } } { void * slioCatalogue =
rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if (
! slioCatalogue || ! rtwDisableStreamingToRepository ( slioCatalogue ) ) { {
{ sdiSignalSourceInfoU srcInfo ; sdiLabelU sigName = sdiGetLabelFromChars (
"" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"Aluminum_Robot_ARM/ROBOT4DOF" ) ; sdiLabelU blockSID = sdiGetLabelFromChars
( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" ) ; const char_T *
leafUnits [ 4 ] = { "rad" , "rad" , "rad" , "rad" } ;
sdiVirtualBusLeafElementInfoU leafElInfo [ 4 ] ; int_T childDimsArray0 [ 1 ]
= { 1 } ; int_T childDimsArray1 [ 1 ] = { 1 } ; int_T childDimsArray2 [ 1 ] =
{ 1 } ; int_T childDimsArray3 [ 1 ] = { 1 } ; { sdiAsyncRepoDataTypeHandle
hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo
[ 0 ] . hDataType = hDT ; leafElInfo [ 0 ] . signalName =
sdiGetLabelFromChars ( ".tAngle" ) ; leafElInfo [ 0 ] . dims . nDims = 1 ;
leafElInfo [ 0 ] . dims . dimensions = childDimsArray0 ; leafElInfo [ 0 ] .
dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 0 ] . complexity = REAL ;
leafElInfo [ 0 ] . isLinearInterp = 1 ; leafElInfo [ 0 ] . units = leafUnits
[ 0 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 1 ]
. hDataType = hDT ; leafElInfo [ 1 ] . signalName = sdiGetLabelFromChars (
".bAngle" ) ; leafElInfo [ 1 ] . dims . nDims = 1 ; leafElInfo [ 1 ] . dims .
dimensions = childDimsArray1 ; leafElInfo [ 1 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 1 ] . complexity = REAL ; leafElInfo [ 1
] . isLinearInterp = 1 ; leafElInfo [ 1 ] . units = leafUnits [ 1 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 2 ] . hDataType = hDT ; leafElInfo [ 2 ] .
signalName = sdiGetLabelFromChars ( ".fAngle" ) ; leafElInfo [ 2 ] . dims .
nDims = 1 ; leafElInfo [ 2 ] . dims . dimensions = childDimsArray2 ;
leafElInfo [ 2 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 2 ] .
complexity = REAL ; leafElInfo [ 2 ] . isLinearInterp = 1 ; leafElInfo [ 2 ]
. units = leafUnits [ 2 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 3 ]
. hDataType = hDT ; leafElInfo [ 3 ] . signalName = sdiGetLabelFromChars (
".wAngle" ) ; leafElInfo [ 3 ] . dims . nDims = 1 ; leafElInfo [ 3 ] . dims .
dimensions = childDimsArray3 ; leafElInfo [ 3 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 3 ] . complexity = REAL ; leafElInfo [ 3
] . isLinearInterp = 1 ; leafElInfo [ 3 ] . units = leafUnits [ 3 ] ; }
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ;
sdiCreateAsyncQueuesForVirtualBusWithExportSettings ( & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"0fa20c2c-2793-45a5-bbb9-107f78218355" , 4 , leafElInfo , & rtDW . cizvyg3haq
. AQHandles [ 0 ] , 1 , 0 , "" , "" , "" ) ; if ( rtDW . cizvyg3haq .
AQHandles [ 0 ] ) { sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ;
sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiSetSignalSampleTimeString ( rtDW .
cizvyg3haq . AQHandles [ 0 ] , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . cizvyg3haq . AQHandles [ 0 ] , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . cizvyg3haq .
AQHandles [ 0 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
cizvyg3haq . AQHandles [ 0 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( rtDW . cizvyg3haq . AQHandles [ 1 ] ,
"Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW .
cizvyg3haq . AQHandles [ 1 ] , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . cizvyg3haq . AQHandles [ 1 ] , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . cizvyg3haq . AQHandles [ 1 ]
, loggedName , origSigName , propName ) ; sdiSetSignalSampleTimeString ( rtDW
. cizvyg3haq . AQHandles [ 2 ] , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . cizvyg3haq . AQHandles [ 2 ] , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . cizvyg3haq .
AQHandles [ 2 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
cizvyg3haq . AQHandles [ 2 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( rtDW . cizvyg3haq . AQHandles [ 3 ] ,
"Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW .
cizvyg3haq . AQHandles [ 3 ] , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . cizvyg3haq . AQHandles [ 3 ] , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . cizvyg3haq . AQHandles [ 3 ]
, loggedName , origSigName , propName ) ; sdiFreeLabel ( loggedName ) ;
sdiFreeLabel ( origSigName ) ; sdiFreeLabel ( propName ) ; } sdiFreeLabel (
sigName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; sdiFreeName ( leafElInfo [ 0 ] . signalName ) ;
sdiFreeName ( leafElInfo [ 1 ] . signalName ) ; sdiFreeName ( leafElInfo [ 2
] . signalName ) ; sdiFreeName ( leafElInfo [ 3 ] . signalName ) ; } } } rtDW
. cizvyg3haq . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { rtwAddTopBusNode ( "" , 4 , treeVector ) ; { int_T
sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "tAngle" , "linear" , 0 , (
unsigned int * ) sigDimsArray , 1 , "double" , "rad" , "Continuous" , 0.0 ,
ssGetTFinal ( rtS ) , treeVector ) ; } { int_T sigDimsArray [ 1 ] = { 1 } ;
rtwAddLeafNode ( 0 , "bAngle" , "linear" , 0 , ( unsigned int * )
sigDimsArray , 1 , "double" , "rad" , "Continuous" , 0.0 , ssGetTFinal ( rtS
) , treeVector ) ; } { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode ( 0
, "fAngle" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" ,
"rad" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; } { int_T
sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "wAngle" , "linear" , 0 , (
unsigned int * ) sigDimsArray , 1 , "double" , "rad" , "Continuous" , 0.0 ,
ssGetTFinal ( rtS ) , treeVector ) ; } rtwPopNVBusNode ( treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 4 , 1 , 0 , 1 , "" ,
"" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"Aluminum_Robot_ARM/ROBOT4DOF" , 1 , 0 , slioCatalogue , ( NULL ) , 0 , (
NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal (
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"Aluminum_Robot_ARM/ROBOT4DOF" , 1 , "" ) ; } if ( rtwLoggingOverride (
signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS ( rtS ) -> mdlInfo ->
rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval ( ssGetRootSS ( rtS )
-> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . cizvyg3haq . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwDisableStreamingToRepository ( slioCatalogue ) ) { { {
sdiSignalSourceInfoU srcInfo ; sdiLabelU sigName = sdiGetLabelFromChars ( ""
) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"Aluminum_Robot_ARM/Controller/Bus Creator3" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; const char_T * leafUnits [ 3 ] = { "V" , "V" , "V" } ;
sdiVirtualBusLeafElementInfoU leafElInfo [ 3 ] ; int_T childDimsArray0 [ 1 ]
= { 1 } ; int_T childDimsArray1 [ 1 ] = { 1 } ; int_T childDimsArray2 [ 1 ] =
{ 1 } ; { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 0 ]
. hDataType = hDT ; leafElInfo [ 0 ] . signalName = sdiGetLabelFromChars (
"tCMD.duty" ) ; leafElInfo [ 0 ] . dims . nDims = 1 ; leafElInfo [ 0 ] . dims
. dimensions = childDimsArray0 ; leafElInfo [ 0 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 0 ] . complexity = REAL ; leafElInfo [ 0
] . isLinearInterp = 0 ; leafElInfo [ 0 ] . units = leafUnits [ 0 ] ; } {
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; leafElInfo [ 1 ] . hDataType = hDT ; leafElInfo [ 1 ] .
signalName = sdiGetLabelFromChars ( "tCMD.rev" ) ; leafElInfo [ 1 ] . dims .
nDims = 1 ; leafElInfo [ 1 ] . dims . dimensions = childDimsArray1 ;
leafElInfo [ 1 ] . dimsMode = DIMENSIONS_MODE_FIXED ; leafElInfo [ 1 ] .
complexity = REAL ; leafElInfo [ 1 ] . isLinearInterp = 0 ; leafElInfo [ 1 ]
. units = leafUnits [ 1 ] ; } { sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; leafElInfo [ 2 ]
. hDataType = hDT ; leafElInfo [ 2 ] . signalName = sdiGetLabelFromChars (
"tCMD.brk" ) ; leafElInfo [ 2 ] . dims . nDims = 1 ; leafElInfo [ 2 ] . dims
. dimensions = childDimsArray2 ; leafElInfo [ 2 ] . dimsMode =
DIMENSIONS_MODE_FIXED ; leafElInfo [ 2 ] . complexity = REAL ; leafElInfo [ 2
] . isLinearInterp = 0 ; leafElInfo [ 2 ] . units = leafUnits [ 2 ] ; }
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ;
sdiCreateAsyncQueuesForVirtualBusWithExportSettings ( & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"548fac35-f095-4541-9402-3032b7f210d4" , 3 , leafElInfo , & rtDW . o4zjtouqv1
. AQHandles [ 0 ] , 1 , 0 , "tCMD" , "tCMD" , "" ) ; if ( rtDW . o4zjtouqv1 .
AQHandles [ 0 ] ) { sdiLabelU loggedName = sdiGetLabelFromChars ( "tCMD" ) ;
sdiLabelU origSigName = sdiGetLabelFromChars ( "tCMD" ) ; sdiLabelU propName
= sdiGetLabelFromChars ( "" ) ; sdiSetSignalSampleTimeString ( rtDW .
o4zjtouqv1 . AQHandles [ 0 ] , "0.001" , 0.001 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . o4zjtouqv1 . AQHandles [ 0 ] , ssGetTaskTime (
rtS , 2 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . o4zjtouqv1 .
AQHandles [ 0 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
o4zjtouqv1 . AQHandles [ 0 ] , loggedName , origSigName , propName ) ;
sdiSetSignalSampleTimeString ( rtDW . o4zjtouqv1 . AQHandles [ 1 ] , "0.001"
, 0.001 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . o4zjtouqv1 .
AQHandles [ 1 ] , ssGetTaskTime ( rtS , 2 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . o4zjtouqv1 . AQHandles [ 1 ] , 1
, 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW . o4zjtouqv1 . AQHandles [ 1 ]
, loggedName , origSigName , propName ) ; sdiSetSignalSampleTimeString ( rtDW
. o4zjtouqv1 . AQHandles [ 2 ] , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetRunStartTime ( rtDW . o4zjtouqv1 . AQHandles [ 2 ] , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( rtDW . o4zjtouqv1 .
AQHandles [ 2 ] , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( rtDW .
o4zjtouqv1 . AQHandles [ 2 ] , loggedName , origSigName , propName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; } sdiFreeLabel ( sigName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; sdiFreeName (
leafElInfo [ 0 ] . signalName ) ; sdiFreeName ( leafElInfo [ 1 ] . signalName
) ; sdiFreeName ( leafElInfo [ 2 ] . signalName ) ; } } } rtDW . o4zjtouqv1 .
SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void * accessor = (
NULL ) ; const void * signalDescriptor = ( NULL ) ; void * loggingInterval =
( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; if ( slioCatalogue &&
rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector = rtwGetTreeVector ( ) ;
{ rtwAddTopBusNode ( "tCMD" , 3 , treeVector ) ; { int_T sigDimsArray [ 1 ] =
{ 1 } ; rtwAddLeafNode ( 0 , "duty" , "zoh" , 0 , ( unsigned int * )
sigDimsArray , 1 , "double" , "V" , "0.001" , 0.001 , ssGetTFinal ( rtS ) ,
treeVector ) ; } { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode ( 0 ,
"rev" , "zoh" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double" , "V" ,
"0.001" , 0.001 , ssGetTFinal ( rtS ) , treeVector ) ; } { int_T sigDimsArray
[ 1 ] = { 1 } ; rtwAddLeafNode ( 0 , "brk" , "zoh" , 0 , ( unsigned int * )
sigDimsArray , 1 , "double" , "V" , "Continuous" , 0.0 , ssGetTFinal ( rtS )
, treeVector ) ; } rtwPopNVBusNode ( treeVector ) ; } signalDescriptor =
rtwGetSignalDescriptor ( treeVector , 3 , 1 , 0 , 1 , "tCMD" , "" ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"Aluminum_Robot_ARM/Controller/Bus Creator3" , 1 , 0 , slioCatalogue , ( NULL
) , 0 , ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) ) {
sdiSlioIsLoggingSignal ( rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"Aluminum_Robot_ARM/Controller/Bus Creator3" , 1 , "tCMD" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . o4zjtouqv1 . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwDisableStreamingToRepository ( slioCatalogue ) ) { { {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"<tREF>" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "<tREF>" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "Aluminum_Robot_ARM/Controller/ref Select" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "<tREF>" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. kk11noexzo . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"05a5c1e4-eb81-46a1-b6a0-00e76a4cb7c4" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . kk11noexzo . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . kk11noexzo . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . kk11noexzo .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . kk11noexzo . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . kk11noexzo . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
kk11noexzo . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "<tREF>" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double"
, "" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"<tREF>" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"Aluminum_Robot_ARM/Controller/ref Select" , 1 , 0 , slioCatalogue , ( NULL )
, 0 , ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal
( rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"Aluminum_Robot_ARM/Controller/ref Select" , 1 , "<tREF>" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . kk11noexzo . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwDisableStreamingToRepository ( slioCatalogue ) ) { { {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"<bREF>" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "<bREF>" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "Aluminum_Robot_ARM/Controller/ref Select" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "<bREF>" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 1 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. otmjf3k0yc . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"5a3c0dcd-41d8-4bcb-bedc-42e45510a0ec" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . otmjf3k0yc . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . otmjf3k0yc . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . otmjf3k0yc .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . otmjf3k0yc . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . otmjf3k0yc . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
otmjf3k0yc . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "<bREF>" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double"
, "" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"<bREF>" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"Aluminum_Robot_ARM/Controller/ref Select" , 2 , 0 , slioCatalogue , ( NULL )
, 0 , ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal
( rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"Aluminum_Robot_ARM/Controller/ref Select" , 2 , "<bREF>" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . otmjf3k0yc . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwDisableStreamingToRepository ( slioCatalogue ) ) { { {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"<fREF>" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "<fREF>" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "Aluminum_Robot_ARM/Controller/ref Select" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "<fREF>" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 2 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. kpxx2wlm0j . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"b1419fe8-64a4-4bc5-ac23-a39b5d2e7304" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . kpxx2wlm0j . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . kpxx2wlm0j . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . kpxx2wlm0j .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . kpxx2wlm0j . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . kpxx2wlm0j . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
kpxx2wlm0j . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "<fREF>" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double"
, "" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"<fREF>" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"Aluminum_Robot_ARM/Controller/ref Select" , 3 , 0 , slioCatalogue , ( NULL )
, 0 , ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal
( rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"Aluminum_Robot_ARM/Controller/ref Select" , 3 , "<fREF>" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . kpxx2wlm0j . SlioLTF = accessor ;
} } } } { void * slioCatalogue = rt_slioCatalogue ( ) ?
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) : sdiGetSlioCatalogue (
rt_dataMapInfo . mmi . InstanceMap . fullPath ) ; if ( ! slioCatalogue || !
rtwDisableStreamingToRepository ( slioCatalogue ) ) { { {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"<wREF>" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "<wREF>" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "Aluminum_Robot_ARM/Controller/ref Select" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "<wREF>" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 3 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. hhil12yx2a . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"799a1ec3-27ca-4e49-b589-93bc840996f3" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . hhil12yx2a . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . hhil12yx2a . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . hhil12yx2a .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . hhil12yx2a . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . hhil12yx2a . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } rtDW .
hhil12yx2a . SlioLTF = ( NULL ) ; { void * treeVector = ( NULL ) ; void *
accessor = ( NULL ) ; const void * signalDescriptor = ( NULL ) ; void *
loggingInterval = ( NULL ) ; char * datasetName = "tmp_raccel_logsout" ; if (
slioCatalogue && rtwIsLoggingToFile ( slioCatalogue ) ) { treeVector =
rtwGetTreeVector ( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode (
0 , "<wREF>" , "linear" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double"
, "" , "Continuous" , 0.0 , ssGetTFinal ( rtS ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"<wREF>" , "" , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"Aluminum_Robot_ARM/Controller/ref Select" , 4 , 0 , slioCatalogue , ( NULL )
, 0 , ( NULL ) , 0 ) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal
( rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"Aluminum_Robot_ARM/Controller/ref Select" , 4 , "<wREF>" ) ; } if (
rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if ( ssGetRootSS
( rtS ) -> mdlInfo -> rtwLogInfo ) { loggingInterval = rtliGetLoggingInterval
( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ; } else { loggingInterval =
sdiGetLoggingIntervals ( rt_dataMapInfo . mmi . InstanceMap . fullPath ) ;
datasetName = "" ; } accessor = rtwGetAccessor ( signalDescriptor ,
loggingInterval ) ; rtwAddR2Client ( accessor , signalDescriptor ,
slioCatalogue , datasetName , 1 ) ; rtDW . hhil12yx2a . SlioLTF = accessor ;
} } } } tmp = nesl_lease_simulator (
"Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration_1" , 0 , 0 ) ;
rtDW . gpclr5jytr = ( void * ) tmp ; tmp_p = pointer_is_null ( rtDW .
gpclr5jytr ) ; if ( tmp_p ) { Aluminum_Robot_ARM_3cd5c335_1_gateway ( ) ; tmp
= nesl_lease_simulator (
"Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration_1" , 0 , 0 ) ;
rtDW . gpclr5jytr = ( void * ) tmp ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . hwxj03owez = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
fb2s2iht4c = ( void * ) diagnosticManager ; modelParameters . mSolverType =
NE_SOLVER_TYPE_DAE ; modelParameters . mSolverTolerance = 0.001 ;
modelParameters . mVariableStepSolver = true ; modelParameters .
mFixedStepSize = 0.001 ; modelParameters . mStartTime = 0.0 ; modelParameters
. mLoadInitialState = false ; modelParameters . mUseSimState = false ;
modelParameters . mLinTrimCompile = false ; modelParameters . mLoggingMode =
SSC_LOGGING_NONE ; modelParameters . mRTWModifiedTimeStamp = 6.72500639E+8 ;
tmp_e = 0.001 ; modelParameters . mSolverTolerance = tmp_e ; tmp_e = 0.0 ;
modelParameters . mFixedStepSize = tmp_e ; tmp_p = true ; modelParameters .
mVariableStepSolver = tmp_p ; diagnosticManager = ( NeuDiagnosticManager * )
rtDW . fb2s2iht4c ; diagnosticTree = neu_diagnostic_manager_get_initial_tree
( diagnosticManager ) ; tmp_i = nesl_initialize_simulator ( ( NeslSimulator *
) rtDW . gpclr5jytr , & modelParameters , diagnosticManager ) ; if ( tmp_i !=
0 ) { tmp_p = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } expl_temp . mRealParameters . mN = 0 ; expl_temp .
mRealParameters . mX = NULL ; expl_temp . mLogicalParameters . mN = 0 ;
expl_temp . mLogicalParameters . mX = NULL ; expl_temp . mIntegerParameters .
mN = 0 ; expl_temp . mIntegerParameters . mX = NULL ; expl_temp .
mIndexParameters . mN = 0 ; expl_temp . mIndexParameters . mX = NULL ;
nesl_simulator_set_rtps ( ( NeslSimulator * ) rtDW . gpclr5jytr , expl_temp )
; simulationData = ( NeslSimulationData * ) rtDW . hwxj03owez ; time = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 8 ;
simulationData -> mData -> mContStates . mX = & rtX . mqrisyyzvz [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . g42hzkrdme ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
l0fbymf1qf ; tmp_p = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS
) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp_p
; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ;
tmp_p = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp_p ; tmp_p =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp_p ; tmp_p = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp_p ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp_p = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp_p ; diagnosticManager = ( NeuDiagnosticManager
* ) rtDW . fb2s2iht4c ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . gpclr5jytr ,
NESL_SIM_INITIALIZEONCE , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp_p = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
tmp_p ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus (
rtS , msg ) ; } } tmp = nesl_lease_simulator (
"Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration_1" , 1 , 0 ) ;
rtDW . a0idm12ybz = ( void * ) tmp ; tmp_p = pointer_is_null ( rtDW .
a0idm12ybz ) ; if ( tmp_p ) { Aluminum_Robot_ARM_3cd5c335_1_gateway ( ) ; tmp
= nesl_lease_simulator (
"Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration_1" , 1 , 0 ) ;
rtDW . a0idm12ybz = ( void * ) tmp ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . hfzjpix1m2 = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
psm45qaiki = ( void * ) diagnosticManager ; modelParameters_p . mSolverType =
NE_SOLVER_TYPE_DAE ; modelParameters_p . mSolverTolerance = 0.001 ;
modelParameters_p . mVariableStepSolver = true ; modelParameters_p .
mFixedStepSize = 0.001 ; modelParameters_p . mStartTime = 0.0 ;
modelParameters_p . mLoadInitialState = false ; modelParameters_p .
mUseSimState = false ; modelParameters_p . mLinTrimCompile = false ;
modelParameters_p . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_p .
mRTWModifiedTimeStamp = 6.72500639E+8 ; tmp_e = 0.001 ; modelParameters_p .
mSolverTolerance = tmp_e ; tmp_e = 0.0 ; modelParameters_p . mFixedStepSize =
tmp_e ; tmp_p = true ; modelParameters_p . mVariableStepSolver = tmp_p ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . psm45qaiki ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . a0idm12ybz
, & modelParameters_p , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . hfzjpix1m2 ; time_p = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_p ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . aw3x413kxh ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . hnatrkqrtk ; tmp_p = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp_p ; simulationData ->
mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp_p = (
ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp_p ; tmp_p =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp_p ; simulationData -> mData ->
mIsComputingJacobian = false ; simulationData -> mData -> mIsEvaluatingF0 =
false ; tmp_p = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData
-> mIsSolverRequestingReset = tmp_p ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . psm45qaiki ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . a0idm12ybz ,
NESL_SIM_INITIALIZEONCE , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp_p = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
tmp_p ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus (
rtS , msg ) ; } } { FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo
* ) calloc ( 1 , sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus (
rtS , "from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "tuvar" ; fromwksInfo -> origDataTypeId
= 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo -> origWidth = 4 ;
fromwksInfo -> origElSize = sizeof ( real_T ) ; fromwksInfo -> data = ( void
* ) rtP . FromWs_Data0 ; fromwksInfo -> nDataPoints = 7 ; fromwksInfo -> time
= ( double * ) rtP . FromWs_Time0 ; rtDW . nxn4r2j4ni . TimePtr = fromwksInfo
-> time ; rtDW . nxn4r2j4ni . DataPtr = fromwksInfo -> data ; rtDW .
nxn4r2j4ni . RSimInfoPtr = fromwksInfo ; } rtDW . fhyyuxa0yu . PrevIndex = 0
; } tmp = nesl_lease_simulator (
"Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration_3" , 0 , 0 ) ;
rtDW . a3jz1vhf4h = ( void * ) tmp ; tmp_p = pointer_is_null ( rtDW .
a3jz1vhf4h ) ; if ( tmp_p ) { Aluminum_Robot_ARM_3cd5c335_3_gateway ( ) ; tmp
= nesl_lease_simulator (
"Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration_3" , 0 , 0 ) ;
rtDW . a3jz1vhf4h = ( void * ) tmp ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . ox0bnvu31g = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
dhy2lo1oyd = ( void * ) diagnosticManager ; modelParameters_e . mSolverType =
NE_SOLVER_TYPE_DAE ; modelParameters_e . mSolverTolerance = 0.001 ;
modelParameters_e . mVariableStepSolver = true ; modelParameters_e .
mFixedStepSize = 0.001 ; modelParameters_e . mStartTime = 0.0 ;
modelParameters_e . mLoadInitialState = false ; modelParameters_e .
mUseSimState = false ; modelParameters_e . mLinTrimCompile = false ;
modelParameters_e . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_e .
mRTWModifiedTimeStamp = 6.72500639E+8 ; tmp_e = 0.001 ; modelParameters_e .
mSolverTolerance = tmp_e ; tmp_e = 0.0 ; modelParameters_e . mFixedStepSize =
tmp_e ; tmp_p = true ; modelParameters_e . mVariableStepSolver = tmp_p ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . dhy2lo1oyd ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . a3jz1vhf4h
, & modelParameters_e , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
expl_temp_p . mRealParameters . mN = 0 ; expl_temp_p . mRealParameters . mX =
NULL ; expl_temp_p . mLogicalParameters . mN = 0 ; expl_temp_p .
mLogicalParameters . mX = NULL ; expl_temp_p . mIntegerParameters . mN = 0 ;
expl_temp_p . mIntegerParameters . mX = NULL ; expl_temp_p . mIndexParameters
. mN = 0 ; expl_temp_p . mIndexParameters . mX = NULL ;
nesl_simulator_set_rtps ( ( NeslSimulator * ) rtDW . a3jz1vhf4h , expl_temp_p
) ; simulationData = ( NeslSimulationData * ) rtDW . ox0bnvu31g ; time_e =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_e ; simulationData -> mData -> mContStates .
mN = 6 ; simulationData -> mData -> mContStates . mX = & rtX . fwzhxfm2hy [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . cxsjqpuo4e ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
gbzd5pugdl [ 0 ] ; tmp_p = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
( rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp_p ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS
) ; tmp_p = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U )
; simulationData -> mData -> mIsSolverAssertCheck = tmp_p ; tmp_p =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp_p ; tmp_p = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp_p ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp_p = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp_p ; diagnosticManager = ( NeuDiagnosticManager
* ) rtDW . dhy2lo1oyd ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . a3jz1vhf4h ,
NESL_SIM_INITIALIZEONCE , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp_p = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
tmp_p ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus (
rtS , msg ) ; } } tmp = nesl_lease_simulator (
"Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration_3" , 1 , 0 ) ;
rtDW . i2rvvnjeqf = ( void * ) tmp ; tmp_p = pointer_is_null ( rtDW .
i2rvvnjeqf ) ; if ( tmp_p ) { Aluminum_Robot_ARM_3cd5c335_3_gateway ( ) ; tmp
= nesl_lease_simulator (
"Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration_3" , 1 , 0 ) ;
rtDW . i2rvvnjeqf = ( void * ) tmp ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . am2r0bghwi = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
eyjwwignxd = ( void * ) diagnosticManager ; modelParameters_i . mSolverType =
NE_SOLVER_TYPE_DAE ; modelParameters_i . mSolverTolerance = 0.001 ;
modelParameters_i . mVariableStepSolver = true ; modelParameters_i .
mFixedStepSize = 0.001 ; modelParameters_i . mStartTime = 0.0 ;
modelParameters_i . mLoadInitialState = false ; modelParameters_i .
mUseSimState = false ; modelParameters_i . mLinTrimCompile = false ;
modelParameters_i . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_i .
mRTWModifiedTimeStamp = 6.72500639E+8 ; tmp_e = 0.001 ; modelParameters_i .
mSolverTolerance = tmp_e ; tmp_e = 0.0 ; modelParameters_i . mFixedStepSize =
tmp_e ; tmp_p = true ; modelParameters_i . mVariableStepSolver = tmp_p ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . eyjwwignxd ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . i2rvvnjeqf
, & modelParameters_i , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . am2r0bghwi ; time_i = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_i ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . jy0kf1gtnz ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . itey1ecn4p ; tmp_p = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp_p ; simulationData ->
mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp_p = (
ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp_p ; tmp_p =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp_p ; simulationData -> mData ->
mIsComputingJacobian = false ; simulationData -> mData -> mIsEvaluatingF0 =
false ; tmp_p = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData
-> mIsSolverRequestingReset = tmp_p ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . eyjwwignxd ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . i2rvvnjeqf ,
NESL_SIM_INITIALIZEONCE , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp_p = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
tmp_p ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus (
rtS , msg ) ; } } tmp = nesl_lease_simulator (
"Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration_5" , 0 , 0 ) ;
rtDW . la3jhngrnl = ( void * ) tmp ; tmp_p = pointer_is_null ( rtDW .
la3jhngrnl ) ; if ( tmp_p ) { Aluminum_Robot_ARM_3cd5c335_5_gateway ( ) ; tmp
= nesl_lease_simulator (
"Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration_5" , 0 , 0 ) ;
rtDW . la3jhngrnl = ( void * ) tmp ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . bj3ze5yj42 = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
lieaetbmrt = ( void * ) diagnosticManager ; modelParameters_m . mSolverType =
NE_SOLVER_TYPE_DAE ; modelParameters_m . mSolverTolerance = 0.001 ;
modelParameters_m . mVariableStepSolver = true ; modelParameters_m .
mFixedStepSize = 0.001 ; modelParameters_m . mStartTime = 0.0 ;
modelParameters_m . mLoadInitialState = false ; modelParameters_m .
mUseSimState = false ; modelParameters_m . mLinTrimCompile = false ;
modelParameters_m . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_m .
mRTWModifiedTimeStamp = 6.72500639E+8 ; tmp_e = 0.001 ; modelParameters_m .
mSolverTolerance = tmp_e ; tmp_e = 0.0 ; modelParameters_m . mFixedStepSize =
tmp_e ; tmp_p = true ; modelParameters_m . mVariableStepSolver = tmp_p ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . lieaetbmrt ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . la3jhngrnl
, & modelParameters_m , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
expl_temp_e . mRealParameters . mN = 0 ; expl_temp_e . mRealParameters . mX =
NULL ; expl_temp_e . mLogicalParameters . mN = 0 ; expl_temp_e .
mLogicalParameters . mX = NULL ; expl_temp_e . mIntegerParameters . mN = 0 ;
expl_temp_e . mIntegerParameters . mX = NULL ; expl_temp_e . mIndexParameters
. mN = 0 ; expl_temp_e . mIndexParameters . mX = NULL ;
nesl_simulator_set_rtps ( ( NeslSimulator * ) rtDW . la3jhngrnl , expl_temp_e
) ; simulationData = ( NeslSimulationData * ) rtDW . bj3ze5yj42 ; time_m =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_m ; simulationData -> mData -> mContStates .
mN = 6 ; simulationData -> mData -> mContStates . mX = & rtX . feytd2zvev [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . l1mlsom4no ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
hsxy3n0vne [ 0 ] ; tmp_p = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
( rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp_p ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS
) ; tmp_p = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U )
; simulationData -> mData -> mIsSolverAssertCheck = tmp_p ; tmp_p =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp_p ; tmp_p = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp_p ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp_p = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp_p ; diagnosticManager = ( NeuDiagnosticManager
* ) rtDW . lieaetbmrt ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . la3jhngrnl ,
NESL_SIM_INITIALIZEONCE , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp_p = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
tmp_p ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus (
rtS , msg ) ; } } tmp = nesl_lease_simulator (
"Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration_5" , 1 , 0 ) ;
rtDW . o3onksh0um = ( void * ) tmp ; tmp_p = pointer_is_null ( rtDW .
o3onksh0um ) ; if ( tmp_p ) { Aluminum_Robot_ARM_3cd5c335_5_gateway ( ) ; tmp
= nesl_lease_simulator (
"Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration_5" , 1 , 0 ) ;
rtDW . o3onksh0um = ( void * ) tmp ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . j23zdmwkkl = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
npoaqa0aen = ( void * ) diagnosticManager ; modelParameters_g . mSolverType =
NE_SOLVER_TYPE_DAE ; modelParameters_g . mSolverTolerance = 0.001 ;
modelParameters_g . mVariableStepSolver = true ; modelParameters_g .
mFixedStepSize = 0.001 ; modelParameters_g . mStartTime = 0.0 ;
modelParameters_g . mLoadInitialState = false ; modelParameters_g .
mUseSimState = false ; modelParameters_g . mLinTrimCompile = false ;
modelParameters_g . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_g .
mRTWModifiedTimeStamp = 6.72500639E+8 ; tmp_e = 0.001 ; modelParameters_g .
mSolverTolerance = tmp_e ; tmp_e = 0.0 ; modelParameters_g . mFixedStepSize =
tmp_e ; tmp_p = true ; modelParameters_g . mVariableStepSolver = tmp_p ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . npoaqa0aen ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . o3onksh0um
, & modelParameters_g , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . j23zdmwkkl ; time_g = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_g ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . hkg4huthek ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . ffx44a5ccg ; tmp_p = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp_p ; simulationData ->
mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp_p = (
ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp_p ; tmp_p =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp_p ; simulationData -> mData ->
mIsComputingJacobian = false ; simulationData -> mData -> mIsEvaluatingF0 =
false ; tmp_p = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData
-> mIsSolverRequestingReset = tmp_p ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . npoaqa0aen ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . o3onksh0um ,
NESL_SIM_INITIALIZEONCE , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp_p = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
tmp_p ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus (
rtS , msg ) ; } } tmp = nesl_lease_simulator (
"Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration_4" , 0 , 0 ) ;
rtDW . fhthr4gruq = ( void * ) tmp ; tmp_p = pointer_is_null ( rtDW .
fhthr4gruq ) ; if ( tmp_p ) { Aluminum_Robot_ARM_3cd5c335_4_gateway ( ) ; tmp
= nesl_lease_simulator (
"Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration_4" , 0 , 0 ) ;
rtDW . fhthr4gruq = ( void * ) tmp ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . gwtjdjy24g = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
dt5cmcttgx = ( void * ) diagnosticManager ; modelParameters_j . mSolverType =
NE_SOLVER_TYPE_DAE ; modelParameters_j . mSolverTolerance = 0.001 ;
modelParameters_j . mVariableStepSolver = true ; modelParameters_j .
mFixedStepSize = 0.001 ; modelParameters_j . mStartTime = 0.0 ;
modelParameters_j . mLoadInitialState = false ; modelParameters_j .
mUseSimState = false ; modelParameters_j . mLinTrimCompile = false ;
modelParameters_j . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_j .
mRTWModifiedTimeStamp = 6.72500639E+8 ; tmp_e = 0.001 ; modelParameters_j .
mSolverTolerance = tmp_e ; tmp_e = 0.0 ; modelParameters_j . mFixedStepSize =
tmp_e ; tmp_p = true ; modelParameters_j . mVariableStepSolver = tmp_p ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . dt5cmcttgx ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . fhthr4gruq
, & modelParameters_j , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
expl_temp_i . mRealParameters . mN = 0 ; expl_temp_i . mRealParameters . mX =
NULL ; expl_temp_i . mLogicalParameters . mN = 0 ; expl_temp_i .
mLogicalParameters . mX = NULL ; expl_temp_i . mIntegerParameters . mN = 0 ;
expl_temp_i . mIntegerParameters . mX = NULL ; expl_temp_i . mIndexParameters
. mN = 0 ; expl_temp_i . mIndexParameters . mX = NULL ;
nesl_simulator_set_rtps ( ( NeslSimulator * ) rtDW . fhthr4gruq , expl_temp_i
) ; simulationData = ( NeslSimulationData * ) rtDW . gwtjdjy24g ; time_j =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_j ; simulationData -> mData -> mContStates .
mN = 6 ; simulationData -> mData -> mContStates . mX = & rtX . f5ermfyj2i [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . g3r1cnilme ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
dmcndn514o [ 0 ] ; tmp_p = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
( rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp_p ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS
) ; tmp_p = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U )
; simulationData -> mData -> mIsSolverAssertCheck = tmp_p ; tmp_p =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp_p ; tmp_p = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp_p ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp_p = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp_p ; diagnosticManager = ( NeuDiagnosticManager
* ) rtDW . dt5cmcttgx ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . fhthr4gruq ,
NESL_SIM_INITIALIZEONCE , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp_p = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
tmp_p ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus (
rtS , msg ) ; } } tmp = nesl_lease_simulator (
"Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration_4" , 1 , 0 ) ;
rtDW . klkrr1jmqr = ( void * ) tmp ; tmp_p = pointer_is_null ( rtDW .
klkrr1jmqr ) ; if ( tmp_p ) { Aluminum_Robot_ARM_3cd5c335_4_gateway ( ) ; tmp
= nesl_lease_simulator (
"Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration_4" , 1 , 0 ) ;
rtDW . klkrr1jmqr = ( void * ) tmp ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . p4tamc0yv4 = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
pb3ij5lml1 = ( void * ) diagnosticManager ; modelParameters_f . mSolverType =
NE_SOLVER_TYPE_DAE ; modelParameters_f . mSolverTolerance = 0.001 ;
modelParameters_f . mVariableStepSolver = true ; modelParameters_f .
mFixedStepSize = 0.001 ; modelParameters_f . mStartTime = 0.0 ;
modelParameters_f . mLoadInitialState = false ; modelParameters_f .
mUseSimState = false ; modelParameters_f . mLinTrimCompile = false ;
modelParameters_f . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_f .
mRTWModifiedTimeStamp = 6.72500639E+8 ; tmp_e = 0.001 ; modelParameters_f .
mSolverTolerance = tmp_e ; tmp_e = 0.0 ; modelParameters_f . mFixedStepSize =
tmp_e ; tmp_p = true ; modelParameters_f . mVariableStepSolver = tmp_p ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . pb3ij5lml1 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . klkrr1jmqr
, & modelParameters_f , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . p4tamc0yv4 ; time_f = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_f ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . hwhuf1w0bo ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . ievrpb2b23 ; tmp_p = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp_p ; simulationData ->
mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp_p = (
ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp_p ; tmp_p =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp_p ; simulationData -> mData ->
mIsComputingJacobian = false ; simulationData -> mData -> mIsEvaluatingF0 =
false ; tmp_p = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData
-> mIsSolverRequestingReset = tmp_p ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . pb3ij5lml1 ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . klkrr1jmqr ,
NESL_SIM_INITIALIZEONCE , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp_p = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
tmp_p ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus (
rtS , msg ) ; } } tmp = nesl_lease_simulator (
"Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration_2" , 0 , 0 ) ;
rtDW . mxvpzlsras = ( void * ) tmp ; tmp_p = pointer_is_null ( rtDW .
mxvpzlsras ) ; if ( tmp_p ) { Aluminum_Robot_ARM_3cd5c335_2_gateway ( ) ; tmp
= nesl_lease_simulator (
"Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration_2" , 0 , 0 ) ;
rtDW . mxvpzlsras = ( void * ) tmp ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . gx5a0stbnw = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
h4w0g3bulz = ( void * ) diagnosticManager ; modelParameters_c . mSolverType =
NE_SOLVER_TYPE_DAE ; modelParameters_c . mSolverTolerance = 0.001 ;
modelParameters_c . mVariableStepSolver = true ; modelParameters_c .
mFixedStepSize = 0.001 ; modelParameters_c . mStartTime = 0.0 ;
modelParameters_c . mLoadInitialState = false ; modelParameters_c .
mUseSimState = false ; modelParameters_c . mLinTrimCompile = false ;
modelParameters_c . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_c .
mRTWModifiedTimeStamp = 6.72500639E+8 ; tmp_e = 0.001 ; modelParameters_c .
mSolverTolerance = tmp_e ; tmp_e = 0.0 ; modelParameters_c . mFixedStepSize =
tmp_e ; tmp_p = true ; modelParameters_c . mVariableStepSolver = tmp_p ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . h4w0g3bulz ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . mxvpzlsras
, & modelParameters_c , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
expl_temp_m . mRealParameters . mN = 0 ; expl_temp_m . mRealParameters . mX =
NULL ; expl_temp_m . mLogicalParameters . mN = 0 ; expl_temp_m .
mLogicalParameters . mX = NULL ; expl_temp_m . mIntegerParameters . mN = 0 ;
expl_temp_m . mIntegerParameters . mX = NULL ; expl_temp_m . mIndexParameters
. mN = 0 ; expl_temp_m . mIndexParameters . mX = NULL ;
nesl_simulator_set_rtps ( ( NeslSimulator * ) rtDW . mxvpzlsras , expl_temp_m
) ; simulationData = ( NeslSimulationData * ) rtDW . gx5a0stbnw ; time_c =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_c ; simulationData -> mData -> mContStates .
mN = 6 ; simulationData -> mData -> mContStates . mX = & rtX . atgv4dpb4z [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . l23eqhz4lj ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
e5bbdxb5mf [ 0 ] ; tmp_p = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
( rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp_p ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS
) ; tmp_p = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U )
; simulationData -> mData -> mIsSolverAssertCheck = tmp_p ; tmp_p =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp_p ; tmp_p = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp_p ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp_p = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp_p ; diagnosticManager = ( NeuDiagnosticManager
* ) rtDW . h4w0g3bulz ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . mxvpzlsras ,
NESL_SIM_INITIALIZEONCE , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp_p = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
tmp_p ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus (
rtS , msg ) ; } } tmp = nesl_lease_simulator (
"Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration_2" , 1 , 0 ) ;
rtDW . pogmy1p0md = ( void * ) tmp ; tmp_p = pointer_is_null ( rtDW .
pogmy1p0md ) ; if ( tmp_p ) { Aluminum_Robot_ARM_3cd5c335_2_gateway ( ) ; tmp
= nesl_lease_simulator (
"Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration_2" , 1 , 0 ) ;
rtDW . pogmy1p0md = ( void * ) tmp ; } simulationData =
nesl_create_simulation_data ( ) ; rtDW . isu1bsjo01 = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
p5u2wq1dfl = ( void * ) diagnosticManager ; modelParameters_k . mSolverType =
NE_SOLVER_TYPE_DAE ; modelParameters_k . mSolverTolerance = 0.001 ;
modelParameters_k . mVariableStepSolver = true ; modelParameters_k .
mFixedStepSize = 0.001 ; modelParameters_k . mStartTime = 0.0 ;
modelParameters_k . mLoadInitialState = false ; modelParameters_k .
mUseSimState = false ; modelParameters_k . mLinTrimCompile = false ;
modelParameters_k . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_k .
mRTWModifiedTimeStamp = 6.72500639E+8 ; tmp_e = 0.001 ; modelParameters_k .
mSolverTolerance = tmp_e ; tmp_e = 0.0 ; modelParameters_k . mFixedStepSize =
tmp_e ; tmp_p = true ; modelParameters_k . mVariableStepSolver = tmp_p ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . p5u2wq1dfl ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . pogmy1p0md
, & modelParameters_k , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . isu1bsjo01 ; time_k = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_k ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . dqtlecgkn4 ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . g420u1faqi ; tmp_p = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp_p ; simulationData ->
mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp_p = (
ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp_p ; tmp_p =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp_p ; simulationData -> mData ->
mIsComputingJacobian = false ; simulationData -> mData -> mIsEvaluatingF0 =
false ; tmp_p = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData
-> mIsSolverRequestingReset = tmp_p ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . p5u2wq1dfl ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . pogmy1p0md ,
NESL_SIM_INITIALIZEONCE , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp_p = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
tmp_p ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus (
rtS , msg ) ; } } MdlInitialize ( ) ; } void MdlOutputs ( int_T tid ) {
NeslSimulationData * simulationData ; real_T time ; real_T tmp [ 16 ] ; int_T
tmp_p [ 5 ] ; NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree *
diagnosticTree ; char * msg ; real_T time_p ; real_T tmp_e [ 24 ] ; int_T
tmp_i [ 6 ] ; int32_T k ; boolean_T first_output ; real_T time_e ; real_T
tmp_m [ 16 ] ; int_T tmp_g [ 5 ] ; real_T time_i ; real_T tmp_j [ 27 ] ;
int_T tmp_f [ 6 ] ; real_T time_m ; real_T tmp_c [ 16 ] ; int_T tmp_k [ 5 ] ;
real_T time_g ; real_T tmp_b [ 27 ] ; int_T tmp_n [ 6 ] ; real_T time_j ;
real_T tmp_l [ 16 ] ; int_T tmp_d [ 5 ] ; real_T time_f ; real_T tmp_o [ 27 ]
; int_T tmp_dz [ 6 ] ; real_T time_c ; real_T tmp_fs [ 16 ] ; int_T tmp_ck [
5 ] ; real_T time_k ; real_T tmp_f2 [ 27 ] ; int_T tmp_kt [ 6 ] ; real_T
bl4mvcyapb ; real_T jkyifixgml ; real_T dli11my45q ; real_T dnesqmb45w ;
boolean_T fawzwtvsze ; int8_T a3ctynrrza ; boolean_T nba3414qx5 ; int8_T
n00u2p2du5 ; real_T f1gvlv42ys ; real_T tmp_lt ; real_T u0 ; simulationData =
( NeslSimulationData * ) rtDW . hwxj03owez ; time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 8 ;
simulationData -> mData -> mContStates . mX = & rtX . mqrisyyzvz [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . g42hzkrdme ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
l0fbymf1qf ; first_output = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
( rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
first_output ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; first_output = ( ssGetMdlInfoPtr ( rtS ) ->
mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = first_output ; first_output = ssIsSolverCheckingCIC (
rtS ) ; simulationData -> mData -> mIsSolverCheckingCIC = first_output ;
first_output = ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData
-> mIsComputingJacobian = first_output ; simulationData -> mData ->
mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
first_output = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = first_output ; tmp_p [ 0 ] = 0 ; tmp [ 0 ] = rtB .
i2goomhryg [ 0 ] ; tmp [ 1 ] = rtB . i2goomhryg [ 1 ] ; tmp [ 2 ] = rtB .
i2goomhryg [ 2 ] ; tmp [ 3 ] = rtB . i2goomhryg [ 3 ] ; tmp_p [ 1 ] = 4 ; tmp
[ 4 ] = rtB . j2fnpsqpqo [ 0 ] ; tmp [ 5 ] = rtB . j2fnpsqpqo [ 1 ] ; tmp [ 6
] = rtB . j2fnpsqpqo [ 2 ] ; tmp [ 7 ] = rtB . j2fnpsqpqo [ 3 ] ; tmp_p [ 2 ]
= 8 ; tmp [ 8 ] = rtB . chzxe3k2dn [ 0 ] ; tmp [ 9 ] = rtB . chzxe3k2dn [ 1 ]
; tmp [ 10 ] = rtB . chzxe3k2dn [ 2 ] ; tmp [ 11 ] = rtB . chzxe3k2dn [ 3 ] ;
tmp_p [ 3 ] = 12 ; tmp [ 12 ] = rtB . pnk1tj1sdk [ 0 ] ; tmp [ 13 ] = rtB .
pnk1tj1sdk [ 1 ] ; tmp [ 14 ] = rtB . pnk1tj1sdk [ 2 ] ; tmp [ 15 ] = rtB .
pnk1tj1sdk [ 3 ] ; tmp_p [ 4 ] = 16 ; simulationData -> mData -> mInputValues
. mN = 16 ; simulationData -> mData -> mInputValues . mX = & tmp [ 0 ] ;
simulationData -> mData -> mInputOffsets . mN = 5 ; simulationData -> mData
-> mInputOffsets . mX = & tmp_p [ 0 ] ; simulationData -> mData -> mOutputs .
mN = 8 ; simulationData -> mData -> mOutputs . mX = & rtB . ktd2h4wayi [ 0 ]
; simulationData -> mData -> mSampleHits . mN = 0 ; simulationData -> mData
-> mSampleHits . mX = NULL ; simulationData -> mData ->
mIsFundamentalSampleHit = false ; simulationData -> mData -> mTolerances . mN
= 0 ; simulationData -> mData -> mTolerances . mX = NULL ; simulationData ->
mData -> mCstateHasChanged = false ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . fb2s2iht4c ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; k =
ne_simulator_method ( ( NeslSimulator * ) rtDW . gpclr5jytr ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k != 0 ) {
first_output = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
first_output ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } if ( ssIsMajorTimeStep ( rtS ) &&
simulationData -> mData -> mCstateHasChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } simulationData = (
NeslSimulationData * ) rtDW . hfzjpix1m2 ; time_p = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_p ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . aw3x413kxh ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . hnatrkqrtk ;
first_output = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) ->
foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
first_output ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; first_output = ( ssGetMdlInfoPtr ( rtS ) ->
mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = first_output ; first_output = ssIsSolverCheckingCIC (
rtS ) ; simulationData -> mData -> mIsSolverCheckingCIC = first_output ;
simulationData -> mData -> mIsComputingJacobian = false ; simulationData ->
mData -> mIsEvaluatingF0 = false ; first_output = ssIsSolverRequestingReset (
rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = first_output ;
tmp_i [ 0 ] = 0 ; tmp_e [ 0 ] = rtB . i2goomhryg [ 0 ] ; tmp_e [ 1 ] = rtB .
i2goomhryg [ 1 ] ; tmp_e [ 2 ] = rtB . i2goomhryg [ 2 ] ; tmp_e [ 3 ] = rtB .
i2goomhryg [ 3 ] ; tmp_i [ 1 ] = 4 ; tmp_e [ 4 ] = rtB . j2fnpsqpqo [ 0 ] ;
tmp_e [ 5 ] = rtB . j2fnpsqpqo [ 1 ] ; tmp_e [ 6 ] = rtB . j2fnpsqpqo [ 2 ] ;
tmp_e [ 7 ] = rtB . j2fnpsqpqo [ 3 ] ; tmp_i [ 2 ] = 8 ; tmp_e [ 8 ] = rtB .
chzxe3k2dn [ 0 ] ; tmp_e [ 9 ] = rtB . chzxe3k2dn [ 1 ] ; tmp_e [ 10 ] = rtB
. chzxe3k2dn [ 2 ] ; tmp_e [ 11 ] = rtB . chzxe3k2dn [ 3 ] ; tmp_i [ 3 ] = 12
; tmp_e [ 12 ] = rtB . pnk1tj1sdk [ 0 ] ; tmp_e [ 13 ] = rtB . pnk1tj1sdk [ 1
] ; tmp_e [ 14 ] = rtB . pnk1tj1sdk [ 2 ] ; tmp_e [ 15 ] = rtB . pnk1tj1sdk [
3 ] ; tmp_i [ 4 ] = 16 ; memcpy ( & tmp_e [ 16 ] , & rtB . ktd2h4wayi [ 0 ] ,
sizeof ( real_T ) << 3U ) ; tmp_i [ 5 ] = 24 ; simulationData -> mData ->
mInputValues . mN = 24 ; simulationData -> mData -> mInputValues . mX = &
tmp_e [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 6 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_i [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 8 ; simulationData -> mData ->
mOutputs . mX = & rtB . olyap2fx01 [ 0 ] ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulationData
-> mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances .
mX = NULL ; simulationData -> mData -> mCstateHasChanged = false ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . psm45qaiki ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . a0idm12ybz ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k != 0 ) {
first_output = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
first_output ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } if ( ssIsMajorTimeStep ( rtS ) &&
simulationData -> mData -> mCstateHasChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } if ( ssIsSampleHit (
rtS , 1 , 0 ) ) { { if ( ( rtDW . cizvyg3haq . AQHandles [ 0 ] || rtDW .
cizvyg3haq . SlioLTF ) && ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal (
rtDW . cizvyg3haq . AQHandles [ 0 ] , rtDW . cizvyg3haq . SlioLTF , 0 ,
ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . olyap2fx01 [ 0 ] + 0 ) ;
sdiSlioSdiWriteSignal ( rtDW . cizvyg3haq . AQHandles [ 1 ] , rtDW .
cizvyg3haq . SlioLTF , 1 , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB .
olyap2fx01 [ 2 ] + 0 ) ; sdiSlioSdiWriteSignal ( rtDW . cizvyg3haq .
AQHandles [ 2 ] , rtDW . cizvyg3haq . SlioLTF , 2 , ssGetTaskTime ( rtS , 1 )
, ( char * ) & rtB . olyap2fx01 [ 4 ] + 0 ) ; sdiSlioSdiWriteSignal ( rtDW .
cizvyg3haq . AQHandles [ 3 ] , rtDW . cizvyg3haq . SlioLTF , 3 ,
ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . olyap2fx01 [ 6 ] + 0 ) ; } } }
if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { if ( ssGetTaskTime ( rtS , 3 ) < rtP .
Step_Time ) { u0 = rtP . Step_Y0 ; } else { u0 = rtP . Step_YFinal ; } rtB .
nq5ondror4 = rtP . Gain_Gain * u0 ; } { real_T * pDataValues = ( real_T * )
rtDW . nxn4r2j4ni . DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW .
nxn4r2j4ni . TimePtr ; int_T currTimeIndex = rtDW . fhyyuxa0yu . PrevIndex ;
real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . nxn4r2j4ni . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . fhyyuxa0yu . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T elIdx ; for (
elIdx = 0 ; elIdx < 4 ; ++ elIdx ) { ( & rtB . aw3y3l5gc0 [ 0 ] ) [ elIdx ] =
pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; } } } else { {
int_T elIdx ; for ( elIdx = 0 ; elIdx < 4 ; ++ elIdx ) { ( & rtB . aw3y3l5gc0
[ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex + 1 ] ; pDataValues +=
numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ; real_T f2 =
1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex = currTimeIndex ; { int_T
elIdx ; for ( elIdx = 0 ; elIdx < 4 ; ++ elIdx ) { d1 = pDataValues [
TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( & rtB . aw3y3l5gc0 [ 0 ]
) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2 , f1 , f2 ) ; pDataValues +=
numPoints ; } } } } } if ( rtP . ManualSwitch_1_CurrentSetting == 1 ) { rtB .
i53lpxrgtl = rtB . nq5ondror4 ; } else { rtB . i53lpxrgtl = rtB . aw3y3l5gc0
[ 0 ] ; } rtB . fzkuxy2mpg = rtB . i53lpxrgtl - rtB . olyap2fx01 [ 0 ] ; if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { rtB . ibymeqo4w3 = ( rtP . PIDController_D
* rtB . fzkuxy2mpg - rtDW . aph4a3hagw ) * rtP . PIDController_N ; jkyifixgml
= ( rtP . PIDController_P * rtB . fzkuxy2mpg + rtDW . brd5pvpnwz ) + rtB .
ibymeqo4w3 ; if ( jkyifixgml > rtP . PIDController_UpperSaturationLimit ) {
f1gvlv42ys = rtP . PIDController_UpperSaturationLimit ; } else if (
jkyifixgml < rtP . PIDController_LowerSaturationLimit ) { f1gvlv42ys = rtP .
PIDController_LowerSaturationLimit ; } else { f1gvlv42ys = jkyifixgml ; } u0
= muDoubleScalarAbs ( f1gvlv42ys ) ; if ( u0 > rtP . u5_UpperSat ) { rtB .
drh4o4lsrm = rtP . u5_UpperSat ; } else if ( u0 < rtP . u5_LowerSat ) { rtB .
drh4o4lsrm = rtP . u5_LowerSat ; } else { rtB . drh4o4lsrm = u0 ; } rtB .
fpfaubmnjj = ( real_T ) ( f1gvlv42ys < 0.0 ) * rtP . Gain_Gain_mzek03xops ; }
{ if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( ( rtDW . o4zjtouqv1 . AQHandles
[ 2 ] || rtDW . o4zjtouqv1 . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . o4zjtouqv1 . AQHandles [ 2 ] , rtDW .
o4zjtouqv1 . SlioLTF , 2 , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB .
pie23wd2bf + 0 ) ; } } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if ( ( rtDW .
o4zjtouqv1 . AQHandles [ 0 ] || rtDW . o4zjtouqv1 . SlioLTF ) &&
ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW . o4zjtouqv1 .
AQHandles [ 0 ] , rtDW . o4zjtouqv1 . SlioLTF , 0 , ssGetTaskTime ( rtS , 2 )
, ( char * ) & rtB . drh4o4lsrm + 0 ) ; sdiSlioSdiWriteSignal ( rtDW .
o4zjtouqv1 . AQHandles [ 1 ] , rtDW . o4zjtouqv1 . SlioLTF , 1 ,
ssGetTaskTime ( rtS , 2 ) , ( char * ) & rtB . fpfaubmnjj + 0 ) ; } } } if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { { if ( ( rtDW . kk11noexzo . AQHandles ||
rtDW . kk11noexzo . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . kk11noexzo . AQHandles , rtDW . kk11noexzo .
SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . i53lpxrgtl + 0 )
; } } } if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { if ( ssGetTaskTime ( rtS , 3 )
< rtP . Step1_Time ) { u0 = rtP . Step1_Y0 ; } else { u0 = rtP . Step1_YFinal
; } rtB . mxbqwluued = rtP . Gain1_Gain * u0 ; } if ( rtP .
ManualSwitch_2_CurrentSetting == 1 ) { rtB . a1olpxanio = rtB . mxbqwluued ;
} else { rtB . a1olpxanio = rtB . aw3y3l5gc0 [ 1 ] ; } if ( ssIsSampleHit (
rtS , 1 , 0 ) ) { { if ( ( rtDW . otmjf3k0yc . AQHandles || rtDW . otmjf3k0yc
. SlioLTF ) && ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW .
otmjf3k0yc . AQHandles , rtDW . otmjf3k0yc . SlioLTF , 0 , ssGetTaskTime (
rtS , 1 ) , ( char * ) & rtB . a1olpxanio + 0 ) ; } } } if ( ssIsSampleHit (
rtS , 3 , 0 ) ) { if ( ssGetTaskTime ( rtS , 3 ) < rtP . Step2_Time ) { u0 =
rtP . Step2_Y0 ; } else { u0 = rtP . Step2_YFinal ; } rtB . kia1ippuen = rtP
. Gain2_Gain * u0 ; } if ( rtP . ManualSwitch_3_CurrentSetting == 1 ) { rtB .
jyxpzlsxjp = rtB . kia1ippuen ; } else { rtB . jyxpzlsxjp = rtB . aw3y3l5gc0
[ 2 ] ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { { if ( ( rtDW . kpxx2wlm0j .
AQHandles || rtDW . kpxx2wlm0j . SlioLTF ) && ssGetLogOutput ( rtS ) ) {
sdiSlioSdiWriteSignal ( rtDW . kpxx2wlm0j . AQHandles , rtDW . kpxx2wlm0j .
SlioLTF , 0 , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . jyxpzlsxjp + 0 )
; } } } if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { if ( ssGetTaskTime ( rtS , 3 )
< rtP . Step3_Time ) { u0 = rtP . Step3_Y0 ; } else { u0 = rtP . Step3_YFinal
; } rtB . giapxchzsc = rtP . Gain3_Gain * u0 ; } if ( rtP .
ManualSwitch_4_CurrentSetting == 1 ) { rtB . jwbkjot453 = rtB . giapxchzsc ;
} else { rtB . jwbkjot453 = rtB . aw3y3l5gc0 [ 3 ] ; } if ( ssIsSampleHit (
rtS , 1 , 0 ) ) { { if ( ( rtDW . hhil12yx2a . AQHandles || rtDW . hhil12yx2a
. SlioLTF ) && ssGetLogOutput ( rtS ) ) { sdiSlioSdiWriteSignal ( rtDW .
hhil12yx2a . AQHandles , rtDW . hhil12yx2a . SlioLTF , 0 , ssGetTaskTime (
rtS , 1 ) , ( char * ) & rtB . jwbkjot453 + 0 ) ; } } } rtB . iky3yyt4pc =
rtP . Gain_Gain_eco1mxudja * rtB . i53lpxrgtl ; rtB . bprngneuci = rtP .
Gain2_Gain_fdcexdgxvr * rtB . fzkuxy2mpg ; rtB . jws0qcirwo = rtP .
Gain1_Gain_j1nnjap4ro * rtB . olyap2fx01 [ 0 ] ; rtB . j5lrlirlvy = rtP .
Gain3_Gain_egywykobhy * rtB . a1olpxanio ; rtB . hwz513wtcp = rtB .
olyap2fx01 [ 2 ] - rtP . IC_Value ; if ( ssIsSampleHit ( rtS , 3 , 0 ) ) {
rtDW . irz3pmh2ot = ( rtB . hwz513wtcp - rtP . dFilt [ 1 ] * rtDW .
nmj1xcahr1 ) / rtP . dFilt [ 0 ] ; rtB . jwmopbhf1l = rtP . nFilt [ 0 ] *
rtDW . irz3pmh2ot + rtP . nFilt [ 1 ] * rtDW . nmj1xcahr1 ; } rtB .
ny2yf13znw = rtB . a1olpxanio - rtB . jwmopbhf1l ; rtB . ilkoc43ltu = rtP .
Gain4_Gain * rtB . ny2yf13znw ; if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtB .
exgpu4mzzl = ( rtP . PIDController1_D * rtB . ny2yf13znw - rtDW . pfrj0uy4xn
) * rtP . PIDController1_N ; bl4mvcyapb = ( rtP . PIDController1_P * rtB .
ny2yf13znw + rtDW . k2qwlebtbj ) + rtB . exgpu4mzzl ; if ( bl4mvcyapb > rtP .
PIDController1_UpperSaturationLimit ) { dnesqmb45w = rtP .
PIDController1_UpperSaturationLimit ; } else if ( bl4mvcyapb < rtP .
PIDController1_LowerSaturationLimit ) { dnesqmb45w = rtP .
PIDController1_LowerSaturationLimit ; } else { dnesqmb45w = bl4mvcyapb ; } u0
= muDoubleScalarAbs ( dnesqmb45w ) ; if ( u0 > rtP . u5_UpperSat_hsorbciehn )
{ rtB . hvq1hssahi = rtP . u5_UpperSat_hsorbciehn ; } else if ( u0 < rtP .
u5_LowerSat_odxlmaevjb ) { rtB . hvq1hssahi = rtP . u5_LowerSat_odxlmaevjb ;
} else { rtB . hvq1hssahi = u0 ; } } if ( ssIsSampleHit ( rtS , 3 , 0 ) ) {
rtB . cuzdkp3u4j = rtP . Gain6_Gain * rtB . jwmopbhf1l ; } rtB . oerp2b0et4 =
rtP . Gain7_Gain * rtB . jyxpzlsxjp ; if ( ssIsSampleHit ( rtS , 3 , 0 ) ) {
f1gvlv42ys = rtB . olyap2fx01 [ 4 ] ; f1gvlv42ys -= rtP . dFilt [ 1 ] * rtDW
. faouxk0mcc ; rtDW . f2nbr3luvy = f1gvlv42ys / rtP . dFilt [ 0 ] ; rtB .
d2pifgecao = rtP . nFilt [ 0 ] * rtDW . f2nbr3luvy + rtP . nFilt [ 1 ] * rtDW
. faouxk0mcc ; } rtB . hvt3a3pw0z = rtB . jyxpzlsxjp - rtB . d2pifgecao ; rtB
. jw2daefpkv = rtP . Gain8_Gain * rtB . hvt3a3pw0z ; rtB . o5l0llujzt = rtP .
PIDController2_P * rtB . hvt3a3pw0z ; rtB . hjbicvqaq4 = rtX . ho32jzvqwd ;
rtB . ehzqu1jmju = rtP . PIDController2_D * rtB . hvt3a3pw0z ; rtB .
mfkgxksgwr = rtX . cnzrnlw10x ; rtB . fcpppxuvag = rtB . ehzqu1jmju - rtB .
mfkgxksgwr ; rtB . p3ywisr0dv = rtP . PIDController2_N * rtB . fcpppxuvag ;
rtB . gpl4kzhqur = ( rtB . o5l0llujzt + rtB . hjbicvqaq4 ) + rtB . p3ywisr0dv
; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . jeyjmatrkm = rtB . gpl4kzhqur >=
rtP . PIDController2_UpperSaturationLimit ? 1 : rtB . gpl4kzhqur > rtP .
PIDController2_LowerSaturationLimit ? 0 : - 1 ; } rtB . gco3jzxyom = rtDW .
jeyjmatrkm == 1 ? rtP . PIDController2_UpperSaturationLimit : rtDW .
jeyjmatrkm == - 1 ? rtP . PIDController2_LowerSaturationLimit : rtB .
gpl4kzhqur ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . kevcm4tkte = ( rtB .
gco3jzxyom >= 0.0 ) ; } rtB . etnxfpjznh = rtDW . kevcm4tkte > 0 ? rtB .
gco3jzxyom : - rtB . gco3jzxyom ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW .
p2vhcjso24 = rtB . etnxfpjznh >= rtP . u255_UpperSat ? 1 : rtB . etnxfpjznh >
rtP . u255_LowerSat ? 0 : - 1 ; } rtB . c52coq543c = rtDW . p2vhcjso24 == 1 ?
rtP . u255_UpperSat : rtDW . p2vhcjso24 == - 1 ? rtP . u255_LowerSat : rtB .
etnxfpjznh ; if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { rtB . j0yyb35mlc = rtP .
Gain10_Gain * rtB . d2pifgecao ; } rtB . ficpm2krqt = rtP . Gain9_Gain * rtB
. jwbkjot453 ; if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { f1gvlv42ys = rtB .
olyap2fx01 [ 6 ] ; f1gvlv42ys -= rtP . dFilt [ 1 ] * rtDW . j5idu3rbuu ; rtDW
. mpmqkaspx1 = f1gvlv42ys / rtP . dFilt [ 0 ] ; rtB . ipyiynxjfh = rtP .
nFilt [ 0 ] * rtDW . mpmqkaspx1 + rtP . nFilt [ 1 ] * rtDW . j5idu3rbuu ; }
rtB . ktl1ztab5m = rtB . jwbkjot453 - rtB . ipyiynxjfh ; rtB . kddarmbprq =
rtP . Gain11_Gain * rtB . ktl1ztab5m ; rtB . e1djqxoyiu = rtP .
PIDController3_P * rtB . ktl1ztab5m ; rtB . fpmzk1nlis = rtX . cf4eknbnqt ;
rtB . btv3yvuomn = rtP . PIDController3_D * rtB . ktl1ztab5m ; rtB .
eeen4ada3p = rtX . fabp12nunk ; rtB . br5skhqgef = rtB . btv3yvuomn - rtB .
eeen4ada3p ; rtB . inuxleclis = rtP . PIDController3_N * rtB . br5skhqgef ;
rtB . krtbfhbtm0 = ( rtB . e1djqxoyiu + rtB . fpmzk1nlis ) + rtB . inuxleclis
; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . bejosmavsz = rtB . krtbfhbtm0 >=
rtP . PIDController3_UpperSaturationLimit ? 1 : rtB . krtbfhbtm0 > rtP .
PIDController3_LowerSaturationLimit ? 0 : - 1 ; } rtB . j0gqbgko2i = rtDW .
bejosmavsz == 1 ? rtP . PIDController3_UpperSaturationLimit : rtDW .
bejosmavsz == - 1 ? rtP . PIDController3_LowerSaturationLimit : rtB .
krtbfhbtm0 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . ddvttsm35w = ( rtB .
j0gqbgko2i >= 0.0 ) ; } rtB . oknip1aipe = rtDW . ddvttsm35w > 0 ? rtB .
j0gqbgko2i : - rtB . j0gqbgko2i ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW .
ozk21ex1fn = rtB . oknip1aipe >= rtP . u255_UpperSat_cy5lmsdzoz ? 1 : rtB .
oknip1aipe > rtP . u255_LowerSat_asbda50lue ? 0 : - 1 ; } rtB . kivpoxi4vr =
rtDW . ozk21ex1fn == 1 ? rtP . u255_UpperSat_cy5lmsdzoz : rtDW . ozk21ex1fn
== - 1 ? rtP . u255_LowerSat_asbda50lue : rtB . oknip1aipe ; if (
ssIsSampleHit ( rtS , 3 , 0 ) ) { rtB . f0l35tzqgs = rtP . Gain5_Gain * rtB .
ipyiynxjfh ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if ( jkyifixgml > rtP .
PIDController_UpperSaturationLimit ) { f1gvlv42ys = jkyifixgml - rtP .
PIDController_UpperSaturationLimit ; } else if ( jkyifixgml >= rtP .
PIDController_LowerSaturationLimit ) { f1gvlv42ys = 0.0 ; } else { f1gvlv42ys
= jkyifixgml - rtP . PIDController_LowerSaturationLimit ; } dli11my45q = rtP
. PIDController_I * rtB . fzkuxy2mpg ; u0 = muDoubleScalarSign ( f1gvlv42ys )
; if ( muDoubleScalarIsNaN ( u0 ) ) { u0 = 0.0 ; } else { u0 =
muDoubleScalarRem ( u0 , 256.0 ) ; } tmp_lt = muDoubleScalarSign ( dli11my45q
) ; if ( muDoubleScalarIsNaN ( tmp_lt ) ) { tmp_lt = 0.0 ; } else { tmp_lt =
muDoubleScalarRem ( tmp_lt , 256.0 ) ; } if ( ( rtP . ZeroGain_Gain *
jkyifixgml != f1gvlv42ys ) && ( ( u0 < 0.0 ? ( int32_T ) ( int8_T ) - (
int8_T ) ( uint8_T ) - u0 : ( int32_T ) ( int8_T ) ( uint8_T ) u0 ) == (
tmp_lt < 0.0 ? ( int32_T ) ( int8_T ) - ( int8_T ) ( uint8_T ) - tmp_lt : (
int32_T ) ( int8_T ) ( uint8_T ) tmp_lt ) ) ) { rtB . ciyx4ip0mc = rtP .
Constant1_Value ; } else { rtB . ciyx4ip0mc = dli11my45q ; } if ( bl4mvcyapb
> rtP . PIDController1_UpperSaturationLimit ) { jkyifixgml = bl4mvcyapb - rtP
. PIDController1_UpperSaturationLimit ; } else if ( bl4mvcyapb >= rtP .
PIDController1_LowerSaturationLimit ) { jkyifixgml = 0.0 ; } else {
jkyifixgml = bl4mvcyapb - rtP . PIDController1_LowerSaturationLimit ; }
f1gvlv42ys = rtP . PIDController1_I * rtB . ny2yf13znw ; u0 =
muDoubleScalarSign ( jkyifixgml ) ; if ( muDoubleScalarIsNaN ( u0 ) ) { u0 =
0.0 ; } else { u0 = muDoubleScalarRem ( u0 , 256.0 ) ; } tmp_lt =
muDoubleScalarSign ( f1gvlv42ys ) ; if ( muDoubleScalarIsNaN ( tmp_lt ) ) {
tmp_lt = 0.0 ; } else { tmp_lt = muDoubleScalarRem ( tmp_lt , 256.0 ) ; } if
( ( rtP . ZeroGain_Gain_chz5ufcktq * bl4mvcyapb != jkyifixgml ) && ( ( u0 <
0.0 ? ( int32_T ) ( int8_T ) - ( int8_T ) ( uint8_T ) - u0 : ( int32_T ) (
int8_T ) ( uint8_T ) u0 ) == ( tmp_lt < 0.0 ? ( int32_T ) ( int8_T ) - (
int8_T ) ( uint8_T ) - tmp_lt : ( int32_T ) ( int8_T ) ( uint8_T ) tmp_lt ) )
) { rtB . jexlycubeg = rtP . Constant1_Value_ploncjubhz ; } else { rtB .
jexlycubeg = f1gvlv42ys ; } } rtB . a0sz2tfduf = rtP .
ZeroGain_Gain_emqj4r052y * rtB . gpl4kzhqur ; if ( ssIsMajorTimeStep ( rtS )
) { if ( rtB . gpl4kzhqur > rtP . PIDController2_UpperSaturationLimit ) {
rtDW . m22bguur0b = 1 ; } else if ( rtB . gpl4kzhqur >= rtP .
PIDController2_LowerSaturationLimit ) { rtDW . m22bguur0b = 0 ; } else { rtDW
. m22bguur0b = - 1 ; } } if ( rtDW . m22bguur0b == 1 ) { rtB . mt5eefv21t =
rtB . gpl4kzhqur - rtP . PIDController2_UpperSaturationLimit ; } else if (
rtDW . m22bguur0b == - 1 ) { rtB . mt5eefv21t = rtB . gpl4kzhqur - rtP .
PIDController2_LowerSaturationLimit ; } else { rtB . mt5eefv21t = 0.0 ; } rtB
. fmmqt4ysyf = rtP . PIDController2_I * rtB . hvt3a3pw0z ; if ( ssIsSampleHit
( rtS , 1 , 0 ) ) { if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . joeszm1q20 = (
rtB . a0sz2tfduf != rtB . mt5eefv21t ) ; } nba3414qx5 = rtDW . joeszm1q20 ;
if ( rtB . mt5eefv21t > 0.0 ) { rtDW . ajjzhp3ldi = 1 ; } else if ( rtB .
mt5eefv21t < 0.0 ) { rtDW . ajjzhp3ldi = - 1 ; } else { rtDW . ajjzhp3ldi = 0
; } n00u2p2du5 = ( int8_T ) rtDW . ajjzhp3ldi ; if ( rtB . fmmqt4ysyf > 0.0 )
{ rtDW . o51g2ohecp = 1 ; } else if ( rtB . fmmqt4ysyf < 0.0 ) { rtDW .
o51g2ohecp = - 1 ; } else { rtDW . o51g2ohecp = 0 ; } rtB . elkmica4fl = (
nba3414qx5 && ( n00u2p2du5 == ( int8_T ) rtDW . o51g2ohecp ) ) ; rtB .
jkg3quvkxc = rtDW . kmlkzpy3eu ; } if ( rtB . jkg3quvkxc ) { rtB . librkmwt3k
= rtP . Constant1_Value_hvrq5qxppi ; } else { rtB . librkmwt3k = rtB .
fmmqt4ysyf ; } rtB . d30bf04ldl = rtP . ZeroGain_Gain_jxlmlnbspu * rtB .
krtbfhbtm0 ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( rtB . krtbfhbtm0 > rtP .
PIDController3_UpperSaturationLimit ) { rtDW . eckwmjhlyk = 1 ; } else if (
rtB . krtbfhbtm0 >= rtP . PIDController3_LowerSaturationLimit ) { rtDW .
eckwmjhlyk = 0 ; } else { rtDW . eckwmjhlyk = - 1 ; } } if ( rtDW .
eckwmjhlyk == 1 ) { rtB . hjectoyfy3 = rtB . krtbfhbtm0 - rtP .
PIDController3_UpperSaturationLimit ; } else if ( rtDW . eckwmjhlyk == - 1 )
{ rtB . hjectoyfy3 = rtB . krtbfhbtm0 - rtP .
PIDController3_LowerSaturationLimit ; } else { rtB . hjectoyfy3 = 0.0 ; } rtB
. bvdhbj54q0 = rtP . PIDController3_I * rtB . ktl1ztab5m ; if ( ssIsSampleHit
( rtS , 1 , 0 ) ) { if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . pden1paxeu = (
rtB . d30bf04ldl != rtB . hjectoyfy3 ) ; } fawzwtvsze = rtDW . pden1paxeu ;
if ( rtB . hjectoyfy3 > 0.0 ) { rtDW . lboglrrbuz = 1 ; } else if ( rtB .
hjectoyfy3 < 0.0 ) { rtDW . lboglrrbuz = - 1 ; } else { rtDW . lboglrrbuz = 0
; } a3ctynrrza = ( int8_T ) rtDW . lboglrrbuz ; if ( rtB . bvdhbj54q0 > 0.0 )
{ rtDW . mq5tzhz5sr = 1 ; } else if ( rtB . bvdhbj54q0 < 0.0 ) { rtDW .
mq5tzhz5sr = - 1 ; } else { rtDW . mq5tzhz5sr = 0 ; } rtB . avhyg1sjte = (
fawzwtvsze && ( a3ctynrrza == ( int8_T ) rtDW . mq5tzhz5sr ) ) ; rtB .
czs44yka0h = rtDW . ksnx1fvtcv ; } if ( rtB . czs44yka0h ) { rtB . l3unbkufet
= rtP . Constant1_Value_g4hj2bwvcs ; } else { rtB . l3unbkufet = rtB .
bvdhbj54q0 ; } rtB . ierntvt5nm = ( real_T ) ( rtB . gco3jzxyom < 0.0 ) * rtP
. Gain_Gain_iboc4vsafp ; if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtB .
f5abzmvimg = ( real_T ) ( dnesqmb45w < 0.0 ) * rtP . Gain_Gain_irbaz43gud ; }
rtB . dqzjzzlnzt = ( real_T ) ( rtB . j0gqbgko2i < 0.0 ) * rtP .
Gain_Gain_g0cjd2kme4 ; first_output = false ; if ( rtDW . jtqxtmo1oi == 0.0 )
{ rtDW . jtqxtmo1oi = 1.0 ; first_output = true ; } if ( first_output ) { rtX
. ijlqzu10zq = rtB . olyap2fx01 [ 1 ] ; } rtB . mjvmdy05hg [ 0 ] = rtX .
ijlqzu10zq ; rtB . mjvmdy05hg [ 1 ] = ( rtB . olyap2fx01 [ 1 ] - rtX .
ijlqzu10zq ) * 1000.0 ; rtB . mjvmdy05hg [ 2 ] = 0.0 ; rtB . mjvmdy05hg [ 3 ]
= 0.0 ; rtB . l0ydipaxdm [ 0 ] = rtB . drh4o4lsrm ; rtB . l0ydipaxdm [ 1 ] =
0.0 ; rtB . l0ydipaxdm [ 2 ] = 0.0 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW
. g5fnflwjfz [ 0 ] = ! ( rtB . l0ydipaxdm [ 0 ] == rtDW . g5fnflwjfz [ 1 ] )
; rtDW . g5fnflwjfz [ 1 ] = rtB . l0ydipaxdm [ 0 ] ; } rtB . l0ydipaxdm [ 0 ]
= rtDW . g5fnflwjfz [ 1 ] ; rtB . l0ydipaxdm [ 3 ] = rtDW . g5fnflwjfz [ 0 ]
; rtB . kfmkfo20tj [ 0 ] = rtB . pie23wd2bf ; rtB . kfmkfo20tj [ 1 ] = 0.0 ;
rtB . kfmkfo20tj [ 2 ] = 0.0 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW .
lzyoonlrrq [ 0 ] = ! ( rtB . kfmkfo20tj [ 0 ] == rtDW . lzyoonlrrq [ 1 ] ) ;
rtDW . lzyoonlrrq [ 1 ] = rtB . kfmkfo20tj [ 0 ] ; } rtB . kfmkfo20tj [ 0 ] =
rtDW . lzyoonlrrq [ 1 ] ; rtB . kfmkfo20tj [ 3 ] = rtDW . lzyoonlrrq [ 0 ] ;
rtB . dp5tl3nrhd [ 0 ] = rtB . fpfaubmnjj ; rtB . dp5tl3nrhd [ 1 ] = 0.0 ;
rtB . dp5tl3nrhd [ 2 ] = 0.0 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW .
fahg2tibp4 [ 0 ] = ! ( rtB . dp5tl3nrhd [ 0 ] == rtDW . fahg2tibp4 [ 1 ] ) ;
rtDW . fahg2tibp4 [ 1 ] = rtB . dp5tl3nrhd [ 0 ] ; } rtB . dp5tl3nrhd [ 0 ] =
rtDW . fahg2tibp4 [ 1 ] ; rtB . dp5tl3nrhd [ 3 ] = rtDW . fahg2tibp4 [ 0 ] ;
simulationData = ( NeslSimulationData * ) rtDW . ox0bnvu31g ; time_e = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_e ; simulationData -> mData -> mContStates . mN = 6 ;
simulationData -> mData -> mContStates . mX = & rtX . fwzhxfm2hy [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . cxsjqpuo4e ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
gbzd5pugdl [ 0 ] ; first_output = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = first_output ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; first_output = (
ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = first_output ; first_output
= ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = first_output ; first_output =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = first_output ; simulationData -> mData ->
mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
first_output = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = first_output ; tmp_g [ 0 ] = 0 ; tmp_m [ 0 ] = rtB
. mjvmdy05hg [ 0 ] ; tmp_m [ 1 ] = rtB . mjvmdy05hg [ 1 ] ; tmp_m [ 2 ] = rtB
. mjvmdy05hg [ 2 ] ; tmp_m [ 3 ] = rtB . mjvmdy05hg [ 3 ] ; tmp_g [ 1 ] = 4 ;
tmp_m [ 4 ] = rtB . l0ydipaxdm [ 0 ] ; tmp_m [ 5 ] = rtB . l0ydipaxdm [ 1 ] ;
tmp_m [ 6 ] = rtB . l0ydipaxdm [ 2 ] ; tmp_m [ 7 ] = rtB . l0ydipaxdm [ 3 ] ;
tmp_g [ 2 ] = 8 ; tmp_m [ 8 ] = rtB . kfmkfo20tj [ 0 ] ; tmp_m [ 9 ] = rtB .
kfmkfo20tj [ 1 ] ; tmp_m [ 10 ] = rtB . kfmkfo20tj [ 2 ] ; tmp_m [ 11 ] = rtB
. kfmkfo20tj [ 3 ] ; tmp_g [ 3 ] = 12 ; tmp_m [ 12 ] = rtB . dp5tl3nrhd [ 0 ]
; tmp_m [ 13 ] = rtB . dp5tl3nrhd [ 1 ] ; tmp_m [ 14 ] = rtB . dp5tl3nrhd [ 2
] ; tmp_m [ 15 ] = rtB . dp5tl3nrhd [ 3 ] ; tmp_g [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_m [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_g [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 11 ; simulationData -> mData ->
mOutputs . mX = & rtB . cx5y3yvdok [ 0 ] ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulationData
-> mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances .
mX = NULL ; simulationData -> mData -> mCstateHasChanged = false ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . dhy2lo1oyd ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . a3jz1vhf4h ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k != 0 ) {
first_output = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
first_output ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } if ( ssIsMajorTimeStep ( rtS ) &&
simulationData -> mData -> mCstateHasChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } simulationData = (
NeslSimulationData * ) rtDW . am2r0bghwi ; time_i = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_i ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . jy0kf1gtnz ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . itey1ecn4p ;
first_output = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) ->
foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
first_output ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; first_output = ( ssGetMdlInfoPtr ( rtS ) ->
mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = first_output ; first_output = ssIsSolverCheckingCIC (
rtS ) ; simulationData -> mData -> mIsSolverCheckingCIC = first_output ;
simulationData -> mData -> mIsComputingJacobian = false ; simulationData ->
mData -> mIsEvaluatingF0 = false ; first_output = ssIsSolverRequestingReset (
rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = first_output ;
tmp_f [ 0 ] = 0 ; tmp_j [ 0 ] = rtB . mjvmdy05hg [ 0 ] ; tmp_j [ 1 ] = rtB .
mjvmdy05hg [ 1 ] ; tmp_j [ 2 ] = rtB . mjvmdy05hg [ 2 ] ; tmp_j [ 3 ] = rtB .
mjvmdy05hg [ 3 ] ; tmp_f [ 1 ] = 4 ; tmp_j [ 4 ] = rtB . l0ydipaxdm [ 0 ] ;
tmp_j [ 5 ] = rtB . l0ydipaxdm [ 1 ] ; tmp_j [ 6 ] = rtB . l0ydipaxdm [ 2 ] ;
tmp_j [ 7 ] = rtB . l0ydipaxdm [ 3 ] ; tmp_f [ 2 ] = 8 ; tmp_j [ 8 ] = rtB .
kfmkfo20tj [ 0 ] ; tmp_j [ 9 ] = rtB . kfmkfo20tj [ 1 ] ; tmp_j [ 10 ] = rtB
. kfmkfo20tj [ 2 ] ; tmp_j [ 11 ] = rtB . kfmkfo20tj [ 3 ] ; tmp_f [ 3 ] = 12
; tmp_j [ 12 ] = rtB . dp5tl3nrhd [ 0 ] ; tmp_j [ 13 ] = rtB . dp5tl3nrhd [ 1
] ; tmp_j [ 14 ] = rtB . dp5tl3nrhd [ 2 ] ; tmp_j [ 15 ] = rtB . dp5tl3nrhd [
3 ] ; tmp_f [ 4 ] = 16 ; memcpy ( & tmp_j [ 16 ] , & rtB . cx5y3yvdok [ 0 ] ,
11U * sizeof ( real_T ) ) ; tmp_f [ 5 ] = 27 ; simulationData -> mData ->
mInputValues . mN = 27 ; simulationData -> mData -> mInputValues . mX = &
tmp_j [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 6 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_f [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 2 ; simulationData -> mData ->
mOutputs . mX = & rtB . p2elnfut2o [ 0 ] ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulationData
-> mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances .
mX = NULL ; simulationData -> mData -> mCstateHasChanged = false ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . eyjwwignxd ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . i2rvvnjeqf ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k != 0 ) {
first_output = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
first_output ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } if ( ssIsMajorTimeStep ( rtS ) &&
simulationData -> mData -> mCstateHasChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } first_output = false ;
if ( rtDW . jaoyvsgqpt == 0.0 ) { rtDW . jaoyvsgqpt = 1.0 ; first_output =
true ; } if ( first_output ) { rtX . c3cmrhd2ez = rtB . olyap2fx01 [ 3 ] ; }
rtB . e1jqwcx00o [ 0 ] = rtX . c3cmrhd2ez ; rtB . e1jqwcx00o [ 1 ] = ( rtB .
olyap2fx01 [ 3 ] - rtX . c3cmrhd2ez ) * 1000.0 ; rtB . e1jqwcx00o [ 2 ] = 0.0
; rtB . e1jqwcx00o [ 3 ] = 0.0 ; rtB . plozcdvjyj [ 0 ] = rtB . hvq1hssahi ;
rtB . plozcdvjyj [ 1 ] = 0.0 ; rtB . plozcdvjyj [ 2 ] = 0.0 ; if (
ssIsMajorTimeStep ( rtS ) ) { rtDW . fo4d3b1zug [ 0 ] = ! ( rtB . plozcdvjyj
[ 0 ] == rtDW . fo4d3b1zug [ 1 ] ) ; rtDW . fo4d3b1zug [ 1 ] = rtB .
plozcdvjyj [ 0 ] ; } rtB . plozcdvjyj [ 0 ] = rtDW . fo4d3b1zug [ 1 ] ; rtB .
plozcdvjyj [ 3 ] = rtDW . fo4d3b1zug [ 0 ] ; rtB . mm054drprn [ 0 ] = rtB .
lhs5btp42r ; rtB . mm054drprn [ 1 ] = 0.0 ; rtB . mm054drprn [ 2 ] = 0.0 ; if
( ssIsMajorTimeStep ( rtS ) ) { rtDW . oa43d4a4ep [ 0 ] = ! ( rtB .
mm054drprn [ 0 ] == rtDW . oa43d4a4ep [ 1 ] ) ; rtDW . oa43d4a4ep [ 1 ] = rtB
. mm054drprn [ 0 ] ; } rtB . mm054drprn [ 0 ] = rtDW . oa43d4a4ep [ 1 ] ; rtB
. mm054drprn [ 3 ] = rtDW . oa43d4a4ep [ 0 ] ; rtB . ech2ew1rr2 [ 0 ] = rtB .
f5abzmvimg ; rtB . ech2ew1rr2 [ 1 ] = 0.0 ; rtB . ech2ew1rr2 [ 2 ] = 0.0 ; if
( ssIsMajorTimeStep ( rtS ) ) { rtDW . jubld2f0oy [ 0 ] = ! ( rtB .
ech2ew1rr2 [ 0 ] == rtDW . jubld2f0oy [ 1 ] ) ; rtDW . jubld2f0oy [ 1 ] = rtB
. ech2ew1rr2 [ 0 ] ; } rtB . ech2ew1rr2 [ 0 ] = rtDW . jubld2f0oy [ 1 ] ; rtB
. ech2ew1rr2 [ 3 ] = rtDW . jubld2f0oy [ 0 ] ; simulationData = (
NeslSimulationData * ) rtDW . bj3ze5yj42 ; time_m = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_m ; simulationData -> mData -> mContStates . mN = 6 ;
simulationData -> mData -> mContStates . mX = & rtX . feytd2zvev [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . l1mlsom4no ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
hsxy3n0vne [ 0 ] ; first_output = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = first_output ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; first_output = (
ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = first_output ; first_output
= ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = first_output ; first_output =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = first_output ; simulationData -> mData ->
mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
first_output = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = first_output ; tmp_k [ 0 ] = 0 ; tmp_c [ 0 ] = rtB
. e1jqwcx00o [ 0 ] ; tmp_c [ 1 ] = rtB . e1jqwcx00o [ 1 ] ; tmp_c [ 2 ] = rtB
. e1jqwcx00o [ 2 ] ; tmp_c [ 3 ] = rtB . e1jqwcx00o [ 3 ] ; tmp_k [ 1 ] = 4 ;
tmp_c [ 4 ] = rtB . plozcdvjyj [ 0 ] ; tmp_c [ 5 ] = rtB . plozcdvjyj [ 1 ] ;
tmp_c [ 6 ] = rtB . plozcdvjyj [ 2 ] ; tmp_c [ 7 ] = rtB . plozcdvjyj [ 3 ] ;
tmp_k [ 2 ] = 8 ; tmp_c [ 8 ] = rtB . mm054drprn [ 0 ] ; tmp_c [ 9 ] = rtB .
mm054drprn [ 1 ] ; tmp_c [ 10 ] = rtB . mm054drprn [ 2 ] ; tmp_c [ 11 ] = rtB
. mm054drprn [ 3 ] ; tmp_k [ 3 ] = 12 ; tmp_c [ 12 ] = rtB . ech2ew1rr2 [ 0 ]
; tmp_c [ 13 ] = rtB . ech2ew1rr2 [ 1 ] ; tmp_c [ 14 ] = rtB . ech2ew1rr2 [ 2
] ; tmp_c [ 15 ] = rtB . ech2ew1rr2 [ 3 ] ; tmp_k [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_c [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_k [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 11 ; simulationData -> mData ->
mOutputs . mX = & rtB . eirl2ntjhd [ 0 ] ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulationData
-> mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances .
mX = NULL ; simulationData -> mData -> mCstateHasChanged = false ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . lieaetbmrt ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . la3jhngrnl ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k != 0 ) {
first_output = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
first_output ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } if ( ssIsMajorTimeStep ( rtS ) &&
simulationData -> mData -> mCstateHasChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } simulationData = (
NeslSimulationData * ) rtDW . j23zdmwkkl ; time_g = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_g ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . hkg4huthek ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . ffx44a5ccg ;
first_output = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) ->
foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
first_output ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; first_output = ( ssGetMdlInfoPtr ( rtS ) ->
mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = first_output ; first_output = ssIsSolverCheckingCIC (
rtS ) ; simulationData -> mData -> mIsSolverCheckingCIC = first_output ;
simulationData -> mData -> mIsComputingJacobian = false ; simulationData ->
mData -> mIsEvaluatingF0 = false ; first_output = ssIsSolverRequestingReset (
rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = first_output ;
tmp_n [ 0 ] = 0 ; tmp_b [ 0 ] = rtB . e1jqwcx00o [ 0 ] ; tmp_b [ 1 ] = rtB .
e1jqwcx00o [ 1 ] ; tmp_b [ 2 ] = rtB . e1jqwcx00o [ 2 ] ; tmp_b [ 3 ] = rtB .
e1jqwcx00o [ 3 ] ; tmp_n [ 1 ] = 4 ; tmp_b [ 4 ] = rtB . plozcdvjyj [ 0 ] ;
tmp_b [ 5 ] = rtB . plozcdvjyj [ 1 ] ; tmp_b [ 6 ] = rtB . plozcdvjyj [ 2 ] ;
tmp_b [ 7 ] = rtB . plozcdvjyj [ 3 ] ; tmp_n [ 2 ] = 8 ; tmp_b [ 8 ] = rtB .
mm054drprn [ 0 ] ; tmp_b [ 9 ] = rtB . mm054drprn [ 1 ] ; tmp_b [ 10 ] = rtB
. mm054drprn [ 2 ] ; tmp_b [ 11 ] = rtB . mm054drprn [ 3 ] ; tmp_n [ 3 ] = 12
; tmp_b [ 12 ] = rtB . ech2ew1rr2 [ 0 ] ; tmp_b [ 13 ] = rtB . ech2ew1rr2 [ 1
] ; tmp_b [ 14 ] = rtB . ech2ew1rr2 [ 2 ] ; tmp_b [ 15 ] = rtB . ech2ew1rr2 [
3 ] ; tmp_n [ 4 ] = 16 ; memcpy ( & tmp_b [ 16 ] , & rtB . eirl2ntjhd [ 0 ] ,
11U * sizeof ( real_T ) ) ; tmp_n [ 5 ] = 27 ; simulationData -> mData ->
mInputValues . mN = 27 ; simulationData -> mData -> mInputValues . mX = &
tmp_b [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 6 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_n [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 1 ; simulationData -> mData ->
mOutputs . mX = & rtB . fk1jgig4mk ; simulationData -> mData -> mSampleHits .
mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ; simulationData
-> mData -> mIsFundamentalSampleHit = false ; simulationData -> mData ->
mTolerances . mN = 0 ; simulationData -> mData -> mTolerances . mX = NULL ;
simulationData -> mData -> mCstateHasChanged = false ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . npoaqa0aen ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; k =
ne_simulator_method ( ( NeslSimulator * ) rtDW . o3onksh0um ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k != 0 ) {
first_output = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
first_output ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } if ( ssIsMajorTimeStep ( rtS ) &&
simulationData -> mData -> mCstateHasChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtB . i2goomhryg [ 0 ]
= rtB . p2elnfut2o [ 0 ] ; rtB . i2goomhryg [ 1 ] = 0.0 ; rtB . i2goomhryg [
2 ] = 0.0 ; rtB . i2goomhryg [ 3 ] = 0.0 ; rtB . j2fnpsqpqo [ 0 ] = rtB .
fk1jgig4mk ; rtB . j2fnpsqpqo [ 1 ] = 0.0 ; rtB . j2fnpsqpqo [ 2 ] = 0.0 ;
rtB . j2fnpsqpqo [ 3 ] = 0.0 ; first_output = false ; if ( rtDW . laqbkmsqgt
== 0.0 ) { rtDW . laqbkmsqgt = 1.0 ; first_output = true ; } if (
first_output ) { rtX . pgtm2y1e0v = rtB . olyap2fx01 [ 5 ] ; } rtB .
he3hlshzz3 [ 0 ] = rtX . pgtm2y1e0v ; rtB . he3hlshzz3 [ 1 ] = ( rtB .
olyap2fx01 [ 5 ] - rtX . pgtm2y1e0v ) * 1000.0 ; rtB . he3hlshzz3 [ 2 ] = 0.0
; rtB . he3hlshzz3 [ 3 ] = 0.0 ; rtB . c1eemeez3i [ 0 ] = rtB . c52coq543c ;
rtB . c1eemeez3i [ 1 ] = 0.0 ; rtB . c1eemeez3i [ 2 ] = 0.0 ; rtB .
c1eemeez3i [ 3 ] = 0.0 ; rtB . n5wwmjhbo3 [ 0 ] = rtB . eustrco4oa ; rtB .
n5wwmjhbo3 [ 1 ] = 0.0 ; rtB . n5wwmjhbo3 [ 2 ] = 0.0 ; if (
ssIsMajorTimeStep ( rtS ) ) { rtDW . ia553yu2wz [ 0 ] = ! ( rtB . n5wwmjhbo3
[ 0 ] == rtDW . ia553yu2wz [ 1 ] ) ; rtDW . ia553yu2wz [ 1 ] = rtB .
n5wwmjhbo3 [ 0 ] ; } rtB . n5wwmjhbo3 [ 0 ] = rtDW . ia553yu2wz [ 1 ] ; rtB .
n5wwmjhbo3 [ 3 ] = rtDW . ia553yu2wz [ 0 ] ; rtB . ex1x01f4oc [ 0 ] = rtB .
ierntvt5nm ; rtB . ex1x01f4oc [ 1 ] = 0.0 ; rtB . ex1x01f4oc [ 2 ] = 0.0 ;
rtB . ex1x01f4oc [ 3 ] = 0.0 ; simulationData = ( NeslSimulationData * ) rtDW
. gwtjdjy24g ; time_j = ssGetT ( rtS ) ; simulationData -> mData -> mTime .
mN = 1 ; simulationData -> mData -> mTime . mX = & time_j ; simulationData ->
mData -> mContStates . mN = 6 ; simulationData -> mData -> mContStates . mX =
& rtX . f5ermfyj2i [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . g3r1cnilme ;
simulationData -> mData -> mModeVector . mN = 5 ; simulationData -> mData ->
mModeVector . mX = & rtDW . dmcndn514o [ 0 ] ; first_output = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = first_output ; simulationData
-> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; first_output = (
ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = first_output ; first_output
= ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = first_output ; first_output =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = first_output ; simulationData -> mData ->
mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
first_output = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = first_output ; tmp_d [ 0 ] = 0 ; tmp_l [ 0 ] = rtB
. he3hlshzz3 [ 0 ] ; tmp_l [ 1 ] = rtB . he3hlshzz3 [ 1 ] ; tmp_l [ 2 ] = rtB
. he3hlshzz3 [ 2 ] ; tmp_l [ 3 ] = rtB . he3hlshzz3 [ 3 ] ; tmp_d [ 1 ] = 4 ;
tmp_l [ 4 ] = rtB . c1eemeez3i [ 0 ] ; tmp_l [ 5 ] = rtB . c1eemeez3i [ 1 ] ;
tmp_l [ 6 ] = rtB . c1eemeez3i [ 2 ] ; tmp_l [ 7 ] = rtB . c1eemeez3i [ 3 ] ;
tmp_d [ 2 ] = 8 ; tmp_l [ 8 ] = rtB . n5wwmjhbo3 [ 0 ] ; tmp_l [ 9 ] = rtB .
n5wwmjhbo3 [ 1 ] ; tmp_l [ 10 ] = rtB . n5wwmjhbo3 [ 2 ] ; tmp_l [ 11 ] = rtB
. n5wwmjhbo3 [ 3 ] ; tmp_d [ 3 ] = 12 ; tmp_l [ 12 ] = rtB . ex1x01f4oc [ 0 ]
; tmp_l [ 13 ] = rtB . ex1x01f4oc [ 1 ] ; tmp_l [ 14 ] = rtB . ex1x01f4oc [ 2
] ; tmp_l [ 15 ] = rtB . ex1x01f4oc [ 3 ] ; tmp_d [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_l [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_d [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 11 ; simulationData -> mData ->
mOutputs . mX = & rtB . m4tugv1m5k [ 0 ] ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulationData
-> mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances .
mX = NULL ; simulationData -> mData -> mCstateHasChanged = false ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . dt5cmcttgx ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . fhthr4gruq ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k != 0 ) {
first_output = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
first_output ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } if ( ssIsMajorTimeStep ( rtS ) &&
simulationData -> mData -> mCstateHasChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } simulationData = (
NeslSimulationData * ) rtDW . p4tamc0yv4 ; time_f = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_f ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . hwhuf1w0bo ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . ievrpb2b23 ;
first_output = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) ->
foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
first_output ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; first_output = ( ssGetMdlInfoPtr ( rtS ) ->
mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = first_output ; first_output = ssIsSolverCheckingCIC (
rtS ) ; simulationData -> mData -> mIsSolverCheckingCIC = first_output ;
simulationData -> mData -> mIsComputingJacobian = false ; simulationData ->
mData -> mIsEvaluatingF0 = false ; first_output = ssIsSolverRequestingReset (
rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = first_output ;
tmp_dz [ 0 ] = 0 ; tmp_o [ 0 ] = rtB . he3hlshzz3 [ 0 ] ; tmp_o [ 1 ] = rtB .
he3hlshzz3 [ 1 ] ; tmp_o [ 2 ] = rtB . he3hlshzz3 [ 2 ] ; tmp_o [ 3 ] = rtB .
he3hlshzz3 [ 3 ] ; tmp_dz [ 1 ] = 4 ; tmp_o [ 4 ] = rtB . c1eemeez3i [ 0 ] ;
tmp_o [ 5 ] = rtB . c1eemeez3i [ 1 ] ; tmp_o [ 6 ] = rtB . c1eemeez3i [ 2 ] ;
tmp_o [ 7 ] = rtB . c1eemeez3i [ 3 ] ; tmp_dz [ 2 ] = 8 ; tmp_o [ 8 ] = rtB .
n5wwmjhbo3 [ 0 ] ; tmp_o [ 9 ] = rtB . n5wwmjhbo3 [ 1 ] ; tmp_o [ 10 ] = rtB
. n5wwmjhbo3 [ 2 ] ; tmp_o [ 11 ] = rtB . n5wwmjhbo3 [ 3 ] ; tmp_dz [ 3 ] =
12 ; tmp_o [ 12 ] = rtB . ex1x01f4oc [ 0 ] ; tmp_o [ 13 ] = rtB . ex1x01f4oc
[ 1 ] ; tmp_o [ 14 ] = rtB . ex1x01f4oc [ 2 ] ; tmp_o [ 15 ] = rtB .
ex1x01f4oc [ 3 ] ; tmp_dz [ 4 ] = 16 ; memcpy ( & tmp_o [ 16 ] , & rtB .
m4tugv1m5k [ 0 ] , 11U * sizeof ( real_T ) ) ; tmp_dz [ 5 ] = 27 ;
simulationData -> mData -> mInputValues . mN = 27 ; simulationData -> mData
-> mInputValues . mX = & tmp_o [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 6 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_dz [ 0 ] ; simulationData -> mData -> mOutputs . mN = 1 ; simulationData
-> mData -> mOutputs . mX = & rtB . f2wzumnwx4 ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulationData
-> mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances .
mX = NULL ; simulationData -> mData -> mCstateHasChanged = false ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . pb3ij5lml1 ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . klkrr1jmqr ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k != 0 ) {
first_output = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
first_output ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } if ( ssIsMajorTimeStep ( rtS ) &&
simulationData -> mData -> mCstateHasChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtB . chzxe3k2dn [ 0 ]
= rtB . f2wzumnwx4 ; rtB . chzxe3k2dn [ 1 ] = 0.0 ; rtB . chzxe3k2dn [ 2 ] =
0.0 ; rtB . chzxe3k2dn [ 3 ] = 0.0 ; first_output = false ; if ( rtDW .
hug3ibj3ji == 0.0 ) { rtDW . hug3ibj3ji = 1.0 ; first_output = true ; } if (
first_output ) { rtX . gspguq4t1h = rtB . olyap2fx01 [ 7 ] ; } rtB .
ke4jnme1cl [ 0 ] = rtX . gspguq4t1h ; rtB . ke4jnme1cl [ 1 ] = ( rtB .
olyap2fx01 [ 7 ] - rtX . gspguq4t1h ) * 1000.0 ; rtB . ke4jnme1cl [ 2 ] = 0.0
; rtB . ke4jnme1cl [ 3 ] = 0.0 ; rtB . jgkcsd20s3 [ 0 ] = rtB . kivpoxi4vr ;
rtB . jgkcsd20s3 [ 1 ] = 0.0 ; rtB . jgkcsd20s3 [ 2 ] = 0.0 ; rtB .
jgkcsd20s3 [ 3 ] = 0.0 ; rtB . nu0fcm3rf4 [ 0 ] = rtB . ctnr2llxd1 ; rtB .
nu0fcm3rf4 [ 1 ] = 0.0 ; rtB . nu0fcm3rf4 [ 2 ] = 0.0 ; if (
ssIsMajorTimeStep ( rtS ) ) { rtDW . izya5bz1fe [ 0 ] = ! ( rtB . nu0fcm3rf4
[ 0 ] == rtDW . izya5bz1fe [ 1 ] ) ; rtDW . izya5bz1fe [ 1 ] = rtB .
nu0fcm3rf4 [ 0 ] ; } rtB . nu0fcm3rf4 [ 0 ] = rtDW . izya5bz1fe [ 1 ] ; rtB .
nu0fcm3rf4 [ 3 ] = rtDW . izya5bz1fe [ 0 ] ; rtB . enbi2t101n [ 0 ] = rtB .
dqzjzzlnzt ; rtB . enbi2t101n [ 1 ] = 0.0 ; rtB . enbi2t101n [ 2 ] = 0.0 ;
rtB . enbi2t101n [ 3 ] = 0.0 ; simulationData = ( NeslSimulationData * ) rtDW
. gx5a0stbnw ; time_c = ssGetT ( rtS ) ; simulationData -> mData -> mTime .
mN = 1 ; simulationData -> mData -> mTime . mX = & time_c ; simulationData ->
mData -> mContStates . mN = 6 ; simulationData -> mData -> mContStates . mX =
& rtX . atgv4dpb4z [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . l23eqhz4lj ;
simulationData -> mData -> mModeVector . mN = 5 ; simulationData -> mData ->
mModeVector . mX = & rtDW . e5bbdxb5mf [ 0 ] ; first_output = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = first_output ; simulationData
-> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; first_output = (
ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = first_output ; first_output
= ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = first_output ; first_output =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = first_output ; simulationData -> mData ->
mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
first_output = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = first_output ; tmp_ck [ 0 ] = 0 ; tmp_fs [ 0 ] =
rtB . ke4jnme1cl [ 0 ] ; tmp_fs [ 1 ] = rtB . ke4jnme1cl [ 1 ] ; tmp_fs [ 2 ]
= rtB . ke4jnme1cl [ 2 ] ; tmp_fs [ 3 ] = rtB . ke4jnme1cl [ 3 ] ; tmp_ck [ 1
] = 4 ; tmp_fs [ 4 ] = rtB . jgkcsd20s3 [ 0 ] ; tmp_fs [ 5 ] = rtB .
jgkcsd20s3 [ 1 ] ; tmp_fs [ 6 ] = rtB . jgkcsd20s3 [ 2 ] ; tmp_fs [ 7 ] = rtB
. jgkcsd20s3 [ 3 ] ; tmp_ck [ 2 ] = 8 ; tmp_fs [ 8 ] = rtB . nu0fcm3rf4 [ 0 ]
; tmp_fs [ 9 ] = rtB . nu0fcm3rf4 [ 1 ] ; tmp_fs [ 10 ] = rtB . nu0fcm3rf4 [
2 ] ; tmp_fs [ 11 ] = rtB . nu0fcm3rf4 [ 3 ] ; tmp_ck [ 3 ] = 12 ; tmp_fs [
12 ] = rtB . enbi2t101n [ 0 ] ; tmp_fs [ 13 ] = rtB . enbi2t101n [ 1 ] ;
tmp_fs [ 14 ] = rtB . enbi2t101n [ 2 ] ; tmp_fs [ 15 ] = rtB . enbi2t101n [ 3
] ; tmp_ck [ 4 ] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ;
simulationData -> mData -> mInputValues . mX = & tmp_fs [ 0 ] ;
simulationData -> mData -> mInputOffsets . mN = 5 ; simulationData -> mData
-> mInputOffsets . mX = & tmp_ck [ 0 ] ; simulationData -> mData -> mOutputs
. mN = 11 ; simulationData -> mData -> mOutputs . mX = & rtB . ilihvuljus [ 0
] ; simulationData -> mData -> mSampleHits . mN = 0 ; simulationData -> mData
-> mSampleHits . mX = NULL ; simulationData -> mData ->
mIsFundamentalSampleHit = false ; simulationData -> mData -> mTolerances . mN
= 0 ; simulationData -> mData -> mTolerances . mX = NULL ; simulationData ->
mData -> mCstateHasChanged = false ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . h4w0g3bulz ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; k =
ne_simulator_method ( ( NeslSimulator * ) rtDW . mxvpzlsras ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k != 0 ) {
first_output = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
first_output ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } if ( ssIsMajorTimeStep ( rtS ) &&
simulationData -> mData -> mCstateHasChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } simulationData = (
NeslSimulationData * ) rtDW . isu1bsjo01 ; time_k = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_k ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . dqtlecgkn4 ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . g420u1faqi ;
first_output = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) ->
foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
first_output ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; first_output = ( ssGetMdlInfoPtr ( rtS ) ->
mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = first_output ; first_output = ssIsSolverCheckingCIC (
rtS ) ; simulationData -> mData -> mIsSolverCheckingCIC = first_output ;
simulationData -> mData -> mIsComputingJacobian = false ; simulationData ->
mData -> mIsEvaluatingF0 = false ; first_output = ssIsSolverRequestingReset (
rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = first_output ;
tmp_kt [ 0 ] = 0 ; tmp_f2 [ 0 ] = rtB . ke4jnme1cl [ 0 ] ; tmp_f2 [ 1 ] = rtB
. ke4jnme1cl [ 1 ] ; tmp_f2 [ 2 ] = rtB . ke4jnme1cl [ 2 ] ; tmp_f2 [ 3 ] =
rtB . ke4jnme1cl [ 3 ] ; tmp_kt [ 1 ] = 4 ; tmp_f2 [ 4 ] = rtB . jgkcsd20s3 [
0 ] ; tmp_f2 [ 5 ] = rtB . jgkcsd20s3 [ 1 ] ; tmp_f2 [ 6 ] = rtB . jgkcsd20s3
[ 2 ] ; tmp_f2 [ 7 ] = rtB . jgkcsd20s3 [ 3 ] ; tmp_kt [ 2 ] = 8 ; tmp_f2 [ 8
] = rtB . nu0fcm3rf4 [ 0 ] ; tmp_f2 [ 9 ] = rtB . nu0fcm3rf4 [ 1 ] ; tmp_f2 [
10 ] = rtB . nu0fcm3rf4 [ 2 ] ; tmp_f2 [ 11 ] = rtB . nu0fcm3rf4 [ 3 ] ;
tmp_kt [ 3 ] = 12 ; tmp_f2 [ 12 ] = rtB . enbi2t101n [ 0 ] ; tmp_f2 [ 13 ] =
rtB . enbi2t101n [ 1 ] ; tmp_f2 [ 14 ] = rtB . enbi2t101n [ 2 ] ; tmp_f2 [ 15
] = rtB . enbi2t101n [ 3 ] ; tmp_kt [ 4 ] = 16 ; memcpy ( & tmp_f2 [ 16 ] , &
rtB . ilihvuljus [ 0 ] , 11U * sizeof ( real_T ) ) ; tmp_kt [ 5 ] = 27 ;
simulationData -> mData -> mInputValues . mN = 27 ; simulationData -> mData
-> mInputValues . mX = & tmp_f2 [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 6 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_kt [ 0 ] ; simulationData -> mData -> mOutputs . mN = 1 ; simulationData
-> mData -> mOutputs . mX = & rtB . dbqqr4x2jx ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulationData
-> mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances .
mX = NULL ; simulationData -> mData -> mCstateHasChanged = false ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . p5u2wq1dfl ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . pogmy1p0md ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( k != 0 ) {
first_output = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
first_output ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } if ( ssIsMajorTimeStep ( rtS ) &&
simulationData -> mData -> mCstateHasChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtB . pnk1tj1sdk [ 0 ]
= rtB . dbqqr4x2jx ; rtB . pnk1tj1sdk [ 1 ] = 0.0 ; rtB . pnk1tj1sdk [ 2 ] =
0.0 ; rtB . pnk1tj1sdk [ 3 ] = 0.0 ; UNUSED_PARAMETER ( tid ) ; } void
MdlOutputsTID4 ( int_T tid ) { if ( rtP . Break_Value > rtP .
u5_UpperSat_f1xxbogm20 ) { rtB . pie23wd2bf = rtP . u5_UpperSat_f1xxbogm20 ;
} else if ( rtP . Break_Value < rtP . u5_LowerSat_aimx5l53y0 ) { rtB .
pie23wd2bf = rtP . u5_LowerSat_aimx5l53y0 ; } else { rtB . pie23wd2bf = rtP .
Break_Value ; } if ( rtP . Break1_Value > rtP . u5_UpperSat_atus3v43bp ) {
rtB . lhs5btp42r = rtP . u5_UpperSat_atus3v43bp ; } else if ( rtP .
Break1_Value < rtP . u5_LowerSat_oryv2y43s1 ) { rtB . lhs5btp42r = rtP .
u5_LowerSat_oryv2y43s1 ; } else { rtB . lhs5btp42r = rtP . Break1_Value ; }
if ( rtP . Break2_Value > rtP . u255_UpperSat_m5nwsc4prn ) { rtB . eustrco4oa
= rtP . u255_UpperSat_m5nwsc4prn ; } else if ( rtP . Break2_Value < rtP .
u255_LowerSat_dzjia1thqe ) { rtB . eustrco4oa = rtP .
u255_LowerSat_dzjia1thqe ; } else { rtB . eustrco4oa = rtP . Break2_Value ; }
if ( rtP . Break3_Value > rtP . u255_UpperSat_b3symk0lb5 ) { rtB . ctnr2llxd1
= rtP . u255_UpperSat_b3symk0lb5 ; } else if ( rtP . Break3_Value < rtP .
u255_LowerSat_n1e2cxv13l ) { rtB . ctnr2llxd1 = rtP .
u255_LowerSat_n1e2cxv13l ; } else { rtB . ctnr2llxd1 = rtP . Break3_Value ; }
UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid ) {
NeslSimulationData * simulationData ; real_T time ; boolean_T tmp ; real_T
tmp_p [ 16 ] ; int_T tmp_e [ 5 ] ; NeuDiagnosticManager * diagnosticManager ;
NeuDiagnosticTree * diagnosticTree ; char * msg ; int32_T k ; real_T time_p ;
real_T tmp_i [ 16 ] ; int_T tmp_m [ 5 ] ; real_T time_e ; real_T tmp_g [ 16 ]
; int_T tmp_j [ 5 ] ; real_T time_i ; real_T tmp_f [ 16 ] ; int_T tmp_c [ 5 ]
; real_T time_m ; real_T tmp_k [ 16 ] ; int_T tmp_b [ 5 ] ; simulationData =
( NeslSimulationData * ) rtDW . hwxj03owez ; time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 8 ;
simulationData -> mData -> mContStates . mX = & rtX . mqrisyyzvz [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . g42hzkrdme ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
l0fbymf1qf ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS )
-> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp
= ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB .
i2goomhryg [ 0 ] ; tmp_p [ 1 ] = rtB . i2goomhryg [ 1 ] ; tmp_p [ 2 ] = rtB .
i2goomhryg [ 2 ] ; tmp_p [ 3 ] = rtB . i2goomhryg [ 3 ] ; tmp_e [ 1 ] = 4 ;
tmp_p [ 4 ] = rtB . j2fnpsqpqo [ 0 ] ; tmp_p [ 5 ] = rtB . j2fnpsqpqo [ 1 ] ;
tmp_p [ 6 ] = rtB . j2fnpsqpqo [ 2 ] ; tmp_p [ 7 ] = rtB . j2fnpsqpqo [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . chzxe3k2dn [ 0 ] ; tmp_p [ 9 ] = rtB .
chzxe3k2dn [ 1 ] ; tmp_p [ 10 ] = rtB . chzxe3k2dn [ 2 ] ; tmp_p [ 11 ] = rtB
. chzxe3k2dn [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = rtB . pnk1tj1sdk [ 0 ]
; tmp_p [ 13 ] = rtB . pnk1tj1sdk [ 1 ] ; tmp_p [ 14 ] = rtB . pnk1tj1sdk [ 2
] ; tmp_p [ 15 ] = rtB . pnk1tj1sdk [ 3 ] ; tmp_e [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . fb2s2iht4c ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW . gpclr5jytr ,
NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if ( k != 0 ) { tmp
= error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtDW . brd5pvpnwz += rtP .
Integrator_gainval * rtB . ciyx4ip0mc ; rtDW . aph4a3hagw += rtP .
Filter_gainval * rtB . ibymeqo4w3 ; rtDW . k2qwlebtbj += rtP .
Integrator_gainval_f3eeszil3z * rtB . jexlycubeg ; rtDW . pfrj0uy4xn += rtP .
Filter_gainval_nqnvwj50lp * rtB . exgpu4mzzl ; } if ( ssIsSampleHit ( rtS , 3
, 0 ) ) { rtDW . nmj1xcahr1 = rtDW . irz3pmh2ot ; rtDW . faouxk0mcc = rtDW .
f2nbr3luvy ; rtDW . j5idu3rbuu = rtDW . mpmqkaspx1 ; } if ( ssIsSampleHit (
rtS , 1 , 0 ) ) { rtDW . kmlkzpy3eu = rtB . elkmica4fl ; rtDW . ksnx1fvtcv =
rtB . avhyg1sjte ; } simulationData = ( NeslSimulationData * ) rtDW .
ox0bnvu31g ; time_p = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN
= 1 ; simulationData -> mData -> mTime . mX = & time_p ; simulationData ->
mData -> mContStates . mN = 6 ; simulationData -> mData -> mContStates . mX =
& rtX . fwzhxfm2hy [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . cxsjqpuo4e ;
simulationData -> mData -> mModeVector . mN = 5 ; simulationData -> mData ->
mModeVector . mX = & rtDW . gbzd5pugdl [ 0 ] ; tmp = ( ssIsMajorTimeStep (
rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData
-> mData -> mFoundZcEvents = tmp ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS
) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp = ssIsSolverRequestingReset
( rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_m [
0 ] = 0 ; tmp_i [ 0 ] = rtB . mjvmdy05hg [ 0 ] ; tmp_i [ 1 ] = rtB .
mjvmdy05hg [ 1 ] ; tmp_i [ 2 ] = rtB . mjvmdy05hg [ 2 ] ; tmp_i [ 3 ] = rtB .
mjvmdy05hg [ 3 ] ; tmp_m [ 1 ] = 4 ; tmp_i [ 4 ] = rtB . l0ydipaxdm [ 0 ] ;
tmp_i [ 5 ] = rtB . l0ydipaxdm [ 1 ] ; tmp_i [ 6 ] = rtB . l0ydipaxdm [ 2 ] ;
tmp_i [ 7 ] = rtB . l0ydipaxdm [ 3 ] ; tmp_m [ 2 ] = 8 ; tmp_i [ 8 ] = rtB .
kfmkfo20tj [ 0 ] ; tmp_i [ 9 ] = rtB . kfmkfo20tj [ 1 ] ; tmp_i [ 10 ] = rtB
. kfmkfo20tj [ 2 ] ; tmp_i [ 11 ] = rtB . kfmkfo20tj [ 3 ] ; tmp_m [ 3 ] = 12
; tmp_i [ 12 ] = rtB . dp5tl3nrhd [ 0 ] ; tmp_i [ 13 ] = rtB . dp5tl3nrhd [ 1
] ; tmp_i [ 14 ] = rtB . dp5tl3nrhd [ 2 ] ; tmp_i [ 15 ] = rtB . dp5tl3nrhd [
3 ] ; tmp_m [ 4 ] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ;
simulationData -> mData -> mInputValues . mX = & tmp_i [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets
. mX = & tmp_m [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
dhy2lo1oyd ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW .
a3jz1vhf4h , NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if ( k
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } simulationData = ( NeslSimulationData * ) rtDW . bj3ze5yj42 ;
time_e = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time_e ; simulationData -> mData ->
mContStates . mN = 6 ; simulationData -> mData -> mContStates . mX = & rtX .
feytd2zvev [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . l1mlsom4no ;
simulationData -> mData -> mModeVector . mN = 5 ; simulationData -> mData ->
mModeVector . mX = & rtDW . hsxy3n0vne [ 0 ] ; tmp = ( ssIsMajorTimeStep (
rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData
-> mData -> mFoundZcEvents = tmp ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS
) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp = ssIsSolverRequestingReset
( rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_j [
0 ] = 0 ; tmp_g [ 0 ] = rtB . e1jqwcx00o [ 0 ] ; tmp_g [ 1 ] = rtB .
e1jqwcx00o [ 1 ] ; tmp_g [ 2 ] = rtB . e1jqwcx00o [ 2 ] ; tmp_g [ 3 ] = rtB .
e1jqwcx00o [ 3 ] ; tmp_j [ 1 ] = 4 ; tmp_g [ 4 ] = rtB . plozcdvjyj [ 0 ] ;
tmp_g [ 5 ] = rtB . plozcdvjyj [ 1 ] ; tmp_g [ 6 ] = rtB . plozcdvjyj [ 2 ] ;
tmp_g [ 7 ] = rtB . plozcdvjyj [ 3 ] ; tmp_j [ 2 ] = 8 ; tmp_g [ 8 ] = rtB .
mm054drprn [ 0 ] ; tmp_g [ 9 ] = rtB . mm054drprn [ 1 ] ; tmp_g [ 10 ] = rtB
. mm054drprn [ 2 ] ; tmp_g [ 11 ] = rtB . mm054drprn [ 3 ] ; tmp_j [ 3 ] = 12
; tmp_g [ 12 ] = rtB . ech2ew1rr2 [ 0 ] ; tmp_g [ 13 ] = rtB . ech2ew1rr2 [ 1
] ; tmp_g [ 14 ] = rtB . ech2ew1rr2 [ 2 ] ; tmp_g [ 15 ] = rtB . ech2ew1rr2 [
3 ] ; tmp_j [ 4 ] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ;
simulationData -> mData -> mInputValues . mX = & tmp_g [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets
. mX = & tmp_j [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
lieaetbmrt ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW .
la3jhngrnl , NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if ( k
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } simulationData = ( NeslSimulationData * ) rtDW . gwtjdjy24g ;
time_i = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time_i ; simulationData -> mData ->
mContStates . mN = 6 ; simulationData -> mData -> mContStates . mX = & rtX .
f5ermfyj2i [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . g3r1cnilme ;
simulationData -> mData -> mModeVector . mN = 5 ; simulationData -> mData ->
mModeVector . mX = & rtDW . dmcndn514o [ 0 ] ; tmp = ( ssIsMajorTimeStep (
rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData
-> mData -> mFoundZcEvents = tmp ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS
) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp = ssIsSolverRequestingReset
( rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_c [
0 ] = 0 ; tmp_f [ 0 ] = rtB . he3hlshzz3 [ 0 ] ; tmp_f [ 1 ] = rtB .
he3hlshzz3 [ 1 ] ; tmp_f [ 2 ] = rtB . he3hlshzz3 [ 2 ] ; tmp_f [ 3 ] = rtB .
he3hlshzz3 [ 3 ] ; tmp_c [ 1 ] = 4 ; tmp_f [ 4 ] = rtB . c1eemeez3i [ 0 ] ;
tmp_f [ 5 ] = rtB . c1eemeez3i [ 1 ] ; tmp_f [ 6 ] = rtB . c1eemeez3i [ 2 ] ;
tmp_f [ 7 ] = rtB . c1eemeez3i [ 3 ] ; tmp_c [ 2 ] = 8 ; tmp_f [ 8 ] = rtB .
n5wwmjhbo3 [ 0 ] ; tmp_f [ 9 ] = rtB . n5wwmjhbo3 [ 1 ] ; tmp_f [ 10 ] = rtB
. n5wwmjhbo3 [ 2 ] ; tmp_f [ 11 ] = rtB . n5wwmjhbo3 [ 3 ] ; tmp_c [ 3 ] = 12
; tmp_f [ 12 ] = rtB . ex1x01f4oc [ 0 ] ; tmp_f [ 13 ] = rtB . ex1x01f4oc [ 1
] ; tmp_f [ 14 ] = rtB . ex1x01f4oc [ 2 ] ; tmp_f [ 15 ] = rtB . ex1x01f4oc [
3 ] ; tmp_c [ 4 ] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ;
simulationData -> mData -> mInputValues . mX = & tmp_f [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets
. mX = & tmp_c [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
dt5cmcttgx ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW .
fhthr4gruq , NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if ( k
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } simulationData = ( NeslSimulationData * ) rtDW . gx5a0stbnw ;
time_m = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time_m ; simulationData -> mData ->
mContStates . mN = 6 ; simulationData -> mData -> mContStates . mX = & rtX .
atgv4dpb4z [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . l23eqhz4lj ;
simulationData -> mData -> mModeVector . mN = 5 ; simulationData -> mData ->
mModeVector . mX = & rtDW . e5bbdxb5mf [ 0 ] ; tmp = ( ssIsMajorTimeStep (
rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData
-> mData -> mFoundZcEvents = tmp ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS
) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp = ssIsSolverRequestingReset
( rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_b [
0 ] = 0 ; tmp_k [ 0 ] = rtB . ke4jnme1cl [ 0 ] ; tmp_k [ 1 ] = rtB .
ke4jnme1cl [ 1 ] ; tmp_k [ 2 ] = rtB . ke4jnme1cl [ 2 ] ; tmp_k [ 3 ] = rtB .
ke4jnme1cl [ 3 ] ; tmp_b [ 1 ] = 4 ; tmp_k [ 4 ] = rtB . jgkcsd20s3 [ 0 ] ;
tmp_k [ 5 ] = rtB . jgkcsd20s3 [ 1 ] ; tmp_k [ 6 ] = rtB . jgkcsd20s3 [ 2 ] ;
tmp_k [ 7 ] = rtB . jgkcsd20s3 [ 3 ] ; tmp_b [ 2 ] = 8 ; tmp_k [ 8 ] = rtB .
nu0fcm3rf4 [ 0 ] ; tmp_k [ 9 ] = rtB . nu0fcm3rf4 [ 1 ] ; tmp_k [ 10 ] = rtB
. nu0fcm3rf4 [ 2 ] ; tmp_k [ 11 ] = rtB . nu0fcm3rf4 [ 3 ] ; tmp_b [ 3 ] = 12
; tmp_k [ 12 ] = rtB . enbi2t101n [ 0 ] ; tmp_k [ 13 ] = rtB . enbi2t101n [ 1
] ; tmp_k [ 14 ] = rtB . enbi2t101n [ 2 ] ; tmp_k [ 15 ] = rtB . enbi2t101n [
3 ] ; tmp_b [ 4 ] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ;
simulationData -> mData -> mInputValues . mX = & tmp_k [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets
. mX = & tmp_b [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
h4w0g3bulz ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; k = ne_simulator_method ( ( NeslSimulator * ) rtDW .
mxvpzlsras , NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if ( k
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID4 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlDerivatives ( void ) {
NeslSimulationData * simulationData ; real_T time ; boolean_T tmp ; real_T
tmp_p [ 16 ] ; int_T tmp_e [ 5 ] ; NeuDiagnosticManager * diagnosticManager ;
NeuDiagnosticTree * diagnosticTree ; int32_T tmp_i ; char * msg ; real_T
time_p ; real_T tmp_m [ 16 ] ; int_T tmp_g [ 5 ] ; real_T time_e ; real_T
tmp_j [ 16 ] ; int_T tmp_f [ 5 ] ; real_T time_i ; real_T tmp_c [ 16 ] ;
int_T tmp_k [ 5 ] ; real_T time_m ; real_T tmp_b [ 16 ] ; int_T tmp_n [ 5 ] ;
XDot * _rtXdot ; _rtXdot = ( ( XDot * ) ssGetdX ( rtS ) ) ; simulationData =
( NeslSimulationData * ) rtDW . hwxj03owez ; time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 8 ;
simulationData -> mData -> mContStates . mX = & rtX . mqrisyyzvz [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . g42hzkrdme ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
l0fbymf1qf ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS )
-> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp
= ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB .
i2goomhryg [ 0 ] ; tmp_p [ 1 ] = rtB . i2goomhryg [ 1 ] ; tmp_p [ 2 ] = rtB .
i2goomhryg [ 2 ] ; tmp_p [ 3 ] = rtB . i2goomhryg [ 3 ] ; tmp_e [ 1 ] = 4 ;
tmp_p [ 4 ] = rtB . j2fnpsqpqo [ 0 ] ; tmp_p [ 5 ] = rtB . j2fnpsqpqo [ 1 ] ;
tmp_p [ 6 ] = rtB . j2fnpsqpqo [ 2 ] ; tmp_p [ 7 ] = rtB . j2fnpsqpqo [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . chzxe3k2dn [ 0 ] ; tmp_p [ 9 ] = rtB .
chzxe3k2dn [ 1 ] ; tmp_p [ 10 ] = rtB . chzxe3k2dn [ 2 ] ; tmp_p [ 11 ] = rtB
. chzxe3k2dn [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = rtB . pnk1tj1sdk [ 0 ]
; tmp_p [ 13 ] = rtB . pnk1tj1sdk [ 1 ] ; tmp_p [ 14 ] = rtB . pnk1tj1sdk [ 2
] ; tmp_p [ 15 ] = rtB . pnk1tj1sdk [ 3 ] ; tmp_e [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mDx . mN = 8 ; simulationData -> mData -> mDx . mX
= & _rtXdot -> mqrisyyzvz [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager
* ) rtDW . fb2s2iht4c ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . gpclr5jytr ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } _rtXdot -> ho32jzvqwd = rtB . librkmwt3k ; _rtXdot -> cnzrnlw10x = rtB
. p3ywisr0dv ; _rtXdot -> cf4eknbnqt = rtB . l3unbkufet ; _rtXdot ->
fabp12nunk = rtB . inuxleclis ; _rtXdot -> ijlqzu10zq = ( rtB . olyap2fx01 [
1 ] - rtX . ijlqzu10zq ) * 1000.0 ; simulationData = ( NeslSimulationData * )
rtDW . ox0bnvu31g ; time_p = ssGetT ( rtS ) ; simulationData -> mData ->
mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time_p ;
simulationData -> mData -> mContStates . mN = 6 ; simulationData -> mData ->
mContStates . mX = & rtX . fwzhxfm2hy [ 0 ] ; simulationData -> mData ->
mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = & rtDW .
cxsjqpuo4e ; simulationData -> mData -> mModeVector . mN = 5 ; simulationData
-> mData -> mModeVector . mX = & rtDW . gbzd5pugdl [ 0 ] ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp = ssIsSolverRequestingReset
( rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_g [
0 ] = 0 ; tmp_m [ 0 ] = rtB . mjvmdy05hg [ 0 ] ; tmp_m [ 1 ] = rtB .
mjvmdy05hg [ 1 ] ; tmp_m [ 2 ] = rtB . mjvmdy05hg [ 2 ] ; tmp_m [ 3 ] = rtB .
mjvmdy05hg [ 3 ] ; tmp_g [ 1 ] = 4 ; tmp_m [ 4 ] = rtB . l0ydipaxdm [ 0 ] ;
tmp_m [ 5 ] = rtB . l0ydipaxdm [ 1 ] ; tmp_m [ 6 ] = rtB . l0ydipaxdm [ 2 ] ;
tmp_m [ 7 ] = rtB . l0ydipaxdm [ 3 ] ; tmp_g [ 2 ] = 8 ; tmp_m [ 8 ] = rtB .
kfmkfo20tj [ 0 ] ; tmp_m [ 9 ] = rtB . kfmkfo20tj [ 1 ] ; tmp_m [ 10 ] = rtB
. kfmkfo20tj [ 2 ] ; tmp_m [ 11 ] = rtB . kfmkfo20tj [ 3 ] ; tmp_g [ 3 ] = 12
; tmp_m [ 12 ] = rtB . dp5tl3nrhd [ 0 ] ; tmp_m [ 13 ] = rtB . dp5tl3nrhd [ 1
] ; tmp_m [ 14 ] = rtB . dp5tl3nrhd [ 2 ] ; tmp_m [ 15 ] = rtB . dp5tl3nrhd [
3 ] ; tmp_g [ 4 ] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ;
simulationData -> mData -> mInputValues . mX = & tmp_m [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets
. mX = & tmp_g [ 0 ] ; simulationData -> mData -> mDx . mN = 6 ;
simulationData -> mData -> mDx . mX = & _rtXdot -> fwzhxfm2hy [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . dhy2lo1oyd ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . a3jz1vhf4h ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } _rtXdot -> c3cmrhd2ez = ( rtB . olyap2fx01 [ 3 ] - rtX . c3cmrhd2ez ) *
1000.0 ; simulationData = ( NeslSimulationData * ) rtDW . bj3ze5yj42 ; time_e
= ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_e ; simulationData -> mData -> mContStates .
mN = 6 ; simulationData -> mData -> mContStates . mX = & rtX . feytd2zvev [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . l1mlsom4no ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
hsxy3n0vne [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_f [ 0 ] = 0 ; tmp_j [ 0 ] = rtB .
e1jqwcx00o [ 0 ] ; tmp_j [ 1 ] = rtB . e1jqwcx00o [ 1 ] ; tmp_j [ 2 ] = rtB .
e1jqwcx00o [ 2 ] ; tmp_j [ 3 ] = rtB . e1jqwcx00o [ 3 ] ; tmp_f [ 1 ] = 4 ;
tmp_j [ 4 ] = rtB . plozcdvjyj [ 0 ] ; tmp_j [ 5 ] = rtB . plozcdvjyj [ 1 ] ;
tmp_j [ 6 ] = rtB . plozcdvjyj [ 2 ] ; tmp_j [ 7 ] = rtB . plozcdvjyj [ 3 ] ;
tmp_f [ 2 ] = 8 ; tmp_j [ 8 ] = rtB . mm054drprn [ 0 ] ; tmp_j [ 9 ] = rtB .
mm054drprn [ 1 ] ; tmp_j [ 10 ] = rtB . mm054drprn [ 2 ] ; tmp_j [ 11 ] = rtB
. mm054drprn [ 3 ] ; tmp_f [ 3 ] = 12 ; tmp_j [ 12 ] = rtB . ech2ew1rr2 [ 0 ]
; tmp_j [ 13 ] = rtB . ech2ew1rr2 [ 1 ] ; tmp_j [ 14 ] = rtB . ech2ew1rr2 [ 2
] ; tmp_j [ 15 ] = rtB . ech2ew1rr2 [ 3 ] ; tmp_f [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_j [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_f [ 0 ] ;
simulationData -> mData -> mDx . mN = 6 ; simulationData -> mData -> mDx . mX
= & _rtXdot -> feytd2zvev [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager
* ) rtDW . lieaetbmrt ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . la3jhngrnl ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } _rtXdot -> pgtm2y1e0v = ( rtB . olyap2fx01 [ 5 ] - rtX . pgtm2y1e0v ) *
1000.0 ; simulationData = ( NeslSimulationData * ) rtDW . gwtjdjy24g ; time_i
= ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_i ; simulationData -> mData -> mContStates .
mN = 6 ; simulationData -> mData -> mContStates . mX = & rtX . f5ermfyj2i [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . g3r1cnilme ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
dmcndn514o [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_k [ 0 ] = 0 ; tmp_c [ 0 ] = rtB .
he3hlshzz3 [ 0 ] ; tmp_c [ 1 ] = rtB . he3hlshzz3 [ 1 ] ; tmp_c [ 2 ] = rtB .
he3hlshzz3 [ 2 ] ; tmp_c [ 3 ] = rtB . he3hlshzz3 [ 3 ] ; tmp_k [ 1 ] = 4 ;
tmp_c [ 4 ] = rtB . c1eemeez3i [ 0 ] ; tmp_c [ 5 ] = rtB . c1eemeez3i [ 1 ] ;
tmp_c [ 6 ] = rtB . c1eemeez3i [ 2 ] ; tmp_c [ 7 ] = rtB . c1eemeez3i [ 3 ] ;
tmp_k [ 2 ] = 8 ; tmp_c [ 8 ] = rtB . n5wwmjhbo3 [ 0 ] ; tmp_c [ 9 ] = rtB .
n5wwmjhbo3 [ 1 ] ; tmp_c [ 10 ] = rtB . n5wwmjhbo3 [ 2 ] ; tmp_c [ 11 ] = rtB
. n5wwmjhbo3 [ 3 ] ; tmp_k [ 3 ] = 12 ; tmp_c [ 12 ] = rtB . ex1x01f4oc [ 0 ]
; tmp_c [ 13 ] = rtB . ex1x01f4oc [ 1 ] ; tmp_c [ 14 ] = rtB . ex1x01f4oc [ 2
] ; tmp_c [ 15 ] = rtB . ex1x01f4oc [ 3 ] ; tmp_k [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_c [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_k [ 0 ] ;
simulationData -> mData -> mDx . mN = 6 ; simulationData -> mData -> mDx . mX
= & _rtXdot -> f5ermfyj2i [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager
* ) rtDW . dt5cmcttgx ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . fhthr4gruq ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } _rtXdot -> gspguq4t1h = ( rtB . olyap2fx01 [ 7 ] - rtX . gspguq4t1h ) *
1000.0 ; simulationData = ( NeslSimulationData * ) rtDW . gx5a0stbnw ; time_m
= ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_m ; simulationData -> mData -> mContStates .
mN = 6 ; simulationData -> mData -> mContStates . mX = & rtX . atgv4dpb4z [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . l23eqhz4lj ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
e5bbdxb5mf [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_n [ 0 ] = 0 ; tmp_b [ 0 ] = rtB .
ke4jnme1cl [ 0 ] ; tmp_b [ 1 ] = rtB . ke4jnme1cl [ 1 ] ; tmp_b [ 2 ] = rtB .
ke4jnme1cl [ 2 ] ; tmp_b [ 3 ] = rtB . ke4jnme1cl [ 3 ] ; tmp_n [ 1 ] = 4 ;
tmp_b [ 4 ] = rtB . jgkcsd20s3 [ 0 ] ; tmp_b [ 5 ] = rtB . jgkcsd20s3 [ 1 ] ;
tmp_b [ 6 ] = rtB . jgkcsd20s3 [ 2 ] ; tmp_b [ 7 ] = rtB . jgkcsd20s3 [ 3 ] ;
tmp_n [ 2 ] = 8 ; tmp_b [ 8 ] = rtB . nu0fcm3rf4 [ 0 ] ; tmp_b [ 9 ] = rtB .
nu0fcm3rf4 [ 1 ] ; tmp_b [ 10 ] = rtB . nu0fcm3rf4 [ 2 ] ; tmp_b [ 11 ] = rtB
. nu0fcm3rf4 [ 3 ] ; tmp_n [ 3 ] = 12 ; tmp_b [ 12 ] = rtB . enbi2t101n [ 0 ]
; tmp_b [ 13 ] = rtB . enbi2t101n [ 1 ] ; tmp_b [ 14 ] = rtB . enbi2t101n [ 2
] ; tmp_b [ 15 ] = rtB . enbi2t101n [ 3 ] ; tmp_n [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_b [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_n [ 0 ] ;
simulationData -> mData -> mDx . mN = 6 ; simulationData -> mData -> mDx . mX
= & _rtXdot -> atgv4dpb4z [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager
* ) rtDW . h4w0g3bulz ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . mxvpzlsras ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlProjection ( void ) { NeslSimulationData * simulationData ;
real_T time ; boolean_T tmp ; real_T tmp_p [ 16 ] ; int_T tmp_e [ 5 ] ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; int32_T tmp_i ; char * msg ; real_T time_p ; real_T tmp_m [ 16 ] ; int_T
tmp_g [ 5 ] ; real_T time_e ; real_T tmp_j [ 16 ] ; int_T tmp_f [ 5 ] ;
real_T time_i ; real_T tmp_c [ 16 ] ; int_T tmp_k [ 5 ] ; real_T time_m ;
real_T tmp_b [ 16 ] ; int_T tmp_n [ 5 ] ; simulationData = (
NeslSimulationData * ) rtDW . hwxj03owez ; time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 8 ;
simulationData -> mData -> mContStates . mX = & rtX . mqrisyyzvz [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . g42hzkrdme ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
l0fbymf1qf ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS )
-> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp
= ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB .
i2goomhryg [ 0 ] ; tmp_p [ 1 ] = rtB . i2goomhryg [ 1 ] ; tmp_p [ 2 ] = rtB .
i2goomhryg [ 2 ] ; tmp_p [ 3 ] = rtB . i2goomhryg [ 3 ] ; tmp_e [ 1 ] = 4 ;
tmp_p [ 4 ] = rtB . j2fnpsqpqo [ 0 ] ; tmp_p [ 5 ] = rtB . j2fnpsqpqo [ 1 ] ;
tmp_p [ 6 ] = rtB . j2fnpsqpqo [ 2 ] ; tmp_p [ 7 ] = rtB . j2fnpsqpqo [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . chzxe3k2dn [ 0 ] ; tmp_p [ 9 ] = rtB .
chzxe3k2dn [ 1 ] ; tmp_p [ 10 ] = rtB . chzxe3k2dn [ 2 ] ; tmp_p [ 11 ] = rtB
. chzxe3k2dn [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = rtB . pnk1tj1sdk [ 0 ]
; tmp_p [ 13 ] = rtB . pnk1tj1sdk [ 1 ] ; tmp_p [ 14 ] = rtB . pnk1tj1sdk [ 2
] ; tmp_p [ 15 ] = rtB . pnk1tj1sdk [ 3 ] ; tmp_e [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . fb2s2iht4c ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . gpclr5jytr ,
NESL_SIM_PROJECTION , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . ox0bnvu31g ; time_p =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_p ; simulationData -> mData -> mContStates .
mN = 6 ; simulationData -> mData -> mContStates . mX = & rtX . fwzhxfm2hy [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . cxsjqpuo4e ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
gbzd5pugdl [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_g [ 0 ] = 0 ; tmp_m [ 0 ] = rtB .
mjvmdy05hg [ 0 ] ; tmp_m [ 1 ] = rtB . mjvmdy05hg [ 1 ] ; tmp_m [ 2 ] = rtB .
mjvmdy05hg [ 2 ] ; tmp_m [ 3 ] = rtB . mjvmdy05hg [ 3 ] ; tmp_g [ 1 ] = 4 ;
tmp_m [ 4 ] = rtB . l0ydipaxdm [ 0 ] ; tmp_m [ 5 ] = rtB . l0ydipaxdm [ 1 ] ;
tmp_m [ 6 ] = rtB . l0ydipaxdm [ 2 ] ; tmp_m [ 7 ] = rtB . l0ydipaxdm [ 3 ] ;
tmp_g [ 2 ] = 8 ; tmp_m [ 8 ] = rtB . kfmkfo20tj [ 0 ] ; tmp_m [ 9 ] = rtB .
kfmkfo20tj [ 1 ] ; tmp_m [ 10 ] = rtB . kfmkfo20tj [ 2 ] ; tmp_m [ 11 ] = rtB
. kfmkfo20tj [ 3 ] ; tmp_g [ 3 ] = 12 ; tmp_m [ 12 ] = rtB . dp5tl3nrhd [ 0 ]
; tmp_m [ 13 ] = rtB . dp5tl3nrhd [ 1 ] ; tmp_m [ 14 ] = rtB . dp5tl3nrhd [ 2
] ; tmp_m [ 15 ] = rtB . dp5tl3nrhd [ 3 ] ; tmp_g [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_m [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_g [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . dhy2lo1oyd ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . a3jz1vhf4h ,
NESL_SIM_PROJECTION , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . bj3ze5yj42 ; time_e =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_e ; simulationData -> mData -> mContStates .
mN = 6 ; simulationData -> mData -> mContStates . mX = & rtX . feytd2zvev [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . l1mlsom4no ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
hsxy3n0vne [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_f [ 0 ] = 0 ; tmp_j [ 0 ] = rtB .
e1jqwcx00o [ 0 ] ; tmp_j [ 1 ] = rtB . e1jqwcx00o [ 1 ] ; tmp_j [ 2 ] = rtB .
e1jqwcx00o [ 2 ] ; tmp_j [ 3 ] = rtB . e1jqwcx00o [ 3 ] ; tmp_f [ 1 ] = 4 ;
tmp_j [ 4 ] = rtB . plozcdvjyj [ 0 ] ; tmp_j [ 5 ] = rtB . plozcdvjyj [ 1 ] ;
tmp_j [ 6 ] = rtB . plozcdvjyj [ 2 ] ; tmp_j [ 7 ] = rtB . plozcdvjyj [ 3 ] ;
tmp_f [ 2 ] = 8 ; tmp_j [ 8 ] = rtB . mm054drprn [ 0 ] ; tmp_j [ 9 ] = rtB .
mm054drprn [ 1 ] ; tmp_j [ 10 ] = rtB . mm054drprn [ 2 ] ; tmp_j [ 11 ] = rtB
. mm054drprn [ 3 ] ; tmp_f [ 3 ] = 12 ; tmp_j [ 12 ] = rtB . ech2ew1rr2 [ 0 ]
; tmp_j [ 13 ] = rtB . ech2ew1rr2 [ 1 ] ; tmp_j [ 14 ] = rtB . ech2ew1rr2 [ 2
] ; tmp_j [ 15 ] = rtB . ech2ew1rr2 [ 3 ] ; tmp_f [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_j [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_f [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . lieaetbmrt ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . la3jhngrnl ,
NESL_SIM_PROJECTION , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . gwtjdjy24g ; time_i =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_i ; simulationData -> mData -> mContStates .
mN = 6 ; simulationData -> mData -> mContStates . mX = & rtX . f5ermfyj2i [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . g3r1cnilme ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
dmcndn514o [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_k [ 0 ] = 0 ; tmp_c [ 0 ] = rtB .
he3hlshzz3 [ 0 ] ; tmp_c [ 1 ] = rtB . he3hlshzz3 [ 1 ] ; tmp_c [ 2 ] = rtB .
he3hlshzz3 [ 2 ] ; tmp_c [ 3 ] = rtB . he3hlshzz3 [ 3 ] ; tmp_k [ 1 ] = 4 ;
tmp_c [ 4 ] = rtB . c1eemeez3i [ 0 ] ; tmp_c [ 5 ] = rtB . c1eemeez3i [ 1 ] ;
tmp_c [ 6 ] = rtB . c1eemeez3i [ 2 ] ; tmp_c [ 7 ] = rtB . c1eemeez3i [ 3 ] ;
tmp_k [ 2 ] = 8 ; tmp_c [ 8 ] = rtB . n5wwmjhbo3 [ 0 ] ; tmp_c [ 9 ] = rtB .
n5wwmjhbo3 [ 1 ] ; tmp_c [ 10 ] = rtB . n5wwmjhbo3 [ 2 ] ; tmp_c [ 11 ] = rtB
. n5wwmjhbo3 [ 3 ] ; tmp_k [ 3 ] = 12 ; tmp_c [ 12 ] = rtB . ex1x01f4oc [ 0 ]
; tmp_c [ 13 ] = rtB . ex1x01f4oc [ 1 ] ; tmp_c [ 14 ] = rtB . ex1x01f4oc [ 2
] ; tmp_c [ 15 ] = rtB . ex1x01f4oc [ 3 ] ; tmp_k [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_c [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_k [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . dt5cmcttgx ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . fhthr4gruq ,
NESL_SIM_PROJECTION , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . gx5a0stbnw ; time_m =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_m ; simulationData -> mData -> mContStates .
mN = 6 ; simulationData -> mData -> mContStates . mX = & rtX . atgv4dpb4z [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . l23eqhz4lj ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
e5bbdxb5mf [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_n [ 0 ] = 0 ; tmp_b [ 0 ] = rtB .
ke4jnme1cl [ 0 ] ; tmp_b [ 1 ] = rtB . ke4jnme1cl [ 1 ] ; tmp_b [ 2 ] = rtB .
ke4jnme1cl [ 2 ] ; tmp_b [ 3 ] = rtB . ke4jnme1cl [ 3 ] ; tmp_n [ 1 ] = 4 ;
tmp_b [ 4 ] = rtB . jgkcsd20s3 [ 0 ] ; tmp_b [ 5 ] = rtB . jgkcsd20s3 [ 1 ] ;
tmp_b [ 6 ] = rtB . jgkcsd20s3 [ 2 ] ; tmp_b [ 7 ] = rtB . jgkcsd20s3 [ 3 ] ;
tmp_n [ 2 ] = 8 ; tmp_b [ 8 ] = rtB . nu0fcm3rf4 [ 0 ] ; tmp_b [ 9 ] = rtB .
nu0fcm3rf4 [ 1 ] ; tmp_b [ 10 ] = rtB . nu0fcm3rf4 [ 2 ] ; tmp_b [ 11 ] = rtB
. nu0fcm3rf4 [ 3 ] ; tmp_n [ 3 ] = 12 ; tmp_b [ 12 ] = rtB . enbi2t101n [ 0 ]
; tmp_b [ 13 ] = rtB . enbi2t101n [ 1 ] ; tmp_b [ 14 ] = rtB . enbi2t101n [ 2
] ; tmp_b [ 15 ] = rtB . enbi2t101n [ 3 ] ; tmp_n [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_b [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_n [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . h4w0g3bulz ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . mxvpzlsras ,
NESL_SIM_PROJECTION , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlForcingFunction ( void ) { NeslSimulationData *
simulationData ; real_T time ; boolean_T tmp ; real_T tmp_p [ 16 ] ; int_T
tmp_e [ 5 ] ; NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree *
diagnosticTree ; int32_T tmp_i ; char * msg ; real_T time_p ; real_T tmp_m [
16 ] ; int_T tmp_g [ 5 ] ; real_T time_e ; real_T tmp_j [ 16 ] ; int_T tmp_f
[ 5 ] ; real_T time_i ; real_T tmp_c [ 16 ] ; int_T tmp_k [ 5 ] ; real_T
time_m ; real_T tmp_b [ 16 ] ; int_T tmp_n [ 5 ] ; XDot * _rtXdot ; _rtXdot =
( ( XDot * ) ssGetdX ( rtS ) ) ; simulationData = ( NeslSimulationData * )
rtDW . hwxj03owez ; time = ssGetT ( rtS ) ; simulationData -> mData -> mTime
. mN = 1 ; simulationData -> mData -> mTime . mX = & time ; simulationData ->
mData -> mContStates . mN = 8 ; simulationData -> mData -> mContStates . mX =
& rtX . mqrisyyzvz [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . g42hzkrdme ;
simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData ->
mModeVector . mX = & rtDW . l0fbymf1qf ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = tmp ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB .
i2goomhryg [ 0 ] ; tmp_p [ 1 ] = rtB . i2goomhryg [ 1 ] ; tmp_p [ 2 ] = rtB .
i2goomhryg [ 2 ] ; tmp_p [ 3 ] = rtB . i2goomhryg [ 3 ] ; tmp_e [ 1 ] = 4 ;
tmp_p [ 4 ] = rtB . j2fnpsqpqo [ 0 ] ; tmp_p [ 5 ] = rtB . j2fnpsqpqo [ 1 ] ;
tmp_p [ 6 ] = rtB . j2fnpsqpqo [ 2 ] ; tmp_p [ 7 ] = rtB . j2fnpsqpqo [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . chzxe3k2dn [ 0 ] ; tmp_p [ 9 ] = rtB .
chzxe3k2dn [ 1 ] ; tmp_p [ 10 ] = rtB . chzxe3k2dn [ 2 ] ; tmp_p [ 11 ] = rtB
. chzxe3k2dn [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = rtB . pnk1tj1sdk [ 0 ]
; tmp_p [ 13 ] = rtB . pnk1tj1sdk [ 1 ] ; tmp_p [ 14 ] = rtB . pnk1tj1sdk [ 2
] ; tmp_p [ 15 ] = rtB . pnk1tj1sdk [ 3 ] ; tmp_e [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mDx . mN = 8 ; simulationData -> mData -> mDx . mX
= & _rtXdot -> mqrisyyzvz [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager
* ) rtDW . fb2s2iht4c ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . gpclr5jytr ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } _rtXdot -> ho32jzvqwd = rtB . librkmwt3k ; _rtXdot -> cnzrnlw10x = rtB
. p3ywisr0dv ; _rtXdot -> cf4eknbnqt = rtB . l3unbkufet ; _rtXdot ->
fabp12nunk = rtB . inuxleclis ; _rtXdot -> ijlqzu10zq = ( rtB . olyap2fx01 [
1 ] - rtX . ijlqzu10zq ) * 1000.0 ; simulationData = ( NeslSimulationData * )
rtDW . ox0bnvu31g ; time_p = ssGetT ( rtS ) ; simulationData -> mData ->
mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time_p ;
simulationData -> mData -> mContStates . mN = 6 ; simulationData -> mData ->
mContStates . mX = & rtX . fwzhxfm2hy [ 0 ] ; simulationData -> mData ->
mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = & rtDW .
cxsjqpuo4e ; simulationData -> mData -> mModeVector . mN = 5 ; simulationData
-> mData -> mModeVector . mX = & rtDW . gbzd5pugdl [ 0 ] ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp = ssIsSolverRequestingReset
( rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_g [
0 ] = 0 ; tmp_m [ 0 ] = rtB . mjvmdy05hg [ 0 ] ; tmp_m [ 1 ] = rtB .
mjvmdy05hg [ 1 ] ; tmp_m [ 2 ] = rtB . mjvmdy05hg [ 2 ] ; tmp_m [ 3 ] = rtB .
mjvmdy05hg [ 3 ] ; tmp_g [ 1 ] = 4 ; tmp_m [ 4 ] = rtB . l0ydipaxdm [ 0 ] ;
tmp_m [ 5 ] = rtB . l0ydipaxdm [ 1 ] ; tmp_m [ 6 ] = rtB . l0ydipaxdm [ 2 ] ;
tmp_m [ 7 ] = rtB . l0ydipaxdm [ 3 ] ; tmp_g [ 2 ] = 8 ; tmp_m [ 8 ] = rtB .
kfmkfo20tj [ 0 ] ; tmp_m [ 9 ] = rtB . kfmkfo20tj [ 1 ] ; tmp_m [ 10 ] = rtB
. kfmkfo20tj [ 2 ] ; tmp_m [ 11 ] = rtB . kfmkfo20tj [ 3 ] ; tmp_g [ 3 ] = 12
; tmp_m [ 12 ] = rtB . dp5tl3nrhd [ 0 ] ; tmp_m [ 13 ] = rtB . dp5tl3nrhd [ 1
] ; tmp_m [ 14 ] = rtB . dp5tl3nrhd [ 2 ] ; tmp_m [ 15 ] = rtB . dp5tl3nrhd [
3 ] ; tmp_g [ 4 ] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ;
simulationData -> mData -> mInputValues . mX = & tmp_m [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets
. mX = & tmp_g [ 0 ] ; simulationData -> mData -> mDx . mN = 6 ;
simulationData -> mData -> mDx . mX = & _rtXdot -> fwzhxfm2hy [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . dhy2lo1oyd ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . a3jz1vhf4h ,
NESL_SIM_FORCINGFUNCTION , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } _rtXdot -> c3cmrhd2ez = ( rtB . olyap2fx01 [ 3 ] - rtX .
c3cmrhd2ez ) * 1000.0 ; simulationData = ( NeslSimulationData * ) rtDW .
bj3ze5yj42 ; time_e = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN
= 1 ; simulationData -> mData -> mTime . mX = & time_e ; simulationData ->
mData -> mContStates . mN = 6 ; simulationData -> mData -> mContStates . mX =
& rtX . feytd2zvev [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . l1mlsom4no ;
simulationData -> mData -> mModeVector . mN = 5 ; simulationData -> mData ->
mModeVector . mX = & rtDW . hsxy3n0vne [ 0 ] ; tmp = ( ssIsMajorTimeStep (
rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData
-> mData -> mFoundZcEvents = tmp ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS
) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp = ssIsSolverRequestingReset
( rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_f [
0 ] = 0 ; tmp_j [ 0 ] = rtB . e1jqwcx00o [ 0 ] ; tmp_j [ 1 ] = rtB .
e1jqwcx00o [ 1 ] ; tmp_j [ 2 ] = rtB . e1jqwcx00o [ 2 ] ; tmp_j [ 3 ] = rtB .
e1jqwcx00o [ 3 ] ; tmp_f [ 1 ] = 4 ; tmp_j [ 4 ] = rtB . plozcdvjyj [ 0 ] ;
tmp_j [ 5 ] = rtB . plozcdvjyj [ 1 ] ; tmp_j [ 6 ] = rtB . plozcdvjyj [ 2 ] ;
tmp_j [ 7 ] = rtB . plozcdvjyj [ 3 ] ; tmp_f [ 2 ] = 8 ; tmp_j [ 8 ] = rtB .
mm054drprn [ 0 ] ; tmp_j [ 9 ] = rtB . mm054drprn [ 1 ] ; tmp_j [ 10 ] = rtB
. mm054drprn [ 2 ] ; tmp_j [ 11 ] = rtB . mm054drprn [ 3 ] ; tmp_f [ 3 ] = 12
; tmp_j [ 12 ] = rtB . ech2ew1rr2 [ 0 ] ; tmp_j [ 13 ] = rtB . ech2ew1rr2 [ 1
] ; tmp_j [ 14 ] = rtB . ech2ew1rr2 [ 2 ] ; tmp_j [ 15 ] = rtB . ech2ew1rr2 [
3 ] ; tmp_f [ 4 ] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ;
simulationData -> mData -> mInputValues . mX = & tmp_j [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets
. mX = & tmp_f [ 0 ] ; simulationData -> mData -> mDx . mN = 6 ;
simulationData -> mData -> mDx . mX = & _rtXdot -> feytd2zvev [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . lieaetbmrt ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . la3jhngrnl ,
NESL_SIM_FORCINGFUNCTION , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } _rtXdot -> pgtm2y1e0v = ( rtB . olyap2fx01 [ 5 ] - rtX .
pgtm2y1e0v ) * 1000.0 ; simulationData = ( NeslSimulationData * ) rtDW .
gwtjdjy24g ; time_i = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN
= 1 ; simulationData -> mData -> mTime . mX = & time_i ; simulationData ->
mData -> mContStates . mN = 6 ; simulationData -> mData -> mContStates . mX =
& rtX . f5ermfyj2i [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . g3r1cnilme ;
simulationData -> mData -> mModeVector . mN = 5 ; simulationData -> mData ->
mModeVector . mX = & rtDW . dmcndn514o [ 0 ] ; tmp = ( ssIsMajorTimeStep (
rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData
-> mData -> mFoundZcEvents = tmp ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS
) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp = ssIsSolverRequestingReset
( rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_k [
0 ] = 0 ; tmp_c [ 0 ] = rtB . he3hlshzz3 [ 0 ] ; tmp_c [ 1 ] = rtB .
he3hlshzz3 [ 1 ] ; tmp_c [ 2 ] = rtB . he3hlshzz3 [ 2 ] ; tmp_c [ 3 ] = rtB .
he3hlshzz3 [ 3 ] ; tmp_k [ 1 ] = 4 ; tmp_c [ 4 ] = rtB . c1eemeez3i [ 0 ] ;
tmp_c [ 5 ] = rtB . c1eemeez3i [ 1 ] ; tmp_c [ 6 ] = rtB . c1eemeez3i [ 2 ] ;
tmp_c [ 7 ] = rtB . c1eemeez3i [ 3 ] ; tmp_k [ 2 ] = 8 ; tmp_c [ 8 ] = rtB .
n5wwmjhbo3 [ 0 ] ; tmp_c [ 9 ] = rtB . n5wwmjhbo3 [ 1 ] ; tmp_c [ 10 ] = rtB
. n5wwmjhbo3 [ 2 ] ; tmp_c [ 11 ] = rtB . n5wwmjhbo3 [ 3 ] ; tmp_k [ 3 ] = 12
; tmp_c [ 12 ] = rtB . ex1x01f4oc [ 0 ] ; tmp_c [ 13 ] = rtB . ex1x01f4oc [ 1
] ; tmp_c [ 14 ] = rtB . ex1x01f4oc [ 2 ] ; tmp_c [ 15 ] = rtB . ex1x01f4oc [
3 ] ; tmp_k [ 4 ] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ;
simulationData -> mData -> mInputValues . mX = & tmp_c [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets
. mX = & tmp_k [ 0 ] ; simulationData -> mData -> mDx . mN = 6 ;
simulationData -> mData -> mDx . mX = & _rtXdot -> f5ermfyj2i [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . dt5cmcttgx ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . fhthr4gruq ,
NESL_SIM_FORCINGFUNCTION , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } _rtXdot -> gspguq4t1h = ( rtB . olyap2fx01 [ 7 ] - rtX .
gspguq4t1h ) * 1000.0 ; simulationData = ( NeslSimulationData * ) rtDW .
gx5a0stbnw ; time_m = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN
= 1 ; simulationData -> mData -> mTime . mX = & time_m ; simulationData ->
mData -> mContStates . mN = 6 ; simulationData -> mData -> mContStates . mX =
& rtX . atgv4dpb4z [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . l23eqhz4lj ;
simulationData -> mData -> mModeVector . mN = 5 ; simulationData -> mData ->
mModeVector . mX = & rtDW . e5bbdxb5mf [ 0 ] ; tmp = ( ssIsMajorTimeStep (
rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData
-> mData -> mFoundZcEvents = tmp ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS
) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp = ssIsSolverRequestingReset
( rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_n [
0 ] = 0 ; tmp_b [ 0 ] = rtB . ke4jnme1cl [ 0 ] ; tmp_b [ 1 ] = rtB .
ke4jnme1cl [ 1 ] ; tmp_b [ 2 ] = rtB . ke4jnme1cl [ 2 ] ; tmp_b [ 3 ] = rtB .
ke4jnme1cl [ 3 ] ; tmp_n [ 1 ] = 4 ; tmp_b [ 4 ] = rtB . jgkcsd20s3 [ 0 ] ;
tmp_b [ 5 ] = rtB . jgkcsd20s3 [ 1 ] ; tmp_b [ 6 ] = rtB . jgkcsd20s3 [ 2 ] ;
tmp_b [ 7 ] = rtB . jgkcsd20s3 [ 3 ] ; tmp_n [ 2 ] = 8 ; tmp_b [ 8 ] = rtB .
nu0fcm3rf4 [ 0 ] ; tmp_b [ 9 ] = rtB . nu0fcm3rf4 [ 1 ] ; tmp_b [ 10 ] = rtB
. nu0fcm3rf4 [ 2 ] ; tmp_b [ 11 ] = rtB . nu0fcm3rf4 [ 3 ] ; tmp_n [ 3 ] = 12
; tmp_b [ 12 ] = rtB . enbi2t101n [ 0 ] ; tmp_b [ 13 ] = rtB . enbi2t101n [ 1
] ; tmp_b [ 14 ] = rtB . enbi2t101n [ 2 ] ; tmp_b [ 15 ] = rtB . enbi2t101n [
3 ] ; tmp_n [ 4 ] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ;
simulationData -> mData -> mInputValues . mX = & tmp_b [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets
. mX = & tmp_n [ 0 ] ; simulationData -> mData -> mDx . mN = 6 ;
simulationData -> mData -> mDx . mX = & _rtXdot -> atgv4dpb4z [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . h4w0g3bulz ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . mxvpzlsras ,
NESL_SIM_FORCINGFUNCTION , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } } void MdlMassMatrix ( void ) { NeslSimulationData *
simulationData ; real_T time ; boolean_T tmp ; real_T tmp_p [ 16 ] ; int_T
tmp_e [ 5 ] ; real_T * tmp_i ; NeuDiagnosticManager * diagnosticManager ;
NeuDiagnosticTree * diagnosticTree ; int32_T tmp_m ; char * msg ; real_T
time_p ; real_T tmp_g [ 16 ] ; int_T tmp_j [ 5 ] ; real_T time_e ; real_T
tmp_f [ 16 ] ; int_T tmp_c [ 5 ] ; real_T time_i ; real_T tmp_k [ 16 ] ;
int_T tmp_b [ 5 ] ; simulationData = ( NeslSimulationData * ) rtDW .
ox0bnvu31g ; time = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN =
1 ; simulationData -> mData -> mTime . mX = & time ; simulationData -> mData
-> mContStates . mN = 6 ; simulationData -> mData -> mContStates . mX = & rtX
. fwzhxfm2hy [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . cxsjqpuo4e ;
simulationData -> mData -> mModeVector . mN = 5 ; simulationData -> mData ->
mModeVector . mX = & rtDW . gbzd5pugdl [ 0 ] ; tmp = ( ssIsMajorTimeStep (
rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData
-> mData -> mFoundZcEvents = tmp ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS
) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp = ssIsSolverRequestingReset
( rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_e [
0 ] = 0 ; tmp_p [ 0 ] = rtB . mjvmdy05hg [ 0 ] ; tmp_p [ 1 ] = rtB .
mjvmdy05hg [ 1 ] ; tmp_p [ 2 ] = rtB . mjvmdy05hg [ 2 ] ; tmp_p [ 3 ] = rtB .
mjvmdy05hg [ 3 ] ; tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . l0ydipaxdm [ 0 ] ;
tmp_p [ 5 ] = rtB . l0ydipaxdm [ 1 ] ; tmp_p [ 6 ] = rtB . l0ydipaxdm [ 2 ] ;
tmp_p [ 7 ] = rtB . l0ydipaxdm [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB .
kfmkfo20tj [ 0 ] ; tmp_p [ 9 ] = rtB . kfmkfo20tj [ 1 ] ; tmp_p [ 10 ] = rtB
. kfmkfo20tj [ 2 ] ; tmp_p [ 11 ] = rtB . kfmkfo20tj [ 3 ] ; tmp_e [ 3 ] = 12
; tmp_p [ 12 ] = rtB . dp5tl3nrhd [ 0 ] ; tmp_p [ 13 ] = rtB . dp5tl3nrhd [ 1
] ; tmp_p [ 14 ] = rtB . dp5tl3nrhd [ 2 ] ; tmp_p [ 15 ] = rtB . dp5tl3nrhd [
3 ] ; tmp_e [ 4 ] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ;
simulationData -> mData -> mInputValues . mX = & tmp_p [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets
. mX = & tmp_e [ 0 ] ; tmp_i = rtMassMatrix . pr ; tmp_i =
double_pointer_shift ( tmp_i , rtDW . kaatgekvbb ) ; simulationData -> mData
-> mMassMatrixPr . mN = 4 ; simulationData -> mData -> mMassMatrixPr . mX =
tmp_i ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . dhy2lo1oyd ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_m = ne_simulator_method ( ( NeslSimulator * ) rtDW . a3jz1vhf4h ,
NESL_SIM_MASSMATRIX , simulationData , diagnosticManager ) ; if ( tmp_m != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . bj3ze5yj42 ; time_p =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_p ; simulationData -> mData -> mContStates .
mN = 6 ; simulationData -> mData -> mContStates . mX = & rtX . feytd2zvev [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . l1mlsom4no ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
hsxy3n0vne [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_j [ 0 ] = 0 ; tmp_g [ 0 ] = rtB .
e1jqwcx00o [ 0 ] ; tmp_g [ 1 ] = rtB . e1jqwcx00o [ 1 ] ; tmp_g [ 2 ] = rtB .
e1jqwcx00o [ 2 ] ; tmp_g [ 3 ] = rtB . e1jqwcx00o [ 3 ] ; tmp_j [ 1 ] = 4 ;
tmp_g [ 4 ] = rtB . plozcdvjyj [ 0 ] ; tmp_g [ 5 ] = rtB . plozcdvjyj [ 1 ] ;
tmp_g [ 6 ] = rtB . plozcdvjyj [ 2 ] ; tmp_g [ 7 ] = rtB . plozcdvjyj [ 3 ] ;
tmp_j [ 2 ] = 8 ; tmp_g [ 8 ] = rtB . mm054drprn [ 0 ] ; tmp_g [ 9 ] = rtB .
mm054drprn [ 1 ] ; tmp_g [ 10 ] = rtB . mm054drprn [ 2 ] ; tmp_g [ 11 ] = rtB
. mm054drprn [ 3 ] ; tmp_j [ 3 ] = 12 ; tmp_g [ 12 ] = rtB . ech2ew1rr2 [ 0 ]
; tmp_g [ 13 ] = rtB . ech2ew1rr2 [ 1 ] ; tmp_g [ 14 ] = rtB . ech2ew1rr2 [ 2
] ; tmp_g [ 15 ] = rtB . ech2ew1rr2 [ 3 ] ; tmp_j [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_g [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_j [ 0 ] ; tmp_i =
rtMassMatrix . pr ; tmp_i = double_pointer_shift ( tmp_i , rtDW . lsqosgc1dj
) ; simulationData -> mData -> mMassMatrixPr . mN = 4 ; simulationData ->
mData -> mMassMatrixPr . mX = tmp_i ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . lieaetbmrt ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_m =
ne_simulator_method ( ( NeslSimulator * ) rtDW . la3jhngrnl ,
NESL_SIM_MASSMATRIX , simulationData , diagnosticManager ) ; if ( tmp_m != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . gwtjdjy24g ; time_e =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_e ; simulationData -> mData -> mContStates .
mN = 6 ; simulationData -> mData -> mContStates . mX = & rtX . f5ermfyj2i [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . g3r1cnilme ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
dmcndn514o [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_c [ 0 ] = 0 ; tmp_f [ 0 ] = rtB .
he3hlshzz3 [ 0 ] ; tmp_f [ 1 ] = rtB . he3hlshzz3 [ 1 ] ; tmp_f [ 2 ] = rtB .
he3hlshzz3 [ 2 ] ; tmp_f [ 3 ] = rtB . he3hlshzz3 [ 3 ] ; tmp_c [ 1 ] = 4 ;
tmp_f [ 4 ] = rtB . c1eemeez3i [ 0 ] ; tmp_f [ 5 ] = rtB . c1eemeez3i [ 1 ] ;
tmp_f [ 6 ] = rtB . c1eemeez3i [ 2 ] ; tmp_f [ 7 ] = rtB . c1eemeez3i [ 3 ] ;
tmp_c [ 2 ] = 8 ; tmp_f [ 8 ] = rtB . n5wwmjhbo3 [ 0 ] ; tmp_f [ 9 ] = rtB .
n5wwmjhbo3 [ 1 ] ; tmp_f [ 10 ] = rtB . n5wwmjhbo3 [ 2 ] ; tmp_f [ 11 ] = rtB
. n5wwmjhbo3 [ 3 ] ; tmp_c [ 3 ] = 12 ; tmp_f [ 12 ] = rtB . ex1x01f4oc [ 0 ]
; tmp_f [ 13 ] = rtB . ex1x01f4oc [ 1 ] ; tmp_f [ 14 ] = rtB . ex1x01f4oc [ 2
] ; tmp_f [ 15 ] = rtB . ex1x01f4oc [ 3 ] ; tmp_c [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_f [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_c [ 0 ] ; tmp_i =
rtMassMatrix . pr ; tmp_i = double_pointer_shift ( tmp_i , rtDW . fje1tm10vl
) ; simulationData -> mData -> mMassMatrixPr . mN = 4 ; simulationData ->
mData -> mMassMatrixPr . mX = tmp_i ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . dt5cmcttgx ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_m =
ne_simulator_method ( ( NeslSimulator * ) rtDW . fhthr4gruq ,
NESL_SIM_MASSMATRIX , simulationData , diagnosticManager ) ; if ( tmp_m != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . gx5a0stbnw ; time_i =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_i ; simulationData -> mData -> mContStates .
mN = 6 ; simulationData -> mData -> mContStates . mX = & rtX . atgv4dpb4z [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . l23eqhz4lj ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
e5bbdxb5mf [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_b [ 0 ] = 0 ; tmp_k [ 0 ] = rtB .
ke4jnme1cl [ 0 ] ; tmp_k [ 1 ] = rtB . ke4jnme1cl [ 1 ] ; tmp_k [ 2 ] = rtB .
ke4jnme1cl [ 2 ] ; tmp_k [ 3 ] = rtB . ke4jnme1cl [ 3 ] ; tmp_b [ 1 ] = 4 ;
tmp_k [ 4 ] = rtB . jgkcsd20s3 [ 0 ] ; tmp_k [ 5 ] = rtB . jgkcsd20s3 [ 1 ] ;
tmp_k [ 6 ] = rtB . jgkcsd20s3 [ 2 ] ; tmp_k [ 7 ] = rtB . jgkcsd20s3 [ 3 ] ;
tmp_b [ 2 ] = 8 ; tmp_k [ 8 ] = rtB . nu0fcm3rf4 [ 0 ] ; tmp_k [ 9 ] = rtB .
nu0fcm3rf4 [ 1 ] ; tmp_k [ 10 ] = rtB . nu0fcm3rf4 [ 2 ] ; tmp_k [ 11 ] = rtB
. nu0fcm3rf4 [ 3 ] ; tmp_b [ 3 ] = 12 ; tmp_k [ 12 ] = rtB . enbi2t101n [ 0 ]
; tmp_k [ 13 ] = rtB . enbi2t101n [ 1 ] ; tmp_k [ 14 ] = rtB . enbi2t101n [ 2
] ; tmp_k [ 15 ] = rtB . enbi2t101n [ 3 ] ; tmp_b [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_k [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_b [ 0 ] ; tmp_i =
rtMassMatrix . pr ; tmp_i = double_pointer_shift ( tmp_i , rtDW . e5efcpoufx
) ; simulationData -> mData -> mMassMatrixPr . mN = 4 ; simulationData ->
mData -> mMassMatrixPr . mX = tmp_i ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . h4w0g3bulz ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_m =
ne_simulator_method ( ( NeslSimulator * ) rtDW . mxvpzlsras ,
NESL_SIM_MASSMATRIX , simulationData , diagnosticManager ) ; if ( tmp_m != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlZeroCrossings ( void ) { NeslSimulationData * simulationData
; real_T time ; boolean_T tmp ; real_T tmp_p [ 16 ] ; int_T tmp_e [ 5 ] ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; char * msg ; real_T time_p ; real_T tmp_i [ 16 ] ; int_T tmp_m [ 5 ] ;
real_T time_e ; real_T tmp_g [ 16 ] ; int_T tmp_j [ 5 ] ; real_T time_i ;
real_T tmp_f [ 16 ] ; int_T tmp_c [ 5 ] ; int32_T tmp_k ; ZCV * _rtZCSV ;
_rtZCSV = ( ( ZCV * ) ssGetSolverZcSignalVector ( rtS ) ) ; _rtZCSV ->
p4k4gdmo4v = rtB . gpl4kzhqur - rtP . PIDController2_UpperSaturationLimit ;
_rtZCSV -> g5w0nxlif5 = rtB . gpl4kzhqur - rtP .
PIDController2_LowerSaturationLimit ; _rtZCSV -> otdo313mxl = rtB .
gco3jzxyom ; _rtZCSV -> cnvmscutud = rtB . etnxfpjznh - rtP . u255_UpperSat ;
_rtZCSV -> jee5ahbk1h = rtB . etnxfpjznh - rtP . u255_LowerSat ; _rtZCSV ->
hdjjin2d3x = rtB . krtbfhbtm0 - rtP . PIDController3_UpperSaturationLimit ;
_rtZCSV -> iapftjzhuf = rtB . krtbfhbtm0 - rtP .
PIDController3_LowerSaturationLimit ; _rtZCSV -> kvv3bmzij1 = rtB .
j0gqbgko2i ; _rtZCSV -> gu0dhz5gwt = rtB . oknip1aipe - rtP .
u255_UpperSat_cy5lmsdzoz ; _rtZCSV -> lfrityh43z = rtB . oknip1aipe - rtP .
u255_LowerSat_asbda50lue ; _rtZCSV -> ksx34bpgpt = rtB . gpl4kzhqur - rtP .
PIDController2_LowerSaturationLimit ; _rtZCSV -> hkpsmybqcd = rtB .
gpl4kzhqur - rtP . PIDController2_UpperSaturationLimit ; _rtZCSV ->
ksy42hggvb = rtB . a0sz2tfduf - rtB . mt5eefv21t ; _rtZCSV -> ebfpdyxazs =
rtB . mt5eefv21t ; _rtZCSV -> n1depw4tx1 = rtB . fmmqt4ysyf ; _rtZCSV ->
ixgove5zin = rtB . krtbfhbtm0 - rtP . PIDController3_LowerSaturationLimit ;
_rtZCSV -> hwwgzbshwl = rtB . krtbfhbtm0 - rtP .
PIDController3_UpperSaturationLimit ; _rtZCSV -> f4dqhr5sdb = rtB .
d30bf04ldl - rtB . hjectoyfy3 ; _rtZCSV -> ggscdzj5n0 = rtB . hjectoyfy3 ;
_rtZCSV -> nr0tznxbkt = rtB . bvdhbj54q0 ; simulationData = (
NeslSimulationData * ) rtDW . ox0bnvu31g ; time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 6 ;
simulationData -> mData -> mContStates . mX = & rtX . fwzhxfm2hy [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . cxsjqpuo4e ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
gbzd5pugdl [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB .
mjvmdy05hg [ 0 ] ; tmp_p [ 1 ] = rtB . mjvmdy05hg [ 1 ] ; tmp_p [ 2 ] = rtB .
mjvmdy05hg [ 2 ] ; tmp_p [ 3 ] = rtB . mjvmdy05hg [ 3 ] ; tmp_e [ 1 ] = 4 ;
tmp_p [ 4 ] = rtB . l0ydipaxdm [ 0 ] ; tmp_p [ 5 ] = rtB . l0ydipaxdm [ 1 ] ;
tmp_p [ 6 ] = rtB . l0ydipaxdm [ 2 ] ; tmp_p [ 7 ] = rtB . l0ydipaxdm [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . kfmkfo20tj [ 0 ] ; tmp_p [ 9 ] = rtB .
kfmkfo20tj [ 1 ] ; tmp_p [ 10 ] = rtB . kfmkfo20tj [ 2 ] ; tmp_p [ 11 ] = rtB
. kfmkfo20tj [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = rtB . dp5tl3nrhd [ 0 ]
; tmp_p [ 13 ] = rtB . dp5tl3nrhd [ 1 ] ; tmp_p [ 14 ] = rtB . dp5tl3nrhd [ 2
] ; tmp_p [ 15 ] = rtB . dp5tl3nrhd [ 3 ] ; tmp_e [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mNonSampledZCs . mN = 5 ; simulationData -> mData
-> mNonSampledZCs . mX = & _rtZCSV -> gjetlqnik1 ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . dhy2lo1oyd ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_k =
ne_simulator_method ( ( NeslSimulator * ) rtDW . a3jz1vhf4h ,
NESL_SIM_ZEROCROSSINGS , simulationData , diagnosticManager ) ; if ( tmp_k !=
0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . bj3ze5yj42 ; time_p =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_p ; simulationData -> mData -> mContStates .
mN = 6 ; simulationData -> mData -> mContStates . mX = & rtX . feytd2zvev [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . l1mlsom4no ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
hsxy3n0vne [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_m [ 0 ] = 0 ; tmp_i [ 0 ] = rtB .
e1jqwcx00o [ 0 ] ; tmp_i [ 1 ] = rtB . e1jqwcx00o [ 1 ] ; tmp_i [ 2 ] = rtB .
e1jqwcx00o [ 2 ] ; tmp_i [ 3 ] = rtB . e1jqwcx00o [ 3 ] ; tmp_m [ 1 ] = 4 ;
tmp_i [ 4 ] = rtB . plozcdvjyj [ 0 ] ; tmp_i [ 5 ] = rtB . plozcdvjyj [ 1 ] ;
tmp_i [ 6 ] = rtB . plozcdvjyj [ 2 ] ; tmp_i [ 7 ] = rtB . plozcdvjyj [ 3 ] ;
tmp_m [ 2 ] = 8 ; tmp_i [ 8 ] = rtB . mm054drprn [ 0 ] ; tmp_i [ 9 ] = rtB .
mm054drprn [ 1 ] ; tmp_i [ 10 ] = rtB . mm054drprn [ 2 ] ; tmp_i [ 11 ] = rtB
. mm054drprn [ 3 ] ; tmp_m [ 3 ] = 12 ; tmp_i [ 12 ] = rtB . ech2ew1rr2 [ 0 ]
; tmp_i [ 13 ] = rtB . ech2ew1rr2 [ 1 ] ; tmp_i [ 14 ] = rtB . ech2ew1rr2 [ 2
] ; tmp_i [ 15 ] = rtB . ech2ew1rr2 [ 3 ] ; tmp_m [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_i [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_m [ 0 ] ;
simulationData -> mData -> mNonSampledZCs . mN = 5 ; simulationData -> mData
-> mNonSampledZCs . mX = & _rtZCSV -> mgyjxjjfey ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . lieaetbmrt ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_k =
ne_simulator_method ( ( NeslSimulator * ) rtDW . la3jhngrnl ,
NESL_SIM_ZEROCROSSINGS , simulationData , diagnosticManager ) ; if ( tmp_k !=
0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . gwtjdjy24g ; time_e =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_e ; simulationData -> mData -> mContStates .
mN = 6 ; simulationData -> mData -> mContStates . mX = & rtX . f5ermfyj2i [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . g3r1cnilme ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
dmcndn514o [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_j [ 0 ] = 0 ; tmp_g [ 0 ] = rtB .
he3hlshzz3 [ 0 ] ; tmp_g [ 1 ] = rtB . he3hlshzz3 [ 1 ] ; tmp_g [ 2 ] = rtB .
he3hlshzz3 [ 2 ] ; tmp_g [ 3 ] = rtB . he3hlshzz3 [ 3 ] ; tmp_j [ 1 ] = 4 ;
tmp_g [ 4 ] = rtB . c1eemeez3i [ 0 ] ; tmp_g [ 5 ] = rtB . c1eemeez3i [ 1 ] ;
tmp_g [ 6 ] = rtB . c1eemeez3i [ 2 ] ; tmp_g [ 7 ] = rtB . c1eemeez3i [ 3 ] ;
tmp_j [ 2 ] = 8 ; tmp_g [ 8 ] = rtB . n5wwmjhbo3 [ 0 ] ; tmp_g [ 9 ] = rtB .
n5wwmjhbo3 [ 1 ] ; tmp_g [ 10 ] = rtB . n5wwmjhbo3 [ 2 ] ; tmp_g [ 11 ] = rtB
. n5wwmjhbo3 [ 3 ] ; tmp_j [ 3 ] = 12 ; tmp_g [ 12 ] = rtB . ex1x01f4oc [ 0 ]
; tmp_g [ 13 ] = rtB . ex1x01f4oc [ 1 ] ; tmp_g [ 14 ] = rtB . ex1x01f4oc [ 2
] ; tmp_g [ 15 ] = rtB . ex1x01f4oc [ 3 ] ; tmp_j [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_g [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_j [ 0 ] ;
simulationData -> mData -> mNonSampledZCs . mN = 5 ; simulationData -> mData
-> mNonSampledZCs . mX = & _rtZCSV -> csr2uzq2hb ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . dt5cmcttgx ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_k =
ne_simulator_method ( ( NeslSimulator * ) rtDW . fhthr4gruq ,
NESL_SIM_ZEROCROSSINGS , simulationData , diagnosticManager ) ; if ( tmp_k !=
0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } simulationData = ( NeslSimulationData * ) rtDW . gx5a0stbnw ; time_i =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_i ; simulationData -> mData -> mContStates .
mN = 6 ; simulationData -> mData -> mContStates . mX = & rtX . atgv4dpb4z [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . l23eqhz4lj ; simulationData -> mData ->
mModeVector . mN = 5 ; simulationData -> mData -> mModeVector . mX = & rtDW .
e5bbdxb5mf [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_c [ 0 ] = 0 ; tmp_f [ 0 ] = rtB .
ke4jnme1cl [ 0 ] ; tmp_f [ 1 ] = rtB . ke4jnme1cl [ 1 ] ; tmp_f [ 2 ] = rtB .
ke4jnme1cl [ 2 ] ; tmp_f [ 3 ] = rtB . ke4jnme1cl [ 3 ] ; tmp_c [ 1 ] = 4 ;
tmp_f [ 4 ] = rtB . jgkcsd20s3 [ 0 ] ; tmp_f [ 5 ] = rtB . jgkcsd20s3 [ 1 ] ;
tmp_f [ 6 ] = rtB . jgkcsd20s3 [ 2 ] ; tmp_f [ 7 ] = rtB . jgkcsd20s3 [ 3 ] ;
tmp_c [ 2 ] = 8 ; tmp_f [ 8 ] = rtB . nu0fcm3rf4 [ 0 ] ; tmp_f [ 9 ] = rtB .
nu0fcm3rf4 [ 1 ] ; tmp_f [ 10 ] = rtB . nu0fcm3rf4 [ 2 ] ; tmp_f [ 11 ] = rtB
. nu0fcm3rf4 [ 3 ] ; tmp_c [ 3 ] = 12 ; tmp_f [ 12 ] = rtB . enbi2t101n [ 0 ]
; tmp_f [ 13 ] = rtB . enbi2t101n [ 1 ] ; tmp_f [ 14 ] = rtB . enbi2t101n [ 2
] ; tmp_f [ 15 ] = rtB . enbi2t101n [ 3 ] ; tmp_c [ 4 ] = 16 ; simulationData
-> mData -> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues
. mX = & tmp_f [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_c [ 0 ] ;
simulationData -> mData -> mNonSampledZCs . mN = 5 ; simulationData -> mData
-> mNonSampledZCs . mX = & _rtZCSV -> al2ypdiibi ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . h4w0g3bulz ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_k =
ne_simulator_method ( ( NeslSimulator * ) rtDW . mxvpzlsras ,
NESL_SIM_ZEROCROSSINGS , simulationData , diagnosticManager ) ; if ( tmp_k !=
0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlTerminate ( void ) { neu_destroy_diagnostic_manager ( (
NeuDiagnosticManager * ) rtDW . fb2s2iht4c ) ; nesl_destroy_simulation_data (
( NeslSimulationData * ) rtDW . hwxj03owez ) ; nesl_erase_simulator (
"Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration_1" ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . psm45qaiki
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . hfzjpix1m2
) ; nesl_erase_simulator (
"Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration_1" ) ; rt_FREE (
rtDW . nxn4r2j4ni . RSimInfoPtr ) ; neu_destroy_diagnostic_manager ( (
NeuDiagnosticManager * ) rtDW . dhy2lo1oyd ) ; nesl_destroy_simulation_data (
( NeslSimulationData * ) rtDW . ox0bnvu31g ) ; nesl_erase_simulator (
"Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration_3" ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . eyjwwignxd
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . am2r0bghwi
) ; nesl_erase_simulator (
"Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration_3" ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . lieaetbmrt
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . bj3ze5yj42
) ; nesl_erase_simulator (
"Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration_5" ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . npoaqa0aen
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . j23zdmwkkl
) ; nesl_erase_simulator (
"Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration_5" ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . dt5cmcttgx
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . gwtjdjy24g
) ; nesl_erase_simulator (
"Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration_4" ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . pb3ij5lml1
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . p4tamc0yv4
) ; nesl_erase_simulator (
"Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration_4" ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . h4w0g3bulz
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . gx5a0stbnw
) ; nesl_erase_simulator (
"Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration_2" ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . p5u2wq1dfl
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . isu1bsjo01
) ; nesl_erase_simulator (
"Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration_2" ) ; { if (
rtDW . cizvyg3haq . AQHandles [ 0 ] ) { sdiTerminateStreaming ( & rtDW .
cizvyg3haq . AQHandles [ 0 ] ) ; } if ( rtDW . cizvyg3haq . AQHandles [ 1 ] )
{ sdiTerminateStreaming ( & rtDW . cizvyg3haq . AQHandles [ 1 ] ) ; } if (
rtDW . cizvyg3haq . AQHandles [ 2 ] ) { sdiTerminateStreaming ( & rtDW .
cizvyg3haq . AQHandles [ 2 ] ) ; } if ( rtDW . cizvyg3haq . AQHandles [ 3 ] )
{ sdiTerminateStreaming ( & rtDW . cizvyg3haq . AQHandles [ 3 ] ) ; } if (
rtDW . cizvyg3haq . SlioLTF ) { rtwDestructAccessorPointer ( rtDW .
cizvyg3haq . SlioLTF ) ; } } { if ( rtDW . o4zjtouqv1 . AQHandles [ 0 ] ) {
sdiTerminateStreaming ( & rtDW . o4zjtouqv1 . AQHandles [ 0 ] ) ; } if ( rtDW
. o4zjtouqv1 . AQHandles [ 1 ] ) { sdiTerminateStreaming ( & rtDW .
o4zjtouqv1 . AQHandles [ 1 ] ) ; } if ( rtDW . o4zjtouqv1 . AQHandles [ 2 ] )
{ sdiTerminateStreaming ( & rtDW . o4zjtouqv1 . AQHandles [ 2 ] ) ; } if (
rtDW . o4zjtouqv1 . SlioLTF ) { rtwDestructAccessorPointer ( rtDW .
o4zjtouqv1 . SlioLTF ) ; } } { if ( rtDW . kk11noexzo . AQHandles ) {
sdiTerminateStreaming ( & rtDW . kk11noexzo . AQHandles ) ; } if ( rtDW .
kk11noexzo . SlioLTF ) { rtwDestructAccessorPointer ( rtDW . kk11noexzo .
SlioLTF ) ; } } { if ( rtDW . otmjf3k0yc . AQHandles ) {
sdiTerminateStreaming ( & rtDW . otmjf3k0yc . AQHandles ) ; } if ( rtDW .
otmjf3k0yc . SlioLTF ) { rtwDestructAccessorPointer ( rtDW . otmjf3k0yc .
SlioLTF ) ; } } { if ( rtDW . kpxx2wlm0j . AQHandles ) {
sdiTerminateStreaming ( & rtDW . kpxx2wlm0j . AQHandles ) ; } if ( rtDW .
kpxx2wlm0j . SlioLTF ) { rtwDestructAccessorPointer ( rtDW . kpxx2wlm0j .
SlioLTF ) ; } } { if ( rtDW . hhil12yx2a . AQHandles ) {
sdiTerminateStreaming ( & rtDW . hhil12yx2a . AQHandles ) ; } if ( rtDW .
hhil12yx2a . SlioLTF ) { rtwDestructAccessorPointer ( rtDW . hhil12yx2a .
SlioLTF ) ; } } if ( rt_slioCatalogue ( ) != ( NULL ) ) { void * *
slioCatalogueAddr = rt_slioCatalogueAddr ( ) ; rtwSaveDatasetsToMatFile (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) ,
rt_GetMatSigstreamLoggingFileName ( ) ) ; rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = NULL ; } } void
MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 40 ) ;
ssSetNumPeriodicContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU (
rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ; ssSetNumSampleTimes ( rtS ,
4 ) ; ssSetNumBlocks ( rtS , 385 ) ; ssSetNumBlockIO ( rtS , 105 ) ;
ssSetNumBlockParams ( rtS , 145 ) ; } void MdlInitializeSampleTimes ( void )
{ ssSetSampleTime ( rtS , 0 , 0.0 ) ; ssSetSampleTime ( rtS , 1 , 0.0 ) ;
ssSetSampleTime ( rtS , 2 , 0.001 ) ; ssSetSampleTime ( rtS , 3 , 0.01 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; ssSetOffsetTime ( rtS , 1 , 1.0 ) ;
ssSetOffsetTime ( rtS , 2 , 0.0 ) ; ssSetOffsetTime ( rtS , 3 , 0.0 ) ; }
void raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 , 308429821U ) ;
ssSetChecksumVal ( rtS , 1 , 3914746239U ) ; ssSetChecksumVal ( rtS , 2 ,
165390107U ) ; ssSetChecksumVal ( rtS , 3 , 1326075722U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( void ) { static struct _ssMdlInfo mdlInfo
; ( void ) memset ( ( char * ) rtS , 0 , sizeof ( SimStruct ) ) ; ( void )
memset ( ( char * ) & mdlInfo , 0 , sizeof ( struct _ssMdlInfo ) ) ;
ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } { real_T * x = ( real_T * ) & rtX ; ssSetContStates ( rtS , x ) ;
( void ) memset ( ( void * ) x , 0 , sizeof ( X ) ) ; } { void * dwork = (
void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork ,
0 , sizeof ( DW ) ) ; } { rtDW . kaatgekvbb = 13 ; rtDW . lsqosgc1dj = 18 ;
rtDW . fje1tm10vl = 23 ; rtDW . e5efcpoufx = 28 ; } { static
DataTypeTransInfo dtInfo ; ( void ) memset ( ( char_T * ) & dtInfo , 0 ,
sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo .
numDataTypes = 14 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo
. dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = &
rtBTransTable ; dtInfo . PTransTable = & rtPTransTable ; dtInfo .
dataTypeInfoTable = rtDataTypeInfoTable ; }
Aluminum_Robot_ARM_InitializeDataMapInfo ( ) ; ssSetIsRapidAcceleratorActive
( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ; ssSetVersion ( rtS ,
SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS , "Aluminum_Robot_ARM" ) ;
ssSetPath ( rtS , "Aluminum_Robot_ARM" ) ; ssSetTStart ( rtS , 0.0 ) ;
ssSetTFinal ( rtS , 20.0 ) ; { static RTWLogInfo rt_DataLoggingInfo ;
rt_DataLoggingInfo . loggingInterval = NULL ; ssSetRTWLogInfo ( rtS , &
rt_DataLoggingInfo ) ; } { rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) ,
( NULL ) ) ; rtliSetLogXSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS , & statesInfo2 )
; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssSolverInfo slvrInfo ; static struct _ssSFcnModelMethods3 mdlMethods3 ;
static struct _ssSFcnModelMethods2 mdlMethods2 ; static boolean_T
contStatesDisabled [ 40 ] ; static real_T absTol [ 40 ] = { 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 } ; static uint8_T
absTolControl [ 40 ] = { 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U } ;
static uint8_T zcAttributes [ 40 ] = { ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) ,
( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P
| ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P
) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , (
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z
| ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N
| ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P
| ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P
) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , (
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z
| ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N
| ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P
| ZC_EVENT_N2P ) } ; static ssNonContDerivSigInfo nonContDerivSigInfo [ 10 ]
= { { 1 * sizeof ( real_T ) , ( char * ) ( & rtB . f5abzmvimg ) , ( NULL ) }
, { 1 * sizeof ( boolean_T ) , ( char * ) ( & rtB . czs44yka0h ) , ( NULL ) }
, { 1 * sizeof ( boolean_T ) , ( char * ) ( & rtB . jkg3quvkxc ) , ( NULL ) }
, { 1 * sizeof ( real_T ) , ( char * ) ( & rtB . ipyiynxjfh ) , ( NULL ) } ,
{ 1 * sizeof ( real_T ) , ( char * ) ( & rtB . d2pifgecao ) , ( NULL ) } , {
1 * sizeof ( real_T ) , ( char * ) ( & rtB . hvq1hssahi ) , ( NULL ) } , { 1
* sizeof ( real_T ) , ( char * ) ( & rtB . giapxchzsc ) , ( NULL ) } , { 1 *
sizeof ( real_T ) , ( char * ) ( & rtB . kia1ippuen ) , ( NULL ) } , { 1 *
sizeof ( real_T ) , ( char * ) ( & rtB . fpfaubmnjj ) , ( NULL ) } , { 1 *
sizeof ( real_T ) , ( char * ) ( & rtB . drh4o4lsrm ) , ( NULL ) } } ;
ssSetSolverRelTol ( rtS , 0.001 ) ; ssSetStepSize ( rtS , 0.0 ) ;
ssSetMinStepSize ( rtS , 0.0 ) ; ssSetMaxNumMinSteps ( rtS , - 1 ) ;
ssSetMinStepViolatedError ( rtS , 0 ) ; ssSetMaxStepSize ( rtS , 0.001 ) ;
ssSetSolverMaxOrder ( rtS , - 1 ) ; ssSetSolverRefineFactor ( rtS , 1 ) ;
ssSetOutputTimes ( rtS , ( NULL ) ) ; ssSetNumOutputTimes ( rtS , 0 ) ;
ssSetOutputTimesOnly ( rtS , 0 ) ; ssSetOutputTimesIndex ( rtS , 0 ) ;
ssSetZCCacheNeedsReset ( rtS , 1 ) ; ssSetDerivCacheNeedsReset ( rtS , 0 ) ;
ssSetNumNonContDerivSigInfos ( rtS , 10 ) ; ssSetNonContDerivSigInfos ( rtS ,
nonContDerivSigInfo ) ; ssSetSolverInfo ( rtS , & slvrInfo ) ;
ssSetSolverName ( rtS , "ode23t" ) ; ssSetVariableStepSolver ( rtS , 1 ) ;
ssSetSolverConsistencyChecking ( rtS , 0 ) ; ssSetSolverAdaptiveZcDetection (
rtS , 0 ) ; ssSetSolverRobustResetMethod ( rtS , 0 ) ;
_ssSetSolverUpdateJacobianAtReset ( rtS , true ) ; ssSetAbsTolVector ( rtS ,
absTol ) ; ssSetAbsTolControlVector ( rtS , absTolControl ) ;
ssSetSolverAbsTol_Obsolete ( rtS , absTol ) ;
ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl ) ;
ssSetSolverStateProjection ( rtS , 1 ) ; ( void ) memset ( ( void * ) &
mdlMethods2 , 0 , sizeof ( mdlMethods2 ) ) ; ssSetModelMethods2 ( rtS , &
mdlMethods2 ) ; ( void ) memset ( ( void * ) & mdlMethods3 , 0 , sizeof (
mdlMethods3 ) ) ; ssSetModelMethods3 ( rtS , & mdlMethods3 ) ;
ssSetModelProjection ( rtS , MdlProjection ) ; ssSetMassMatrixType ( rtS , (
ssMatrixType ) 1 ) ; ssSetMassMatrixNzMax ( rtS , 32 ) ; ssSetModelMassMatrix
( rtS , MdlMassMatrix ) ; ssSetModelForcingFunction ( rtS ,
MdlForcingFunction ) ; ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 1 )
; ssSetSolverMassMatrixNzMax ( rtS , 32 ) ; ssSetModelOutputs ( rtS ,
MdlOutputs ) ; ssSetModelLogData ( rtS , rt_UpdateTXYLogVars ) ;
ssSetModelLogDataIfInInterval ( rtS , rt_UpdateTXXFYLogVars ) ;
ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetModelDerivatives ( rtS ,
MdlDerivatives ) ; ssSetSolverZcSignalAttrib ( rtS , zcAttributes ) ;
ssSetSolverNumZcSignals ( rtS , 40 ) ; ssSetModelZeroCrossings ( rtS ,
MdlZeroCrossings ) ; ssSetSolverConsecutiveZCsStepRelTol ( rtS ,
2.8421709430404007E-13 ) ; ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ;
ssSetSolverConsecutiveZCsError ( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic (
rtS , 1 ) ; ssSetSolverIgnoredZcDiagnostic ( rtS , 1 ) ;
ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ;
ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid ( rtS , INT_MIN )
; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 40 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; { int_T
* ir = rtMassMatrix . ir ; int_T * jc = rtMassMatrix . jc ; real_T * pr =
rtMassMatrix . pr ; ssSetMassMatrixIr ( rtS , ir ) ; ssSetMassMatrixJc ( rtS
, jc ) ; ssSetMassMatrixPr ( rtS , pr ) ; ( void ) memset ( ( void * ) ir , 0
, 32 * sizeof ( int_T ) ) ; ( void ) memset ( ( void * ) jc , 0 , ( 40 + 1 )
* sizeof ( int_T ) ) ; ( void ) memset ( ( void * ) pr , 0 , 32 * sizeof (
real_T ) ) ; } } ssSetChecksumVal ( rtS , 0 , 308429821U ) ; ssSetChecksumVal
( rtS , 1 , 3914746239U ) ; ssSetChecksumVal ( rtS , 2 , 165390107U ) ;
ssSetChecksumVal ( rtS , 3 , 1326075722U ) ; { static const sysRanDType
rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo
; static const sysRanDType * systemRan [ 1 ] ; gblRTWExtModeInfo = &
rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; rteiSetModelMappingInfoPtr (
ssGetRTWExtModeInfo ( rtS ) , & ssGetModelMappingInfo ( rtS ) ) ;
rteiSetChecksumsPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetChecksums ( rtS ) )
; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetTPtr ( rtS ) ) ; } return
rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 4 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID4 ( tid ) ; }
