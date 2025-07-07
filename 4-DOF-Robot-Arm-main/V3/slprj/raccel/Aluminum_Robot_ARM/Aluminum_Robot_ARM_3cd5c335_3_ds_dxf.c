#include "__cf_Aluminum_Robot_ARM.h"
#include "ne_ds.h"
#include "Aluminum_Robot_ARM_3cd5c335_3_ds_dxf.h"
#include "Aluminum_Robot_ARM_3cd5c335_3_ds_sys_struct.h"
#include "Aluminum_Robot_ARM_3cd5c335_3_ds_externals.h"
#include "Aluminum_Robot_ARM_3cd5c335_3_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Aluminum_Robot_ARM_3cd5c335_3_ds_dxf ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t5 , NeDsMethodOutput * t6 ) { PmRealVector out
; real_T t0 ; real_T t1 ; real_T t2 ; real_T t3 ; int32_T M_idx_4 ; int32_T
M_idx_0 ; int32_T M_idx_1 ; int32_T M_idx_2 ; int32_T M_idx_3 ; M_idx_0 = t5
-> mM . mX [ 0 ] ; M_idx_1 = t5 -> mM . mX [ 1 ] ; M_idx_2 = t5 -> mM . mX [
2 ] ; M_idx_3 = t5 -> mM . mX [ 3 ] ; M_idx_4 = t5 -> mM . mX [ 4 ] ; out =
t6 -> mDXF ; if ( M_idx_0 != 0 ) { t0 = - 1.3682296269774551E-11 ; } else if
( M_idx_1 != 0 ) { t0 = - 1.3682296269774551E-11 ; } else { t0 = -
1.8243061693032735E-11 ; } if ( M_idx_0 != 0 ) { t1 = 0.074999999914169155 ;
} else if ( M_idx_1 != 0 ) { t1 = 0.074999999914169155 ; } else { t1 =
0.099999999885558855 ; } if ( M_idx_0 != 0 ) { t2 = 1.000000000075 ; } else
if ( M_idx_1 != 0 ) { t2 = 1.000000000075 ; } else { t2 = 1.0000000001 ; } if
( M_idx_0 != 0 ) { t3 = 0.0 ; } else if ( M_idx_1 != 0 ) { t3 = 0.0 ; } else
if ( M_idx_2 != 0 ) { t3 = 0.0 ; } else if ( M_idx_3 != 0 ) { t3 = - ( (
M_idx_4 != 0 ? - 1.0 : 1.0 ) * 9.6000000000000014 ) ; } else { t3 = 0.0 ; }
out . mX [ 0 ] = t0 * 0.10416666666666666 ; out . mX [ 1 ] = t1 *
0.10416666666666666 ; out . mX [ 2 ] = - ( M_idx_0 != 0 ? 1591.5494309189535
: 0.0 ) ; out . mX [ 3 ] = t2 * 0.10416666666666666 ; out . mX [ 4 ] = t3 *
0.10416666666666666 ; ( void ) sys ; ( void ) t6 ; return 0 ; }
