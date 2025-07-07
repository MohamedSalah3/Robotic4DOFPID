#include "__cf_Aluminum_Robot_ARM.h"
#include "ne_ds.h"
#include "Aluminum_Robot_ARM_3cd5c335_2_ds_obs_all.h"
#include "Aluminum_Robot_ARM_3cd5c335_2_ds_sys_struct.h"
#include "Aluminum_Robot_ARM_3cd5c335_2_ds_externals.h"
#include "Aluminum_Robot_ARM_3cd5c335_2_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Aluminum_Robot_ARM_3cd5c335_2_ds_obs_all ( const NeDynamicSystem *
sys , const NeDynamicSystemInput * t3 , NeDsMethodOutput * t4 ) {
PmRealVector out ; real_T
ROBOT4DOF_DC_Motors_Wrist_Interface_Ideal_Torque_Sensor_R_w ; real_T
ROBOT4DOF_DC_Motors_Wrist_Motor_DC_Motor_i ; real_T
ROBOT4DOF_DC_Motors_Wrist_Motor_Power_Amplifier_Controlled_PWM1 ; real_T
U_idx_0 ; real_T X_idx_0 ; real_T X_idx_1 ; real_T X_idx_4 ; real_T U_idx_1 ;
real_T X_idx_5 ; real_T U_idx_2 ; real_T U_idx_3 ; real_T X_idx_3 ; real_T
X_idx_2 ; U_idx_0 = t3 -> mU . mX [ 0 ] ; U_idx_1 = t3 -> mU . mX [ 1 ] ;
U_idx_2 = t3 -> mU . mX [ 2 ] ; U_idx_3 = t3 -> mU . mX [ 3 ] ; X_idx_0 = t3
-> mX . mX [ 0 ] ; X_idx_1 = t3 -> mX . mX [ 1 ] ; X_idx_2 = t3 -> mX . mX [
2 ] ; X_idx_3 = t3 -> mX . mX [ 3 ] ; X_idx_4 = t3 -> mX . mX [ 4 ] ; X_idx_5
= t3 -> mX . mX [ 5 ] ; out = t4 -> mOBS_ALL ;
ROBOT4DOF_DC_Motors_Wrist_Interface_Ideal_Torque_Sensor_R_w = X_idx_0 *
0.0625 ; ROBOT4DOF_DC_Motors_Wrist_Motor_DC_Motor_i = ( X_idx_1 *
0.999999999162569 + X_idx_0 * - 1.8267719933686667E-10 ) + X_idx_4 *
9.99999999162569E-10 ;
ROBOT4DOF_DC_Motors_Wrist_Motor_Power_Amplifier_Controlled_PWM1 = X_idx_5 *
0.2 ; out . mX [ 0 ] = 0.0 ; out . mX [ 1 ] = 0.0 ; out . mX [ 2 ] = U_idx_0
; out . mX [ 3 ] = U_idx_0 ; out . mX [ 4 ] = X_idx_3 ; out . mX [ 5 ] =
U_idx_0 ; out . mX [ 6 ] = U_idx_0 ; out . mX [ 7 ] =
ROBOT4DOF_DC_Motors_Wrist_Interface_Ideal_Torque_Sensor_R_w ; out . mX [ 8 ]
= X_idx_3 ; out . mX [ 9 ] = X_idx_3 ; out . mX [ 10 ] = 0.0 ; out . mX [ 11
] = ROBOT4DOF_DC_Motors_Wrist_Interface_Ideal_Torque_Sensor_R_w ; out . mX [
12 ] = 0.0 ; out . mX [ 13 ] =
ROBOT4DOF_DC_Motors_Wrist_Interface_Ideal_Torque_Sensor_R_w * 16.0 ; out . mX
[ 14 ] = ROBOT4DOF_DC_Motors_Wrist_Motor_DC_Motor_i ; out . mX [ 15 ] =
X_idx_1 ; out . mX [ 16 ] = 0.0 ; out . mX [ 17 ] = X_idx_4 ; out . mX [ 18 ]
= - ( ROBOT4DOF_DC_Motors_Wrist_Motor_DC_Motor_i *
ROBOT4DOF_DC_Motors_Wrist_Motor_DC_Motor_i * 0.00083743101004931969 ) / - 1.0
* 1000.0 ; out . mX [ 19 ] = X_idx_3 * - 0.0625 ; out . mX [ 20 ] = X_idx_4 ;
out . mX [ 21 ] = X_idx_0 * 9.5492965855137211 ; out . mX [ 22 ] = 0.0 ; out
. mX [ 23 ] = ROBOT4DOF_DC_Motors_Wrist_Interface_Ideal_Torque_Sensor_R_w ;
out . mX [ 24 ] = ROBOT4DOF_DC_Motors_Wrist_Interface_Ideal_Torque_Sensor_R_w
* 16.0 ; out . mX [ 25 ] = X_idx_3 * 0.0625 ; out . mX [ 26 ] = - X_idx_3 ;
out . mX [ 27 ] = 0.0 ; out . mX [ 28 ] = 0.0 ; out . mX [ 29 ] = 0.0 ; out .
mX [ 30 ] = 0.0 ; out . mX [ 31 ] = 0.0 ; out . mX [ 32 ] = U_idx_1 ; out .
mX [ 33 ] = X_idx_5 ; out . mX [ 34 ] =
ROBOT4DOF_DC_Motors_Wrist_Motor_Power_Amplifier_Controlled_PWM1 ; out . mX [
35 ] = 0.0 ; out . mX [ 36 ] = 0.0 ; out . mX [ 37 ] = X_idx_5 ; out . mX [
38 ] = ROBOT4DOF_DC_Motors_Wrist_Motor_Power_Amplifier_Controlled_PWM1 * 5.0
; out . mX [ 39 ] = 0.0 ; out . mX [ 40 ] = U_idx_2 ; out . mX [ 41 ] =
X_idx_5 ; out . mX [ 42 ] = 0.0 ; out . mX [ 43 ] = U_idx_3 ; out . mX [ 44 ]
= - ROBOT4DOF_DC_Motors_Wrist_Motor_DC_Motor_i ; out . mX [ 45 ] = 0.0 ; out
. mX [ 46 ] = 0.0 ; out . mX [ 47 ] = 0.0 ; out . mX [ 48 ] = 0.0 ; out . mX
[ 49 ] = X_idx_4 ; out . mX [ 50 ] = - (
ROBOT4DOF_DC_Motors_Wrist_Motor_DC_Motor_i *
ROBOT4DOF_DC_Motors_Wrist_Motor_DC_Motor_i * 0.0001 ) / - 1.0 * 1000.0 ; out
. mX [ 51 ] = X_idx_2 ; out . mX [ 52 ] = 0.0 ; out . mX [ 53 ] = 0.0 ; out .
mX [ 54 ] = 0.0 ; out . mX [ 55 ] = U_idx_2 ; out . mX [ 56 ] = U_idx_2 ; out
. mX [ 57 ] = U_idx_2 ; out . mX [ 58 ] = U_idx_2 ; out . mX [ 59 ] = 0.0 ;
out . mX [ 60 ] = 0.0 ; out . mX [ 61 ] = 0.0 ; out . mX [ 62 ] = U_idx_1 ;
out . mX [ 63 ] = U_idx_1 ; out . mX [ 64 ] = U_idx_1 ; out . mX [ 65 ] =
U_idx_1 ; out . mX [ 66 ] = 0.0 ; out . mX [ 67 ] = 0.0 ; out . mX [ 68 ] =
0.0 ; out . mX [ 69 ] = U_idx_3 ; out . mX [ 70 ] = U_idx_3 ; out . mX [ 71 ]
= U_idx_3 ; out . mX [ 72 ] = U_idx_3 ; out . mX [ 73 ] = X_idx_4 ; out . mX
[ 74 ] = 0.0 ; out . mX [ 75 ] =
ROBOT4DOF_DC_Motors_Wrist_Interface_Ideal_Torque_Sensor_R_w ; ( void ) sys ;
( void ) t4 ; return 0 ; }
