#include "__cf_Aluminum_Robot_ARM.h"
#include "ne_ds.h"
#include "Aluminum_Robot_ARM_3cd5c335_3_ds_f.h"
#include "Aluminum_Robot_ARM_3cd5c335_3_ds_sys_struct.h"
#include "Aluminum_Robot_ARM_3cd5c335_3_ds_externals.h"
#include "Aluminum_Robot_ARM_3cd5c335_3_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Aluminum_Robot_ARM_3cd5c335_3_ds_f ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t4 , NeDsMethodOutput * t5 ) { PmRealVector out
; real_T ROBOT4DOF_DC_Motors_Turntable_Motor_Power_Amplifier_H_Bridge_i2 ;
real_T X_idx_4 ; real_T U_idx_1 ; real_T X_idx_1 ; real_T X_idx_0 ; real_T
X_idx_5 ; int32_T M_idx_4 ; int32_T M_idx_0 ; real_T X_idx_2 ; int32_T
M_idx_1 ; int32_T M_idx_2 ; int32_T M_idx_3 ; M_idx_0 = t4 -> mM . mX [ 0 ] ;
M_idx_1 = t4 -> mM . mX [ 1 ] ; M_idx_2 = t4 -> mM . mX [ 2 ] ; M_idx_3 = t4
-> mM . mX [ 3 ] ; M_idx_4 = t4 -> mM . mX [ 4 ] ; U_idx_1 = t4 -> mU . mX [
1 ] ; X_idx_0 = t4 -> mX . mX [ 0 ] ; X_idx_1 = t4 -> mX . mX [ 1 ] ; X_idx_2
= t4 -> mX . mX [ 2 ] ; X_idx_4 = t4 -> mX . mX [ 4 ] ; X_idx_5 = t4 -> mX .
mX [ 5 ] ; out = t5 -> mF ;
ROBOT4DOF_DC_Motors_Turntable_Motor_Power_Amplifier_H_Bridge_i2 = ( X_idx_1 *
- 0.99999999885558855 + X_idx_0 * 1.8243061693032732E-10 ) + X_idx_4 * -
9.9999999885558865E-10 ; if ( U_idx_1 <= 0.0 ) { U_idx_1 = 0.0 ; } else if (
U_idx_1 >= 5.0 ) { U_idx_1 = 1.0 ; } else { U_idx_1 /= 5.0 ; } X_idx_0 =
M_idx_4 != 0 ? - 1.0 : 1.0 ; if ( M_idx_0 != 0 ) { X_idx_1 = - ( X_idx_2 * -
1591.5494309189535 ) ; } else { X_idx_1 = - 0.0 ; } if ( M_idx_0 != 0 ) {
X_idx_0 = X_idx_4 -
ROBOT4DOF_DC_Motors_Turntable_Motor_Power_Amplifier_H_Bridge_i2 *
0.075000000000000011 ; } else if ( M_idx_1 != 0 ) { X_idx_0 = X_idx_4 -
ROBOT4DOF_DC_Motors_Turntable_Motor_Power_Amplifier_H_Bridge_i2 *
0.075000000000000011 ; } else if ( M_idx_2 != 0 ) { X_idx_0 = X_idx_4 -
ROBOT4DOF_DC_Motors_Turntable_Motor_Power_Amplifier_H_Bridge_i2 * 0.1 ; }
else if ( M_idx_3 != 0 ) { X_idx_0 = X_idx_4 - (
ROBOT4DOF_DC_Motors_Turntable_Motor_Power_Amplifier_H_Bridge_i2 * 0.1 +
X_idx_5 * X_idx_0 * 48.0 / 5.0 ) ; } else { X_idx_0 = X_idx_4 - ( X_idx_0 *
48.0 + ROBOT4DOF_DC_Motors_Turntable_Motor_Power_Amplifier_H_Bridge_i2 * 0.1
) ; } out . mX [ 0 ] = - 0.0 ; out . mX [ 1 ] = - 0.0 ; out . mX [ 2 ] = -
X_idx_1 ; out . mX [ 3 ] = 0.0 ; out . mX [ 4 ] = - U_idx_1 ; out . mX [ 5 ]
= X_idx_0 / 9.6000000000000014 ; ( void ) sys ; ( void ) t5 ; return 0 ; }
