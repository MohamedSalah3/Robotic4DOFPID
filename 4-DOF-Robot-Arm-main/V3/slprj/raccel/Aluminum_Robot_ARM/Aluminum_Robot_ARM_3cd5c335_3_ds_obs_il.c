#include "__cf_Aluminum_Robot_ARM.h"
#include "ne_ds.h"
#include "Aluminum_Robot_ARM_3cd5c335_3_ds_obs_il.h"
#include "Aluminum_Robot_ARM_3cd5c335_3_ds_sys_struct.h"
#include "Aluminum_Robot_ARM_3cd5c335_3_ds_externals.h"
#include "Aluminum_Robot_ARM_3cd5c335_3_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Aluminum_Robot_ARM_3cd5c335_3_ds_obs_il ( const NeDynamicSystem * sys
, const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmBoolVector
out ; ( void ) t1 ; out = t2 -> mOBS_IL ; out . mX [ 0 ] = true ; out . mX [
1 ] = true ; out . mX [ 2 ] = false ; out . mX [ 3 ] = false ; out . mX [ 4 ]
= true ; out . mX [ 5 ] = false ; out . mX [ 6 ] = false ; out . mX [ 7 ] =
true ; out . mX [ 8 ] = true ; out . mX [ 9 ] = true ; out . mX [ 10 ] = true
; out . mX [ 11 ] = true ; out . mX [ 12 ] = true ; out . mX [ 13 ] = true ;
out . mX [ 14 ] = true ; out . mX [ 15 ] = true ; out . mX [ 16 ] = true ;
out . mX [ 17 ] = true ; out . mX [ 18 ] = false ; out . mX [ 19 ] = true ;
out . mX [ 20 ] = true ; out . mX [ 21 ] = true ; out . mX [ 22 ] = true ;
out . mX [ 23 ] = true ; out . mX [ 24 ] = true ; out . mX [ 25 ] = true ;
out . mX [ 26 ] = true ; out . mX [ 27 ] = true ; out . mX [ 28 ] = true ;
out . mX [ 29 ] = true ; out . mX [ 30 ] = true ; out . mX [ 31 ] = true ;
out . mX [ 32 ] = false ; out . mX [ 33 ] = true ; out . mX [ 34 ] = true ;
out . mX [ 35 ] = true ; out . mX [ 36 ] = true ; out . mX [ 37 ] = true ;
out . mX [ 38 ] = true ; out . mX [ 39 ] = true ; out . mX [ 40 ] = false ;
out . mX [ 41 ] = true ; out . mX [ 42 ] = true ; out . mX [ 43 ] = false ;
out . mX [ 44 ] = true ; out . mX [ 45 ] = true ; out . mX [ 46 ] = true ;
out . mX [ 47 ] = true ; out . mX [ 48 ] = true ; out . mX [ 49 ] = true ;
out . mX [ 50 ] = false ; out . mX [ 51 ] = true ; out . mX [ 52 ] = true ;
out . mX [ 53 ] = true ; out . mX [ 54 ] = true ; out . mX [ 55 ] = false ;
out . mX [ 56 ] = false ; out . mX [ 57 ] = false ; out . mX [ 58 ] = false ;
out . mX [ 59 ] = true ; out . mX [ 60 ] = true ; out . mX [ 61 ] = true ;
out . mX [ 62 ] = false ; out . mX [ 63 ] = false ; out . mX [ 64 ] = false ;
out . mX [ 65 ] = false ; out . mX [ 66 ] = true ; out . mX [ 67 ] = true ;
out . mX [ 68 ] = true ; out . mX [ 69 ] = false ; out . mX [ 70 ] = false ;
out . mX [ 71 ] = false ; out . mX [ 72 ] = false ; out . mX [ 73 ] = true ;
out . mX [ 74 ] = true ; out . mX [ 75 ] = true ; out . mX [ 76 ] = true ;
out . mX [ 77 ] = true ; out . mX [ 78 ] = true ; out . mX [ 79 ] = true ;
out . mX [ 80 ] = true ; ( void ) sys ; ( void ) t2 ; return 0 ; }
