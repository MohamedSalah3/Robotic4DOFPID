#include "__cf_Aluminum_Robot_ARM.h"
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Aluminum_Robot_ARM_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "Aluminum_Robot_ARM.h"
#include "Aluminum_Robot_ARM_capi.h"
#include "Aluminum_Robot_ARM_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"Aluminum_Robot_ARM/Manual Switch" ) , TARGET_STRING ( "tREF" ) , 0 , 0 , 0 ,
0 , 0 } , { 1 , 0 , TARGET_STRING ( "Aluminum_Robot_ARM/Manual Switch" ) ,
TARGET_STRING ( "bREF" ) , 0 , 0 , 0 , 0 , 0 } , { 2 , 0 , TARGET_STRING (
"Aluminum_Robot_ARM/Manual Switch" ) , TARGET_STRING ( "fREF" ) , 0 , 0 , 0 ,
0 , 0 } , { 3 , 0 , TARGET_STRING ( "Aluminum_Robot_ARM/Manual Switch" ) ,
TARGET_STRING ( "wREF" ) , 0 , 0 , 0 , 0 , 0 } , { 4 , 0 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0
, 0 } , { 5 , 0 , TARGET_STRING ( "Aluminum_Robot_ARM/Controller/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 6 , 0 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/Gain10" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 1 } , { 7 , 0 , TARGET_STRING ( "Aluminum_Robot_ARM/Controller/Gain11" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 8 , 0 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/Gain2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 0 } , { 9 , 0 , TARGET_STRING ( "Aluminum_Robot_ARM/Controller/Gain3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 10 , 0 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/Gain4" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 0 } , { 11 , 0 , TARGET_STRING ( "Aluminum_Robot_ARM/Controller/Gain5" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 12 , 0 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/Gain6" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 1 } , { 13 , 0 , TARGET_STRING ( "Aluminum_Robot_ARM/Controller/Gain7" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 14 , 0 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/Gain8" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 0 } , { 15 , 0 , TARGET_STRING ( "Aluminum_Robot_ARM/Controller/Gain9" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 16 , 0 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/Sum1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0
, 0 } , { 17 , 0 , TARGET_STRING ( "Aluminum_Robot_ARM/Controller/Sum2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 18 , 0 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/Sum3" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0
, 0 } , { 19 , 0 , TARGET_STRING ( "Aluminum_Robot_ARM/Controller/Sum4" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 20 , 0 , TARGET_STRING (
"Aluminum_Robot_ARM/Setpoint Angles/Gain" ) , TARGET_STRING ( "tREF" ) , 0 ,
0 , 0 , 0 , 1 } , { 21 , 0 , TARGET_STRING (
"Aluminum_Robot_ARM/Setpoint Angles/Gain1" ) , TARGET_STRING ( "bREF" ) , 0 ,
0 , 0 , 0 , 1 } , { 22 , 0 , TARGET_STRING (
"Aluminum_Robot_ARM/Setpoint Angles/Gain2" ) , TARGET_STRING ( "fREF" ) , 0 ,
0 , 0 , 0 , 1 } , { 23 , 0 , TARGET_STRING (
"Aluminum_Robot_ARM/Setpoint Angles/Gain3" ) , TARGET_STRING ( "wREF" ) , 0 ,
0 , 0 , 0 , 1 } , { 24 , 0 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/Signal Conditioning/Sum" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 25 , 0 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/Signal Conditioning/Discrete Transfer Fcn1" )
, TARGET_STRING ( "bAngle" ) , 0 , 0 , 0 , 0 , 1 } , { 26 , 0 , TARGET_STRING
( "Aluminum_Robot_ARM/Controller/Signal Conditioning/Discrete Transfer Fcn2"
) , TARGET_STRING ( "fAngle" ) , 0 , 0 , 0 , 0 , 1 } , { 27 , 0 ,
TARGET_STRING (
"Aluminum_Robot_ARM/Controller/Signal Conditioning/Discrete Transfer Fcn3" )
, TARGET_STRING ( "wAngle" ) , 0 , 0 , 0 , 0 , 1 } , { 28 , 0 , TARGET_STRING
( "Aluminum_Robot_ARM/Controller/bicepCMD/Gain" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 2 } , { 29 , 0 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/bicepCMD/[0...5]" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 2 } , { 30 , 0 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/bicepCMD/[0...5] " ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 3 } , { 31 , 0 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/forearmCMD/Abs" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 32 , 0 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/forearmCMD/Gain" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 0 } , { 33 , 0 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/forearmCMD/[0...255]" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 34 , 0 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/forearmCMD/[0...255] " ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 3 } , { 35 , 0 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/turntableCMD/Gain" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 2 } , { 36 , 0 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/turntableCMD/[0...5] " ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 3 } , { 37 , 0 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/turntableCMD/[0..5]" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 2 } , { 38 , 0 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/wristCMD/Abs" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 39 , 0 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/wristCMD/Gain" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 40 , 0 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/wristCMD/[0...255]" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 0 } , { 41 , 0 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/wristCMD/[0...255] " ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 3 } , { 42 , 0 , TARGET_STRING (
 "Aluminum_Robot_ARM/Reference Angle Test Vectors/Joint Angle Test Vectors/FromWs"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 43 , 0 , TARGET_STRING (
 "Aluminum_Robot_ARM/Controller/PID Controller/Anti-windup/Disc. Clamping Parallel/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 44 , 0 , TARGET_STRING (
 "Aluminum_Robot_ARM/Controller/PID Controller/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 45 , 0 , TARGET_STRING (
 "Aluminum_Robot_ARM/Controller/PID Controller1/Anti-windup/Disc. Clamping Parallel/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 46 , 0 , TARGET_STRING (
 "Aluminum_Robot_ARM/Controller/PID Controller1/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 47 , 0 , TARGET_STRING (
 "Aluminum_Robot_ARM/Controller/PID Controller2/Anti-windup/Cont. Clamping Parallel/DeadZone"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 48 , 0 , TARGET_STRING (
 "Aluminum_Robot_ARM/Controller/PID Controller2/Anti-windup/Cont. Clamping Parallel/ZeroGain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 49 , 0 , TARGET_STRING (
 "Aluminum_Robot_ARM/Controller/PID Controller2/Anti-windup/Cont. Clamping Parallel/AND3"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 4 } , { 50 , 0 , TARGET_STRING (
 "Aluminum_Robot_ARM/Controller/PID Controller2/Anti-windup/Cont. Clamping Parallel/Memory"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 4 } , { 51 , 0 , TARGET_STRING (
 "Aluminum_Robot_ARM/Controller/PID Controller2/Anti-windup/Cont. Clamping Parallel/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 52 , 0 , TARGET_STRING (
 "Aluminum_Robot_ARM/Controller/PID Controller2/D Gain/Internal Parameters/Derivative Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 53 , 0 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/PID Controller2/Filter/Cont. Filter/Filter" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 54 , 0 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/PID Controller2/Filter/Cont. Filter/SumD" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 55 , 0 , TARGET_STRING (
 "Aluminum_Robot_ARM/Controller/PID Controller2/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 56 , 0 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/PID Controller2/Integrator/Continuous/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 57 , 0 , TARGET_STRING (
 "Aluminum_Robot_ARM/Controller/PID Controller2/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 58 , 0 , TARGET_STRING (
 "Aluminum_Robot_ARM/Controller/PID Controller2/Parallel P Gain/Internal Parameters/Proportional Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 59 , 0 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/PID Controller2/Saturation/Enabled/Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 60 , 0 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/PID Controller2/Sum/Sum_PID/Sum" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 61 , 0 , TARGET_STRING (
 "Aluminum_Robot_ARM/Controller/PID Controller3/Anti-windup/Cont. Clamping Parallel/DeadZone"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 62 , 0 , TARGET_STRING (
 "Aluminum_Robot_ARM/Controller/PID Controller3/Anti-windup/Cont. Clamping Parallel/ZeroGain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 63 , 0 , TARGET_STRING (
 "Aluminum_Robot_ARM/Controller/PID Controller3/Anti-windup/Cont. Clamping Parallel/AND3"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 4 } , { 64 , 0 , TARGET_STRING (
 "Aluminum_Robot_ARM/Controller/PID Controller3/Anti-windup/Cont. Clamping Parallel/Memory"
) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 4 } , { 65 , 0 , TARGET_STRING (
 "Aluminum_Robot_ARM/Controller/PID Controller3/Anti-windup/Cont. Clamping Parallel/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 66 , 0 , TARGET_STRING (
 "Aluminum_Robot_ARM/Controller/PID Controller3/D Gain/Internal Parameters/Derivative Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 67 , 0 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/PID Controller3/Filter/Cont. Filter/Filter" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 68 , 0 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/PID Controller3/Filter/Cont. Filter/SumD" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 69 , 0 , TARGET_STRING (
 "Aluminum_Robot_ARM/Controller/PID Controller3/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 70 , 0 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/PID Controller3/Integrator/Continuous/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 71 , 0 , TARGET_STRING (
 "Aluminum_Robot_ARM/Controller/PID Controller3/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 72 , 0 , TARGET_STRING (
 "Aluminum_Robot_ARM/Controller/PID Controller3/Parallel P Gain/Internal Parameters/Proportional Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 73 , 0 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/PID Controller3/Saturation/Enabled/Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 74 , 0 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/PID Controller3/Sum/Sum_PID/Sum" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 75 , 0 , TARGET_STRING (
 "Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration/EVAL_KEY/INPUT_10_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 76 , 0 , TARGET_STRING (
 "Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration/EVAL_KEY/INPUT_11_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 77 , 0 , TARGET_STRING (
 "Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration/EVAL_KEY/INPUT_12_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 78 , 0 , TARGET_STRING (
 "Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration/EVAL_KEY/INPUT_1_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 79 , 0 , TARGET_STRING (
 "Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration/EVAL_KEY/INPUT_2_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 80 , 0 , TARGET_STRING (
 "Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration/EVAL_KEY/INPUT_3_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 81 , 0 , TARGET_STRING (
 "Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration/EVAL_KEY/INPUT_4_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 82 , 0 , TARGET_STRING (
 "Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration/EVAL_KEY/INPUT_5_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 83 , 0 , TARGET_STRING (
 "Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration/EVAL_KEY/INPUT_6_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 84 , 0 , TARGET_STRING (
 "Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration/EVAL_KEY/INPUT_7_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 85 , 0 , TARGET_STRING (
 "Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration/EVAL_KEY/INPUT_8_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 86 , 0 , TARGET_STRING (
 "Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration/EVAL_KEY/INPUT_9_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 87 , 0 , TARGET_STRING (
 "Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration/EVAL_KEY/INTERNAL_1_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 88 , 0 , TARGET_STRING (
 "Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration/EVAL_KEY/INTERNAL_2_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 89 , 0 , TARGET_STRING (
 "Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration/EVAL_KEY/INTERNAL_3_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 90 , 0 , TARGET_STRING (
 "Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration/EVAL_KEY/INTERNAL_4_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 91 , 0 , TARGET_STRING (
 "Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration/EVAL_KEY/INTERNAL_5_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 92 , 0 , TARGET_STRING (
 "Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration/EVAL_KEY/INTERNAL_6_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 93 , 0 , TARGET_STRING (
 "Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration/EVAL_KEY/INTERNAL_7_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 94 , 0 , TARGET_STRING (
 "Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration/EVAL_KEY/INTERNAL_8_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 95 , 0 , TARGET_STRING (
 "Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration/EVAL_KEY/OUTPUT_1_0"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 96 , 0 , TARGET_STRING (
 "Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration/EVAL_KEY/OUTPUT_2_0"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 97 , 0 , TARGET_STRING (
 "Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration/EVAL_KEY/OUTPUT_3_0"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 98 , 0 , TARGET_STRING (
 "Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration/EVAL_KEY/OUTPUT_4_0"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 99 , 0 , TARGET_STRING (
 "Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration/EVAL_KEY/OUTPUT_5_0"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 100 , 0 , TARGET_STRING (
"Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration/EVAL_KEY/STATE_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 101 , 0 , TARGET_STRING (
"Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration/EVAL_KEY/STATE_2"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 102 , 0 , TARGET_STRING (
"Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration/EVAL_KEY/STATE_3"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 103 , 0 , TARGET_STRING (
"Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration/EVAL_KEY/STATE_4"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 104 , 0 , TARGET_STRING (
"Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Solver Configuration/EVAL_KEY/STATE_5"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 105 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/PID Controller" ) , TARGET_STRING ( "P" ) , 0
, 0 , 0 } , { 106 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/PID Controller" ) , TARGET_STRING ( "I" ) , 0
, 0 , 0 } , { 107 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/PID Controller" ) , TARGET_STRING ( "D" ) , 0
, 0 , 0 } , { 108 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/PID Controller" ) , TARGET_STRING ( "N" ) , 0
, 0 , 0 } , { 109 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/PID Controller" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 110 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/PID Controller" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 111 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/PID Controller" ) , TARGET_STRING (
"UpperSaturationLimit" ) , 0 , 0 , 0 } , { 112 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/PID Controller" ) , TARGET_STRING (
"LowerSaturationLimit" ) , 0 , 0 , 0 } , { 113 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/PID Controller1" ) , TARGET_STRING ( "P" ) , 0
, 0 , 0 } , { 114 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/PID Controller1" ) , TARGET_STRING ( "I" ) , 0
, 0 , 0 } , { 115 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/PID Controller1" ) , TARGET_STRING ( "D" ) , 0
, 0 , 0 } , { 116 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/PID Controller1" ) , TARGET_STRING ( "N" ) , 0
, 0 , 0 } , { 117 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/PID Controller1" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 118 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/PID Controller1" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 119 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/PID Controller1" ) , TARGET_STRING (
"UpperSaturationLimit" ) , 0 , 0 , 0 } , { 120 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/PID Controller1" ) , TARGET_STRING (
"LowerSaturationLimit" ) , 0 , 0 , 0 } , { 121 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/PID Controller2" ) , TARGET_STRING ( "P" ) , 0
, 0 , 0 } , { 122 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/PID Controller2" ) , TARGET_STRING ( "I" ) , 0
, 0 , 0 } , { 123 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/PID Controller2" ) , TARGET_STRING ( "D" ) , 0
, 0 , 0 } , { 124 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/PID Controller2" ) , TARGET_STRING ( "N" ) , 0
, 0 , 0 } , { 125 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/PID Controller2" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 126 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/PID Controller2" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 127 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/PID Controller2" ) , TARGET_STRING (
"UpperSaturationLimit" ) , 0 , 0 , 0 } , { 128 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/PID Controller2" ) , TARGET_STRING (
"LowerSaturationLimit" ) , 0 , 0 , 0 } , { 129 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/PID Controller3" ) , TARGET_STRING ( "P" ) , 0
, 0 , 0 } , { 130 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/PID Controller3" ) , TARGET_STRING ( "I" ) , 0
, 0 , 0 } , { 131 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/PID Controller3" ) , TARGET_STRING ( "D" ) , 0
, 0 , 0 } , { 132 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/PID Controller3" ) , TARGET_STRING ( "N" ) , 0
, 0 , 0 } , { 133 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/PID Controller3" ) , TARGET_STRING (
"InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 134 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/PID Controller3" ) , TARGET_STRING (
"InitialConditionForFilter" ) , 0 , 0 , 0 } , { 135 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/PID Controller3" ) , TARGET_STRING (
"UpperSaturationLimit" ) , 0 , 0 , 0 } , { 136 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/PID Controller3" ) , TARGET_STRING (
"LowerSaturationLimit" ) , 0 , 0 , 0 } , { 137 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/Break" ) , TARGET_STRING ( "Value" ) , 0 , 0 ,
0 } , { 138 , TARGET_STRING ( "Aluminum_Robot_ARM/Controller/Break1" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 139 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/Break2" ) , TARGET_STRING ( "Value" ) , 0 , 0
, 0 } , { 140 , TARGET_STRING ( "Aluminum_Robot_ARM/Controller/Break3" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 141 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/Gain" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0
} , { 142 , TARGET_STRING ( "Aluminum_Robot_ARM/Controller/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 143 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/Gain10" ) , TARGET_STRING ( "Gain" ) , 0 , 0 ,
0 } , { 144 , TARGET_STRING ( "Aluminum_Robot_ARM/Controller/Gain11" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 145 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/Gain2" ) , TARGET_STRING ( "Gain" ) , 0 , 0 ,
0 } , { 146 , TARGET_STRING ( "Aluminum_Robot_ARM/Controller/Gain3" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 147 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/Gain4" ) , TARGET_STRING ( "Gain" ) , 0 , 0 ,
0 } , { 148 , TARGET_STRING ( "Aluminum_Robot_ARM/Controller/Gain5" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 149 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/Gain6" ) , TARGET_STRING ( "Gain" ) , 0 , 0 ,
0 } , { 150 , TARGET_STRING ( "Aluminum_Robot_ARM/Controller/Gain7" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 151 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/Gain8" ) , TARGET_STRING ( "Gain" ) , 0 , 0 ,
0 } , { 152 , TARGET_STRING ( "Aluminum_Robot_ARM/Controller/Gain9" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 153 , TARGET_STRING (
"Aluminum_Robot_ARM/Setpoint Angles/Gain" ) , TARGET_STRING ( "Gain" ) , 0 ,
0 , 0 } , { 154 , TARGET_STRING ( "Aluminum_Robot_ARM/Setpoint Angles/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 155 , TARGET_STRING (
"Aluminum_Robot_ARM/Setpoint Angles/Gain2" ) , TARGET_STRING ( "Gain" ) , 0 ,
0 , 0 } , { 156 , TARGET_STRING ( "Aluminum_Robot_ARM/Setpoint Angles/Gain3"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 157 , TARGET_STRING (
"Aluminum_Robot_ARM/Setpoint Angles/Step" ) , TARGET_STRING ( "Time" ) , 0 ,
0 , 0 } , { 158 , TARGET_STRING ( "Aluminum_Robot_ARM/Setpoint Angles/Step" )
, TARGET_STRING ( "Before" ) , 0 , 0 , 0 } , { 159 , TARGET_STRING (
"Aluminum_Robot_ARM/Setpoint Angles/Step" ) , TARGET_STRING ( "After" ) , 0 ,
0 , 0 } , { 160 , TARGET_STRING ( "Aluminum_Robot_ARM/Setpoint Angles/Step1"
) , TARGET_STRING ( "Time" ) , 0 , 0 , 0 } , { 161 , TARGET_STRING (
"Aluminum_Robot_ARM/Setpoint Angles/Step1" ) , TARGET_STRING ( "Before" ) , 0
, 0 , 0 } , { 162 , TARGET_STRING (
"Aluminum_Robot_ARM/Setpoint Angles/Step1" ) , TARGET_STRING ( "After" ) , 0
, 0 , 0 } , { 163 , TARGET_STRING (
"Aluminum_Robot_ARM/Setpoint Angles/Step2" ) , TARGET_STRING ( "Time" ) , 0 ,
0 , 0 } , { 164 , TARGET_STRING ( "Aluminum_Robot_ARM/Setpoint Angles/Step2"
) , TARGET_STRING ( "Before" ) , 0 , 0 , 0 } , { 165 , TARGET_STRING (
"Aluminum_Robot_ARM/Setpoint Angles/Step2" ) , TARGET_STRING ( "After" ) , 0
, 0 , 0 } , { 166 , TARGET_STRING (
"Aluminum_Robot_ARM/Setpoint Angles/Step3" ) , TARGET_STRING ( "Time" ) , 0 ,
0 , 0 } , { 167 , TARGET_STRING ( "Aluminum_Robot_ARM/Setpoint Angles/Step3"
) , TARGET_STRING ( "Before" ) , 0 , 0 , 0 } , { 168 , TARGET_STRING (
"Aluminum_Robot_ARM/Setpoint Angles/Step3" ) , TARGET_STRING ( "After" ) , 0
, 0 , 0 } , { 169 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/Signal Conditioning/IC" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 170 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/Signal Conditioning/Discrete Transfer Fcn1" )
, TARGET_STRING ( "InitialStates" ) , 0 , 0 , 0 } , { 171 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/Signal Conditioning/Discrete Transfer Fcn2" )
, TARGET_STRING ( "InitialStates" ) , 0 , 0 , 0 } , { 172 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/Signal Conditioning/Discrete Transfer Fcn3" )
, TARGET_STRING ( "InitialStates" ) , 0 , 0 , 0 } , { 173 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/bicepCMD/Gain" ) , TARGET_STRING ( "Gain" ) ,
0 , 0 , 0 } , { 174 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/bicepCMD/[0...5]" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 0 , 0 } , { 175 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/bicepCMD/[0...5]" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 0 , 0 } , { 176 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/bicepCMD/[0...5] " ) , TARGET_STRING (
"UpperLimit" ) , 0 , 0 , 0 } , { 177 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/bicepCMD/[0...5] " ) , TARGET_STRING (
"LowerLimit" ) , 0 , 0 , 0 } , { 178 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/forearmCMD/Gain" ) , TARGET_STRING ( "Gain" )
, 0 , 0 , 0 } , { 179 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/forearmCMD/[0...255]" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 0 , 0 } , { 180 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/forearmCMD/[0...255]" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 0 , 0 } , { 181 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/forearmCMD/[0...255] " ) , TARGET_STRING (
"UpperLimit" ) , 0 , 0 , 0 } , { 182 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/forearmCMD/[0...255] " ) , TARGET_STRING (
"LowerLimit" ) , 0 , 0 , 0 } , { 183 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/turntableCMD/Gain" ) , TARGET_STRING ( "Gain"
) , 0 , 0 , 0 } , { 184 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/turntableCMD/[0...5] " ) , TARGET_STRING (
"UpperLimit" ) , 0 , 0 , 0 } , { 185 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/turntableCMD/[0...5] " ) , TARGET_STRING (
"LowerLimit" ) , 0 , 0 , 0 } , { 186 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/turntableCMD/[0..5]" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 0 , 0 } , { 187 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/turntableCMD/[0..5]" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 0 , 0 } , { 188 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/wristCMD/Gain" ) , TARGET_STRING ( "Gain" ) ,
0 , 0 , 0 } , { 189 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/wristCMD/[0...255]" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 0 , 0 } , { 190 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/wristCMD/[0...255]" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 0 , 0 } , { 191 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/wristCMD/[0...255] " ) , TARGET_STRING (
"UpperLimit" ) , 0 , 0 , 0 } , { 192 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/wristCMD/[0...255] " ) , TARGET_STRING (
"LowerLimit" ) , 0 , 0 , 0 } , { 193 , TARGET_STRING (
 "Aluminum_Robot_ARM/Reference Angle Test Vectors/Joint Angle Test Vectors/FromWs"
) , TARGET_STRING ( "Time0" ) , 0 , 5 , 0 } , { 194 , TARGET_STRING (
 "Aluminum_Robot_ARM/Reference Angle Test Vectors/Joint Angle Test Vectors/FromWs"
) , TARGET_STRING ( "Data0" ) , 0 , 6 , 0 } , { 195 , TARGET_STRING (
 "Aluminum_Robot_ARM/Controller/PID Controller/Anti-windup/Disc. Clamping Parallel/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 196 , TARGET_STRING (
 "Aluminum_Robot_ARM/Controller/PID Controller/Anti-windup/Disc. Clamping Parallel/ZeroGain"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 197 , TARGET_STRING (
 "Aluminum_Robot_ARM/Controller/PID Controller/Filter/Disc. Forward Euler Filter/Filter"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 198 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/PID Controller/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 199 , TARGET_STRING (
 "Aluminum_Robot_ARM/Controller/PID Controller1/Anti-windup/Disc. Clamping Parallel/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 200 , TARGET_STRING (
 "Aluminum_Robot_ARM/Controller/PID Controller1/Anti-windup/Disc. Clamping Parallel/ZeroGain"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 201 , TARGET_STRING (
 "Aluminum_Robot_ARM/Controller/PID Controller1/Filter/Disc. Forward Euler Filter/Filter"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 202 , TARGET_STRING (
"Aluminum_Robot_ARM/Controller/PID Controller1/Integrator/Discrete/Integrator"
) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 203 , TARGET_STRING (
 "Aluminum_Robot_ARM/Controller/PID Controller2/Anti-windup/Cont. Clamping Parallel/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 204 , TARGET_STRING (
 "Aluminum_Robot_ARM/Controller/PID Controller2/Anti-windup/Cont. Clamping Parallel/ZeroGain"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 205 , TARGET_STRING (
 "Aluminum_Robot_ARM/Controller/PID Controller2/Anti-windup/Cont. Clamping Parallel/Memory"
) , TARGET_STRING ( "InitialCondition" ) , 1 , 0 , 0 } , { 206 ,
TARGET_STRING (
 "Aluminum_Robot_ARM/Controller/PID Controller3/Anti-windup/Cont. Clamping Parallel/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 207 , TARGET_STRING (
 "Aluminum_Robot_ARM/Controller/PID Controller3/Anti-windup/Cont. Clamping Parallel/ZeroGain"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 208 , TARGET_STRING (
 "Aluminum_Robot_ARM/Controller/PID Controller3/Anti-windup/Cont. Clamping Parallel/Memory"
) , TARGET_STRING ( "InitialCondition" ) , 1 , 0 , 0 } , { 0 , ( NULL ) , (
NULL ) , 0 , 0 , 0 } } ; static const rtwCAPI_ModelParameters
rtModelParameters [ ] = { { 209 , TARGET_STRING ( "dFilt" ) , 0 , 7 , 0 } , {
210 , TARGET_STRING ( "nFilt" ) , 0 , 7 , 0 } , { 0 , ( NULL ) , 0 , 0 , 0 }
} ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . i53lpxrgtl , & rtB . a1olpxanio ,
& rtB . jyxpzlsxjp , & rtB . jwbkjot453 , & rtB . iky3yyt4pc , & rtB .
jws0qcirwo , & rtB . j0yyb35mlc , & rtB . kddarmbprq , & rtB . bprngneuci , &
rtB . j5lrlirlvy , & rtB . ilkoc43ltu , & rtB . f0l35tzqgs , & rtB .
cuzdkp3u4j , & rtB . oerp2b0et4 , & rtB . jw2daefpkv , & rtB . ficpm2krqt , &
rtB . hvt3a3pw0z , & rtB . fzkuxy2mpg , & rtB . ny2yf13znw , & rtB .
ktl1ztab5m , & rtB . nq5ondror4 , & rtB . mxbqwluued , & rtB . kia1ippuen , &
rtB . giapxchzsc , & rtB . hwz513wtcp , & rtB . jwmopbhf1l , & rtB .
d2pifgecao , & rtB . ipyiynxjfh , & rtB . f5abzmvimg , & rtB . hvq1hssahi , &
rtB . lhs5btp42r , & rtB . etnxfpjznh , & rtB . ierntvt5nm , & rtB .
c52coq543c , & rtB . eustrco4oa , & rtB . fpfaubmnjj , & rtB . pie23wd2bf , &
rtB . drh4o4lsrm , & rtB . oknip1aipe , & rtB . dqzjzzlnzt , & rtB .
kivpoxi4vr , & rtB . ctnr2llxd1 , & rtB . aw3y3l5gc0 [ 0 ] , & rtB .
ciyx4ip0mc , & rtB . ibymeqo4w3 , & rtB . jexlycubeg , & rtB . exgpu4mzzl , &
rtB . mt5eefv21t , & rtB . a0sz2tfduf , & rtB . elkmica4fl , & rtB .
jkg3quvkxc , & rtB . librkmwt3k , & rtB . ehzqu1jmju , & rtB . mfkgxksgwr , &
rtB . fcpppxuvag , & rtB . fmmqt4ysyf , & rtB . hjbicvqaq4 , & rtB .
p3ywisr0dv , & rtB . o5l0llujzt , & rtB . gco3jzxyom , & rtB . gpl4kzhqur , &
rtB . hjectoyfy3 , & rtB . d30bf04ldl , & rtB . avhyg1sjte , & rtB .
czs44yka0h , & rtB . l3unbkufet , & rtB . btv3yvuomn , & rtB . eeen4ada3p , &
rtB . br5skhqgef , & rtB . bvdhbj54q0 , & rtB . fpmzk1nlis , & rtB .
inuxleclis , & rtB . e1djqxoyiu , & rtB . j0gqbgko2i , & rtB . krtbfhbtm0 , &
rtB . nu0fcm3rf4 [ 0 ] , & rtB . jgkcsd20s3 [ 0 ] , & rtB . enbi2t101n [ 0 ]
, & rtB . mm054drprn [ 0 ] , & rtB . plozcdvjyj [ 0 ] , & rtB . ech2ew1rr2 [
0 ] , & rtB . n5wwmjhbo3 [ 0 ] , & rtB . c1eemeez3i [ 0 ] , & rtB .
ex1x01f4oc [ 0 ] , & rtB . kfmkfo20tj [ 0 ] , & rtB . l0ydipaxdm [ 0 ] , &
rtB . dp5tl3nrhd [ 0 ] , & rtB . j2fnpsqpqo [ 0 ] , & rtB . chzxe3k2dn [ 0 ]
, & rtB . i2goomhryg [ 0 ] , & rtB . pnk1tj1sdk [ 0 ] , & rtB . mjvmdy05hg [
0 ] , & rtB . e1jqwcx00o [ 0 ] , & rtB . he3hlshzz3 [ 0 ] , & rtB .
ke4jnme1cl [ 0 ] , & rtB . olyap2fx01 [ 0 ] , & rtB . dbqqr4x2jx , & rtB .
p2elnfut2o [ 0 ] , & rtB . f2wzumnwx4 , & rtB . fk1jgig4mk , & rtB .
ktd2h4wayi [ 0 ] , & rtB . ilihvuljus [ 0 ] , & rtB . cx5y3yvdok [ 0 ] , &
rtB . m4tugv1m5k [ 0 ] , & rtB . eirl2ntjhd [ 0 ] , & rtP . PIDController_P ,
& rtP . PIDController_I , & rtP . PIDController_D , & rtP . PIDController_N ,
& rtP . PIDController_InitialConditionForIntegrator , & rtP .
PIDController_InitialConditionForFilter , & rtP .
PIDController_UpperSaturationLimit , & rtP .
PIDController_LowerSaturationLimit , & rtP . PIDController1_P , & rtP .
PIDController1_I , & rtP . PIDController1_D , & rtP . PIDController1_N , &
rtP . PIDController1_InitialConditionForIntegrator , & rtP .
PIDController1_InitialConditionForFilter , & rtP .
PIDController1_UpperSaturationLimit , & rtP .
PIDController1_LowerSaturationLimit , & rtP . PIDController2_P , & rtP .
PIDController2_I , & rtP . PIDController2_D , & rtP . PIDController2_N , &
rtP . PIDController2_InitialConditionForIntegrator , & rtP .
PIDController2_InitialConditionForFilter , & rtP .
PIDController2_UpperSaturationLimit , & rtP .
PIDController2_LowerSaturationLimit , & rtP . PIDController3_P , & rtP .
PIDController3_I , & rtP . PIDController3_D , & rtP . PIDController3_N , &
rtP . PIDController3_InitialConditionForIntegrator , & rtP .
PIDController3_InitialConditionForFilter , & rtP .
PIDController3_UpperSaturationLimit , & rtP .
PIDController3_LowerSaturationLimit , & rtP . Break_Value , & rtP .
Break1_Value , & rtP . Break2_Value , & rtP . Break3_Value , & rtP .
Gain_Gain_eco1mxudja , & rtP . Gain1_Gain_j1nnjap4ro , & rtP . Gain10_Gain ,
& rtP . Gain11_Gain , & rtP . Gain2_Gain_fdcexdgxvr , & rtP .
Gain3_Gain_egywykobhy , & rtP . Gain4_Gain , & rtP . Gain5_Gain , & rtP .
Gain6_Gain , & rtP . Gain7_Gain , & rtP . Gain8_Gain , & rtP . Gain9_Gain , &
rtP . Gain_Gain , & rtP . Gain1_Gain , & rtP . Gain2_Gain , & rtP .
Gain3_Gain , & rtP . Step_Time , & rtP . Step_Y0 , & rtP . Step_YFinal , &
rtP . Step1_Time , & rtP . Step1_Y0 , & rtP . Step1_YFinal , & rtP .
Step2_Time , & rtP . Step2_Y0 , & rtP . Step2_YFinal , & rtP . Step3_Time , &
rtP . Step3_Y0 , & rtP . Step3_YFinal , & rtP . IC_Value , & rtP .
DiscreteTransferFcn1_InitialStates , & rtP .
DiscreteTransferFcn2_InitialStates , & rtP .
DiscreteTransferFcn3_InitialStates , & rtP . Gain_Gain_irbaz43gud , & rtP .
u5_UpperSat_hsorbciehn , & rtP . u5_LowerSat_odxlmaevjb , & rtP .
u5_UpperSat_atus3v43bp , & rtP . u5_LowerSat_oryv2y43s1 , & rtP .
Gain_Gain_iboc4vsafp , & rtP . u255_UpperSat , & rtP . u255_LowerSat , & rtP
. u255_UpperSat_m5nwsc4prn , & rtP . u255_LowerSat_dzjia1thqe , & rtP .
Gain_Gain_mzek03xops , & rtP . u5_UpperSat_f1xxbogm20 , & rtP .
u5_LowerSat_aimx5l53y0 , & rtP . u5_UpperSat , & rtP . u5_LowerSat , & rtP .
Gain_Gain_g0cjd2kme4 , & rtP . u255_UpperSat_cy5lmsdzoz , & rtP .
u255_LowerSat_asbda50lue , & rtP . u255_UpperSat_b3symk0lb5 , & rtP .
u255_LowerSat_n1e2cxv13l , & rtP . FromWs_Time0 [ 0 ] , & rtP . FromWs_Data0
[ 0 ] , & rtP . Constant1_Value , & rtP . ZeroGain_Gain , & rtP .
Filter_gainval , & rtP . Integrator_gainval , & rtP .
Constant1_Value_ploncjubhz , & rtP . ZeroGain_Gain_chz5ufcktq , & rtP .
Filter_gainval_nqnvwj50lp , & rtP . Integrator_gainval_f3eeszil3z , & rtP .
Constant1_Value_hvrq5qxppi , & rtP . ZeroGain_Gain_emqj4r052y , & rtP .
Memory_InitialCondition , & rtP . Constant1_Value_g4hj2bwvcs , & rtP .
ZeroGain_Gain_jxlmlnbspu , & rtP . Memory_InitialCondition_btlhzlk5fx , & rtP
. dFilt [ 0 ] , & rtP . nFilt [ 0 ] , } ; static int32_T * rtVarDimsAddrMap [
] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 } , {
"unsigned char" , "boolean_T" , 0 , 0 , sizeof ( boolean_T ) , SS_BOOLEAN , 0
, 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } , {
rtwCAPI_VECTOR , 8 , 2 , 0 } , { rtwCAPI_VECTOR , 10 , 2 , 0 } , {
rtwCAPI_VECTOR , 12 , 2 , 0 } , { rtwCAPI_VECTOR , 14 , 2 , 0 } } ; static
const uint_T rtDimensionArray [ ] = { 1 , 1 , 4 , 1 , 8 , 1 , 2 , 1 , 11 , 1
, 7 , 1 , 28 , 1 , 1 , 2 } ; static const real_T rtcapiStoredFloats [ ] = {
0.0 , 0.01 , 0.001 , 1.0 } ; static const rtwCAPI_FixPtMap rtFixPtMap [ ] = {
{ ( NULL ) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , 0 ,
0 } , { ( const void * ) & rtcapiStoredFloats [ 1 ] , ( const void * ) &
rtcapiStoredFloats [ 0 ] , 3 , 0 } , { ( const void * ) & rtcapiStoredFloats
[ 2 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , 2 , 0 } , { ( NULL ) ,
( NULL ) , 4 , 0 } , { ( const void * ) & rtcapiStoredFloats [ 0 ] , ( const
void * ) & rtcapiStoredFloats [ 3 ] , 1 , 0 } } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 105 , ( NULL
) , 0 , ( NULL ) , 0 } , { rtBlockParameters , 104 , rtModelParameters , 2 }
, { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap , rtFixPtMap ,
rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" , { 308429821U
, 3914746239U , 165390107U , 1326075722U } , ( NULL ) , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * Aluminum_Robot_ARM_GetCAPIStaticMap ( void )
{ return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void Aluminum_Robot_ARM_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion (
( * rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void Aluminum_Robot_ARM_host_InitializeDataMapInfo (
Aluminum_Robot_ARM_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
