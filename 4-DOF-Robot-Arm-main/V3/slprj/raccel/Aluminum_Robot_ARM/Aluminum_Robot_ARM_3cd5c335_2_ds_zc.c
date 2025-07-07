#include "__cf_Aluminum_Robot_ARM.h"
#include "ne_ds.h"
#include "Aluminum_Robot_ARM_3cd5c335_2_ds_zc.h"
#include "Aluminum_Robot_ARM_3cd5c335_2_ds_sys_struct.h"
#include "Aluminum_Robot_ARM_3cd5c335_2_ds_externals.h"
#include "Aluminum_Robot_ARM_3cd5c335_2_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Aluminum_Robot_ARM_3cd5c335_2_ds_zc ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t5 , NeDsMethodOutput * t6 ) { PmRealVector out
; real_T t0 ; real_T t1 ; real_T X_idx_4 ; real_T U_idx_2 ; real_T U_idx_3 ;
real_T X_idx_5 ; int32_T M_idx_0 ; int32_T M_idx_1 ; int32_T M_idx_2 ;
M_idx_0 = t5 -> mM . mX [ 0 ] ; M_idx_1 = t5 -> mM . mX [ 1 ] ; M_idx_2 = t5
-> mM . mX [ 2 ] ; U_idx_2 = t5 -> mU . mX [ 2 ] ; U_idx_3 = t5 -> mU . mX [
3 ] ; X_idx_4 = t5 -> mX . mX [ 4 ] ; X_idx_5 = t5 -> mX . mX [ 5 ] ; out =
t6 -> mZC ; if ( M_idx_0 == 0 ) { t0 = U_idx_2 - 2.5 ; } else { t0 = 0.0 ; }
if ( ( M_idx_0 == 0 ) && ( M_idx_1 == 0 ) ) { t1 = X_idx_5 - 2.5 ; } else {
t1 = 0.0 ; } if ( ( M_idx_0 == 0 ) && ( M_idx_1 == 0 ) && ( M_idx_2 == 0 ) )
{ X_idx_4 *= U_idx_3 > 2.5 ? - 1.0 : 1.0 ; } else { X_idx_4 = 0.0 ; } if ( (
M_idx_0 == 0 ) && ( M_idx_1 == 0 ) && ( M_idx_2 != 0 ) ) { X_idx_5 = U_idx_3
- 2.5 ; } else { X_idx_5 = 0.0 ; } out . mX [ 0 ] = t0 ; out . mX [ 1 ] = t1
; out . mX [ 2 ] = X_idx_4 ; out . mX [ 3 ] = X_idx_5 ; out . mX [ 4 ] = (
real_T ) ( U_idx_2 > 2.5 ) ; ( void ) sys ; ( void ) t6 ; return 0 ; }
