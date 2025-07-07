#include "__cf_Aluminum_Robot_ARM.h"
#include "ne_ds.h"
#include "Aluminum_Robot_ARM_3cd5c335_3_ds_zc.h"
#include "Aluminum_Robot_ARM_3cd5c335_3_ds_sys_struct.h"
#include "Aluminum_Robot_ARM_3cd5c335_3_ds_externals.h"
#include "Aluminum_Robot_ARM_3cd5c335_3_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Aluminum_Robot_ARM_3cd5c335_3_ds_zc ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t4 , NeDsMethodOutput * t5 ) { PmRealVector out
; real_T t0 ; real_T t1 ; real_T U_idx_2 ; real_T U_idx_3 ; real_T X_idx_5 ;
int32_T M_idx_0 ; int32_T M_idx_1 ; int32_T M_idx_2 ; M_idx_0 = t4 -> mM . mX
[ 0 ] ; M_idx_1 = t4 -> mM . mX [ 1 ] ; M_idx_2 = t4 -> mM . mX [ 2 ] ;
U_idx_2 = t4 -> mU . mX [ 2 ] ; U_idx_3 = t4 -> mU . mX [ 3 ] ; X_idx_5 = t4
-> mX . mX [ 5 ] ; out = t5 -> mZC ; if ( M_idx_0 == 0 ) { t0 = U_idx_2 - 2.5
; } else { t0 = 0.0 ; } if ( ( M_idx_0 == 0 ) && ( M_idx_1 == 0 ) && (
M_idx_2 == 0 ) ) { t1 = 5.0 - X_idx_5 ; } else { t1 = 0.0 ; } if ( ( M_idx_0
== 0 ) && ( M_idx_1 == 0 ) && ( M_idx_2 == 0 ) ) { U_idx_3 -= 2.5 ; } else {
U_idx_3 = 0.0 ; } out . mX [ 0 ] = t0 ; out . mX [ 1 ] = ( M_idx_0 == 0 ) &&
( M_idx_1 == 0 ) ? - X_idx_5 : 0.0 ; out . mX [ 2 ] = t1 ; out . mX [ 3 ] =
U_idx_3 ; out . mX [ 4 ] = ( real_T ) ( U_idx_2 > 2.5 ) ; ( void ) sys ; (
void ) t5 ; return 0 ; }
