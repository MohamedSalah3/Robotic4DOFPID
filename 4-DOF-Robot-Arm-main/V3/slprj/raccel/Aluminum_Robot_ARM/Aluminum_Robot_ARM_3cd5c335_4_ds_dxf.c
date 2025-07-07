#include "__cf_Aluminum_Robot_ARM.h"
#include "ne_ds.h"
#include "Aluminum_Robot_ARM_3cd5c335_4_ds_dxf.h"
#include "Aluminum_Robot_ARM_3cd5c335_4_ds_sys_struct.h"
#include "Aluminum_Robot_ARM_3cd5c335_4_ds_externals.h"
#include "Aluminum_Robot_ARM_3cd5c335_4_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Aluminum_Robot_ARM_3cd5c335_4_ds_dxf ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t4 , NeDsMethodOutput * t5 ) { PmRealVector out
; real_T t0 ; real_T t1 ; real_T t2 ; int32_T M_idx_0 ; int32_T M_idx_1 ;
int32_T M_idx_2 ; int32_T M_idx_4 ; M_idx_0 = t4 -> mM . mX [ 0 ] ; M_idx_1 =
t4 -> mM . mX [ 1 ] ; M_idx_2 = t4 -> mM . mX [ 2 ] ; M_idx_4 = t4 -> mM . mX
[ 4 ] ; out = t5 -> mDXF ; if ( M_idx_0 != 0 ) { t0 = -
1.0380802010906473E-11 ; } else if ( M_idx_1 != 0 ) { t0 = -
1.0380802010906473E-11 ; } else if ( M_idx_2 != 0 ) { t0 = -
1.3841069347875295E-11 ; } else if ( M_idx_4 != 0 ) { t0 =
1.3841069347875295E-10 ; } else { t0 = - 1.3841069347875295E-11 ; } if (
M_idx_0 != 0 ) { t1 = 0.074999999965290748 ; } else if ( M_idx_1 != 0 ) { t1
= 0.074999999965290748 ; } else if ( M_idx_2 != 0 ) { t1 =
0.099999999953720983 ; } else if ( M_idx_4 != 0 ) { t1 = -
0.99999999953720975 ; } else { t1 = 0.099999999953720983 ; } if ( M_idx_0 !=
0 ) { t2 = 1.000000000075 ; } else if ( M_idx_1 != 0 ) { t2 = 1.000000000075
; } else if ( M_idx_2 != 0 ) { t2 = 1.0000000001 ; } else if ( M_idx_4 != 0 )
{ t2 = - 9.9999999953720988E-10 ; } else { t2 = 1.0000000001 ; } out . mX [ 0
] = t0 ; out . mX [ 1 ] = t1 ; out . mX [ 2 ] = - ( M_idx_0 != 0 ?
1591.5494309189535 : 0.0 ) ; out . mX [ 3 ] = t2 ; ( void ) sys ; ( void ) t5
; return 0 ; }
