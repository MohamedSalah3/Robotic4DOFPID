#include "__cf_Aluminum_Robot_ARM.h"
#include "ne_ds.h"
#include "Aluminum_Robot_ARM_3cd5c335_2_ds_dxf.h"
#include "Aluminum_Robot_ARM_3cd5c335_2_ds_sys_struct.h"
#include "Aluminum_Robot_ARM_3cd5c335_2_ds_externals.h"
#include "Aluminum_Robot_ARM_3cd5c335_2_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Aluminum_Robot_ARM_3cd5c335_2_ds_dxf ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t4 , NeDsMethodOutput * t5 ) { PmRealVector out
; real_T t0 ; real_T t1 ; real_T t2 ; int32_T M_idx_0 ; int32_T M_idx_1 ;
int32_T M_idx_2 ; int32_T M_idx_4 ; M_idx_0 = t4 -> mM . mX [ 0 ] ; M_idx_1 =
t4 -> mM . mX [ 1 ] ; M_idx_2 = t4 -> mM . mX [ 2 ] ; M_idx_4 = t4 -> mM . mX
[ 4 ] ; out = t5 -> mDXF ; if ( M_idx_0 != 0 ) { t0 = -
1.3700789950265002E-11 ; } else if ( M_idx_1 != 0 ) { t0 = -
1.3700789950265002E-11 ; } else if ( M_idx_2 != 0 ) { t0 = -
1.826771993368667E-11 ; } else if ( M_idx_4 != 0 ) { t0 =
1.8267719933686667E-10 ; } else { t0 = - 1.826771993368667E-11 ; } if (
M_idx_0 != 0 ) { t1 = 0.074999999937192682 ; } else if ( M_idx_1 != 0 ) { t1
= 0.074999999937192682 ; } else if ( M_idx_2 != 0 ) { t1 =
0.09999999991625691 ; } else if ( M_idx_4 != 0 ) { t1 = - 0.999999999162569 ;
} else { t1 = 0.09999999991625691 ; } if ( M_idx_0 != 0 ) { t2 =
1.000000000075 ; } else if ( M_idx_1 != 0 ) { t2 = 1.000000000075 ; } else if
( M_idx_2 != 0 ) { t2 = 1.0000000001 ; } else if ( M_idx_4 != 0 ) { t2 = -
9.99999999162569E-10 ; } else { t2 = 1.0000000001 ; } out . mX [ 0 ] = t0 ;
out . mX [ 1 ] = t1 ; out . mX [ 2 ] = - ( M_idx_0 != 0 ? 1591.5494309189535
: 0.0 ) ; out . mX [ 3 ] = t2 ; ( void ) sys ; ( void ) t5 ; return 0 ; }
