#include "__cf_Aluminum_Robot_ARM.h"
#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
PmfMessageId Aluminum_Robot_ARM_3cd5c335_1_deriv ( const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const double
* state , const double * input , const double * inputDot , const double *
inputDdot , const double * discreteState , double * deriv , double *
errorResult , NeuDiagnosticManager * neDiagMgr ) { const double * rtdvd =
rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ;
int ii [ 1 ] ; double xx [ 179 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void )
eqnEnableFlags ; ( void ) inputDot ; ( void ) inputDdot ; ( void )
discreteState ; ( void ) neDiagMgr ; xx [ 0 ] = 0.6223770309673717 ; xx [ 1 ]
= 0.1039341541427324 ; xx [ 2 ] = 0.7757863900113715 ; xx [ 3 ] = - xx [ 0 ]
; xx [ 4 ] = xx [ 1 ] ; xx [ 5 ] = - xx [ 2 ] ; xx [ 6 ] = - ( xx [ 0 ] *
state [ 1 ] ) ; xx [ 7 ] = xx [ 1 ] * state [ 1 ] ; xx [ 8 ] = - ( xx [ 2 ] *
state [ 1 ] ) ; xx [ 9 ] = - ( 0.01149204454694182 * state [ 1 ] ) ; xx [ 10
] = 9.72699945369904e-3 * state [ 1 ] ; xx [ 11 ] = - ( 0.07168846386873985 *
state [ 1 ] ) ; pm_math_cross3 ( xx + 6 , xx + 9 , xx + 12 ) ; xx [ 15 ] = -
0.6346176628654751 ; xx [ 16 ] = 0.6360857280474078 ; xx [ 17 ] =
0.2677201164389672 ; xx [ 18 ] = 0.3478236734431223 ; xx [ 9 ] = 0.5 ; xx [
10 ] = xx [ 9 ] * state [ 2 ] ; xx [ 11 ] = 3.46958819767948e-3 ; xx [ 19 ] =
sin ( xx [ 10 ] ) ; xx [ 20 ] = 0.09115167987116077 ; xx [ 21 ] =
0.9958309762275948 ; xx [ 22 ] = cos ( xx [ 10 ] ) ; xx [ 23 ] = - ( xx [ 11
] * xx [ 19 ] ) ; xx [ 24 ] = xx [ 20 ] * xx [ 19 ] ; xx [ 25 ] = - ( xx [ 21
] * xx [ 19 ] ) ; pm_math_quatCompose ( xx + 15 , xx + 22 , xx + 26 ) ;
pm_math_quatInverseXform ( xx + 26 , xx + 6 , xx + 15 ) ; xx [ 10 ] = xx [ 11
] * state [ 3 ] ; xx [ 18 ] = xx [ 15 ] - xx [ 10 ] ; xx [ 19 ] = xx [ 20 ] *
state [ 3 ] ; xx [ 22 ] = xx [ 16 ] + xx [ 19 ] ; xx [ 23 ] = xx [ 21 ] *
state [ 3 ] ; xx [ 24 ] = xx [ 17 ] - xx [ 23 ] ; xx [ 30 ] = xx [ 18 ] ; xx
[ 31 ] = xx [ 22 ] ; xx [ 32 ] = xx [ 24 ] ; xx [ 25 ] = 2.412367904235388e-3
; xx [ 33 ] = 0.06961678783518813 ; xx [ 34 ] = 0.07095213698306442 ; xx [ 35
] = xx [ 18 ] * xx [ 25 ] ; xx [ 36 ] = xx [ 22 ] * xx [ 33 ] ; xx [ 37 ] =
xx [ 24 ] * xx [ 34 ] ; pm_math_cross3 ( xx + 30 , xx + 35 , xx + 38 ) ; xx [
41 ] = - 0.4975090844878828 ; xx [ 42 ] = - 0.4312760743433633 ; xx [ 43 ] =
- 0.5900191990405114 ; xx [ 44 ] = - 0.4672932733461935 ; xx [ 35 ] = xx [ 9
] * state [ 4 ] ; xx [ 36 ] = 0.2724806919110529 ; xx [ 37 ] = sin ( xx [ 35
] ) ; xx [ 45 ] = 0.9591809870827044 ; xx [ 46 ] = 0.07567104171823891 ; xx [
47 ] = cos ( xx [ 35 ] ) ; xx [ 48 ] = xx [ 36 ] * xx [ 37 ] ; xx [ 49 ] = -
( xx [ 45 ] * xx [ 37 ] ) ; xx [ 50 ] = xx [ 46 ] * xx [ 37 ] ;
pm_math_quatCompose ( xx + 41 , xx + 47 , xx + 51 ) ;
pm_math_quatInverseXform ( xx + 51 , xx + 30 , xx + 41 ) ; xx [ 35 ] = xx [
36 ] * state [ 5 ] ; xx [ 37 ] = xx [ 41 ] + xx [ 35 ] ; xx [ 44 ] = xx [ 45
] * state [ 5 ] ; xx [ 47 ] = xx [ 42 ] - xx [ 44 ] ; xx [ 48 ] = xx [ 46 ] *
state [ 5 ] ; xx [ 49 ] = xx [ 43 ] + xx [ 48 ] ; xx [ 55 ] = xx [ 37 ] ; xx
[ 56 ] = xx [ 47 ] ; xx [ 57 ] = xx [ 49 ] ; xx [ 50 ] = 0.1396578993216362 ;
xx [ 58 ] = 0.1423750938755072 ; xx [ 59 ] = 0.01112330076073647 ; xx [ 60 ]
= xx [ 37 ] * xx [ 50 ] ; xx [ 61 ] = xx [ 47 ] * xx [ 58 ] ; xx [ 62 ] = xx
[ 49 ] * xx [ 59 ] ; pm_math_cross3 ( xx + 55 , xx + 60 , xx + 63 ) ; xx [ 60
] = 0.5199080987731124 ; xx [ 61 ] = xx [ 9 ] * state [ 6 ] ; xx [ 62 ] = cos
( xx [ 61 ] ) ; xx [ 66 ] = 0.4380183192185113 ; xx [ 67 ] = sin ( xx [ 61 ]
) ; xx [ 61 ] = xx [ 60 ] * xx [ 62 ] + xx [ 66 ] * xx [ 67 ] ; xx [ 68 ] =
0.4103889911533808 ; xx [ 69 ] = 0.6077963448386543 ; xx [ 70 ] = xx [ 68 ] *
xx [ 62 ] + xx [ 69 ] * xx [ 67 ] ; xx [ 71 ] = - xx [ 70 ] ; xx [ 72 ] = xx
[ 68 ] * xx [ 67 ] - xx [ 69 ] * xx [ 62 ] ; xx [ 68 ] = xx [ 60 ] * xx [ 67
] - xx [ 66 ] * xx [ 62 ] ; xx [ 73 ] = xx [ 61 ] ; xx [ 74 ] = xx [ 71 ] ;
xx [ 75 ] = xx [ 72 ] ; xx [ 76 ] = xx [ 68 ] ; pm_math_quatInverseXform ( xx
+ 73 , xx + 55 , xx + 77 ) ; xx [ 60 ] = xx [ 79 ] + state [ 7 ] ; xx [ 80 ]
= xx [ 77 ] ; xx [ 81 ] = xx [ 78 ] ; xx [ 82 ] = xx [ 60 ] ; xx [ 62 ] =
9.060675151210404e-4 ; xx [ 66 ] = 2.384497588269881e-3 ; xx [ 67 ] =
2.411819180543483e-3 ; xx [ 83 ] = xx [ 62 ] * xx [ 77 ] ; xx [ 84 ] = xx [
66 ] * xx [ 78 ] ; xx [ 85 ] = xx [ 60 ] * xx [ 67 ] ; pm_math_cross3 ( xx +
80 , xx + 83 , xx + 86 ) ; xx [ 69 ] = 0.06076178437482628 ; xx [ 80 ] =
1.183177498458716 ; xx [ 81 ] = xx [ 71 ] ; xx [ 82 ] = xx [ 72 ] ; xx [ 83 ]
= xx [ 68 ] ; xx [ 71 ] = 0.02250000000000072 ; xx [ 84 ] = xx [ 71 ] * xx [
72 ] ; xx [ 85 ] = xx [ 68 ] * xx [ 69 ] + xx [ 70 ] * xx [ 71 ] ; xx [ 89 ]
= xx [ 69 ] * xx [ 72 ] ; xx [ 90 ] = - xx [ 84 ] ; xx [ 91 ] = - xx [ 85 ] ;
xx [ 92 ] = xx [ 89 ] ; pm_math_cross3 ( xx + 81 , xx + 90 , xx + 93 ) ; xx [
81 ] = 2.0 ; xx [ 90 ] = 6.325759716908248e-3 - ( ( xx [ 93 ] - xx [ 84 ] *
xx [ 61 ] ) * xx [ 81 ] - xx [ 69 ] ) ; xx [ 91 ] = - ( 0.02164782195543678 +
( xx [ 94 ] - xx [ 61 ] * xx [ 85 ] ) * xx [ 81 ] ) ; xx [ 92 ] =
0.2452615216924889 - ( xx [ 81 ] * ( xx [ 95 ] + xx [ 89 ] * xx [ 61 ] ) - xx
[ 71 ] ) ; pm_math_cross3 ( xx + 55 , xx + 90 , xx + 82 ) ; pm_math_cross3 (
xx + 55 , xx + 82 , xx + 93 ) ; pm_math_quatInverseXform ( xx + 73 , xx + 93
, xx + 55 ) ; xx [ 71 ] = xx [ 80 ] * xx [ 56 ] ; xx [ 82 ] =
6.780103926874684e-3 ; ii [ 0 ] = factorSymmetricPosDef ( xx + 82 , 1 , xx +
83 ) ; if ( ii [ 0 ] != 0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Revolute3' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 83 ] = ( input [ 3 ] - ( xx [ 88 ] + xx [ 69 ] * xx [
71 ] ) ) / xx [ 82 ] ; xx [ 93 ] = xx [ 86 ] + xx [ 62 ] * xx [ 78 ] * state
[ 7 ] ; xx [ 94 ] = xx [ 87 ] - xx [ 66 ] * xx [ 77 ] * state [ 7 ] ; xx [ 95
] = xx [ 88 ] + xx [ 67 ] * xx [ 83 ] ; pm_math_quatXform ( xx + 73 , xx + 93
, xx + 84 ) ; xx [ 78 ] = xx [ 69 ] * state [ 7 ] ; xx [ 69 ] =
0.07189197603849484 ; xx [ 87 ] = xx [ 80 ] * ( xx [ 55 ] - ( xx [ 79 ] + xx
[ 60 ] ) * xx [ 78 ] ) ; xx [ 88 ] = xx [ 71 ] + xx [ 69 ] * xx [ 83 ] ; xx [
89 ] = ( ( xx [ 77 ] + xx [ 77 ] ) * xx [ 78 ] + xx [ 57 ] ) * xx [ 80 ] ;
pm_math_quatXform ( xx + 73 , xx + 87 , xx + 55 ) ; pm_math_cross3 ( xx + 90
, xx + 55 , xx + 77 ) ; xx [ 60 ] = xx [ 61 ] * xx [ 61 ] ; xx [ 71 ] = 1.0 ;
xx [ 87 ] = ( xx [ 60 ] + xx [ 70 ] * xx [ 70 ] ) * xx [ 81 ] - xx [ 71 ] ;
xx [ 88 ] = xx [ 70 ] * xx [ 72 ] ; xx [ 89 ] = xx [ 68 ] * xx [ 61 ] ; xx [
93 ] = xx [ 81 ] * ( xx [ 88 ] + xx [ 89 ] ) ; xx [ 94 ] = xx [ 61 ] * xx [
72 ] ; xx [ 95 ] = xx [ 68 ] * xx [ 70 ] ; xx [ 96 ] = ( xx [ 94 ] - xx [ 95
] ) * xx [ 81 ] ; xx [ 97 ] = ( xx [ 89 ] - xx [ 88 ] ) * xx [ 81 ] ; xx [ 88
] = ( xx [ 60 ] + xx [ 72 ] * xx [ 72 ] ) * xx [ 81 ] - xx [ 71 ] ; xx [ 89 ]
= xx [ 68 ] * xx [ 72 ] ; xx [ 72 ] = xx [ 70 ] * xx [ 61 ] ; xx [ 61 ] = xx
[ 81 ] * ( xx [ 89 ] + xx [ 72 ] ) ; xx [ 70 ] = xx [ 81 ] * ( xx [ 95 ] + xx
[ 94 ] ) ; xx [ 94 ] = ( xx [ 89 ] - xx [ 72 ] ) * xx [ 81 ] ; xx [ 72 ] = (
xx [ 60 ] + xx [ 68 ] * xx [ 68 ] ) * xx [ 81 ] - xx [ 71 ] ; xx [ 98 ] = xx
[ 87 ] ; xx [ 99 ] = - xx [ 93 ] ; xx [ 100 ] = xx [ 96 ] ; xx [ 101 ] = xx [
97 ] ; xx [ 102 ] = xx [ 88 ] ; xx [ 103 ] = xx [ 61 ] ; xx [ 104 ] = - xx [
70 ] ; xx [ 105 ] = xx [ 94 ] ; xx [ 106 ] = xx [ 72 ] ; xx [ 60 ] = xx [ 67
] / xx [ 82 ] ; xx [ 68 ] = xx [ 67 ] - xx [ 67 ] * xx [ 60 ] ; xx [ 107 ] =
xx [ 62 ] * xx [ 87 ] ; xx [ 108 ] = xx [ 62 ] * xx [ 97 ] ; xx [ 109 ] = - (
xx [ 62 ] * xx [ 70 ] ) ; xx [ 110 ] = - ( xx [ 66 ] * xx [ 93 ] ) ; xx [ 111
] = xx [ 66 ] * xx [ 88 ] ; xx [ 112 ] = xx [ 66 ] * xx [ 94 ] ; xx [ 113 ] =
xx [ 96 ] * xx [ 68 ] ; xx [ 114 ] = xx [ 61 ] * xx [ 68 ] ; xx [ 115 ] = xx
[ 68 ] * xx [ 72 ] ; pm_math_matrix3x3Compose ( xx + 98 , xx + 107 , xx + 116
) ; xx [ 62 ] = xx [ 69 ] / xx [ 82 ] ; xx [ 66 ] = xx [ 67 ] * xx [ 62 ] ;
xx [ 67 ] = xx [ 66 ] * xx [ 93 ] ; xx [ 68 ] = xx [ 96 ] * xx [ 67 ] ; xx [
82 ] = xx [ 66 ] * xx [ 88 ] ; xx [ 89 ] = xx [ 96 ] * xx [ 82 ] ; xx [ 95 ]
= xx [ 94 ] * xx [ 66 ] ; xx [ 66 ] = xx [ 96 ] * xx [ 95 ] ; xx [ 107 ] = xx
[ 61 ] * xx [ 67 ] ; xx [ 108 ] = xx [ 61 ] * xx [ 82 ] ; xx [ 109 ] = xx [
61 ] * xx [ 95 ] ; xx [ 110 ] = xx [ 67 ] * xx [ 72 ] ; xx [ 67 ] = xx [ 82 ]
* xx [ 72 ] ; xx [ 82 ] = xx [ 95 ] * xx [ 72 ] ; xx [ 125 ] = xx [ 68 ] ; xx
[ 126 ] = - xx [ 89 ] ; xx [ 127 ] = - xx [ 66 ] ; xx [ 128 ] = xx [ 107 ] ;
xx [ 129 ] = - xx [ 108 ] ; xx [ 130 ] = - xx [ 109 ] ; xx [ 131 ] = xx [ 110
] ; xx [ 132 ] = - xx [ 67 ] ; xx [ 133 ] = - xx [ 82 ] ;
pm_math_matrix3x3PostCross ( xx + 125 , xx + 90 , xx + 134 ) ; xx [ 95 ] = xx
[ 80 ] - xx [ 69 ] * xx [ 62 ] ; xx [ 125 ] = xx [ 80 ] * xx [ 87 ] ; xx [
126 ] = xx [ 80 ] * xx [ 97 ] ; xx [ 127 ] = - ( xx [ 80 ] * xx [ 70 ] ) ; xx
[ 128 ] = - ( xx [ 93 ] * xx [ 95 ] ) ; xx [ 129 ] = xx [ 95 ] * xx [ 88 ] ;
xx [ 130 ] = xx [ 94 ] * xx [ 95 ] ; xx [ 131 ] = xx [ 80 ] * xx [ 96 ] ; xx
[ 132 ] = xx [ 80 ] * xx [ 61 ] ; xx [ 133 ] = xx [ 80 ] * xx [ 72 ] ;
pm_math_matrix3x3Compose ( xx + 98 , xx + 125 , xx + 143 ) ;
pm_math_matrix3x3PostCross ( xx + 143 , xx + 90 , xx + 93 ) ;
pm_math_matrix3x3PreCross ( xx + 93 , xx + 90 , xx + 125 ) ; xx [ 61 ] = xx [
116 ] - xx [ 134 ] - xx [ 134 ] - xx [ 125 ] ; xx [ 69 ] = xx [ 117 ] - xx [
135 ] - xx [ 137 ] - xx [ 126 ] ; xx [ 70 ] = xx [ 118 ] - xx [ 136 ] - xx [
140 ] - xx [ 127 ] ; xx [ 72 ] = xx [ 119 ] - xx [ 137 ] - xx [ 135 ] - xx [
128 ] ; xx [ 80 ] = xx [ 120 ] - xx [ 138 ] - xx [ 138 ] - xx [ 129 ] ; xx [
87 ] = xx [ 121 ] - xx [ 139 ] - xx [ 141 ] - xx [ 130 ] ; xx [ 88 ] = xx [
122 ] - xx [ 140 ] - xx [ 136 ] - xx [ 131 ] ; xx [ 102 ] = xx [ 123 ] - xx [
141 ] - xx [ 139 ] - xx [ 132 ] ; xx [ 103 ] = xx [ 124 ] - xx [ 142 ] - xx [
142 ] - xx [ 133 ] ; xx [ 111 ] = xx [ 50 ] + xx [ 61 ] ; xx [ 112 ] = xx [
69 ] ; xx [ 113 ] = xx [ 70 ] ; xx [ 114 ] = xx [ 72 ] ; xx [ 115 ] = xx [ 58
] + xx [ 80 ] ; xx [ 116 ] = xx [ 87 ] ; xx [ 117 ] = xx [ 88 ] ; xx [ 118 ]
= xx [ 102 ] ; xx [ 119 ] = xx [ 59 ] + xx [ 103 ] ; xx [ 104 ] = xx [ 35 ] ;
xx [ 105 ] = - xx [ 44 ] ; xx [ 106 ] = xx [ 48 ] ; pm_math_cross3 ( xx + 41
, xx + 104 , xx + 120 ) ; pm_math_matrix3x3Xform ( xx + 111 , xx + 120 , xx +
104 ) ; xx [ 35 ] = xx [ 93 ] - xx [ 68 ] ; xx [ 44 ] = xx [ 89 ] + xx [ 96 ]
; xx [ 48 ] = xx [ 66 ] + xx [ 99 ] ; xx [ 66 ] = xx [ 94 ] - xx [ 107 ] ; xx
[ 68 ] = xx [ 108 ] + xx [ 97 ] ; xx [ 89 ] = xx [ 109 ] + xx [ 100 ] ; xx [
93 ] = xx [ 95 ] - xx [ 110 ] ; xx [ 94 ] = xx [ 67 ] + xx [ 98 ] ; xx [ 67 ]
= xx [ 82 ] + xx [ 101 ] ; xx [ 123 ] = - xx [ 35 ] ; xx [ 124 ] = - xx [ 44
] ; xx [ 125 ] = - xx [ 48 ] ; xx [ 126 ] = - xx [ 66 ] ; xx [ 127 ] = - xx [
68 ] ; xx [ 128 ] = - xx [ 89 ] ; xx [ 129 ] = - xx [ 93 ] ; xx [ 130 ] = -
xx [ 94 ] ; xx [ 131 ] = - xx [ 67 ] ; xx [ 95 ] = xx [ 41 ] + xx [ 37 ] ; xx
[ 96 ] = xx [ 42 ] + xx [ 47 ] ; xx [ 97 ] = xx [ 43 ] + xx [ 49 ] ; xx [ 37
] = 0.1073883611741656 ; xx [ 41 ] = 0.03350010374115508 ; xx [ 42 ] =
0.03794592426221813 ; xx [ 98 ] = - ( xx [ 37 ] * state [ 5 ] ) ; xx [ 99 ] =
- ( xx [ 41 ] * state [ 5 ] ) ; xx [ 100 ] = - ( xx [ 42 ] * state [ 5 ] ) ;
pm_math_cross3 ( xx + 95 , xx + 98 , xx + 107 ) ; xx [ 95 ] =
0.04398570207652783 ; xx [ 96 ] = - 0.01557660780770878 ; xx [ 97 ] = -
0.1107295332843811 ; pm_math_quatXform ( xx + 51 , xx + 95 , xx + 98 ) ; xx [
95 ] = 0.2092407478047954 - xx [ 98 ] ; xx [ 96 ] = 6.994431946624804e-3 - xx
[ 99 ] ; xx [ 97 ] = 0.03538571580294131 - xx [ 100 ] ; pm_math_cross3 ( xx +
30 , xx + 95 , xx + 98 ) ; pm_math_cross3 ( xx + 30 , xx + 98 , xx + 132 ) ;
pm_math_quatInverseXform ( xx + 51 , xx + 132 , xx + 30 ) ; xx [ 43 ] = xx [
107 ] + xx [ 30 ] ; xx [ 47 ] = xx [ 108 ] + xx [ 31 ] ; xx [ 30 ] = xx [ 109
] + xx [ 32 ] ; xx [ 98 ] = xx [ 43 ] ; xx [ 99 ] = xx [ 47 ] ; xx [ 100 ] =
xx [ 30 ] ; pm_math_matrix3x3Xform ( xx + 123 , xx + 98 , xx + 107 ) ; xx [
31 ] = xx [ 63 ] + xx [ 84 ] + xx [ 77 ] + xx [ 104 ] + xx [ 107 ] ; xx [ 132
] = xx [ 36 ] ; xx [ 133 ] = - xx [ 45 ] ; xx [ 134 ] = xx [ 46 ] ;
pm_math_matrix3x3Xform ( xx + 111 , xx + 132 , xx + 135 ) ; xx [ 110 ] = - xx
[ 37 ] ; xx [ 111 ] = - xx [ 41 ] ; xx [ 112 ] = - xx [ 42 ] ;
pm_math_matrix3x3Xform ( xx + 123 , xx + 110 , xx + 113 ) ; xx [ 32 ] = xx [
135 ] + xx [ 113 ] ; xx [ 49 ] = xx [ 64 ] + xx [ 85 ] + xx [ 78 ] + xx [ 105
] + xx [ 108 ] ; xx [ 63 ] = xx [ 65 ] + xx [ 86 ] + xx [ 79 ] + xx [ 106 ] +
xx [ 109 ] ; xx [ 77 ] = xx [ 31 ] ; xx [ 78 ] = xx [ 49 ] ; xx [ 79 ] = xx [
63 ] ; pm_math_matrix3x3TransposeXform ( xx + 123 , xx + 120 , xx + 84 ) ; xx
[ 64 ] = 8.004733174432531 ; xx [ 152 ] = xx [ 64 ] + xx [ 143 ] ; xx [ 153 ]
= xx [ 144 ] ; xx [ 154 ] = xx [ 145 ] ; xx [ 155 ] = xx [ 146 ] ; xx [ 156 ]
= xx [ 64 ] + xx [ 147 ] ; xx [ 157 ] = xx [ 148 ] ; xx [ 158 ] = xx [ 149 ]
; xx [ 159 ] = xx [ 150 ] ; xx [ 160 ] = xx [ 64 ] + xx [ 151 ] ;
pm_math_matrix3x3Xform ( xx + 152 , xx + 98 , xx + 104 ) ; xx [ 65 ] = xx [
55 ] + xx [ 84 ] + xx [ 104 ] ; xx [ 55 ] = xx [ 56 ] + xx [ 85 ] + xx [ 105
] ; xx [ 56 ] = xx [ 57 ] + xx [ 86 ] + xx [ 106 ] ; xx [ 84 ] = xx [ 65 ] ;
xx [ 85 ] = xx [ 55 ] ; xx [ 86 ] = xx [ 56 ] ; xx [ 57 ] = xx [ 136 ] + xx [
114 ] ; xx [ 82 ] = xx [ 137 ] + xx [ 115 ] ; xx [ 98 ] = xx [ 32 ] ; xx [ 99
] = xx [ 57 ] ; xx [ 100 ] = xx [ 82 ] ; pm_math_matrix3x3TransposeXform ( xx
+ 123 , xx + 132 , xx + 104 ) ; pm_math_matrix3x3Xform ( xx + 152 , xx + 110
, xx + 107 ) ; xx [ 101 ] = xx [ 104 ] + xx [ 107 ] ; xx [ 113 ] = xx [ 105 ]
+ xx [ 108 ] ; xx [ 104 ] = xx [ 106 ] + xx [ 109 ] ; xx [ 105 ] = xx [ 101 ]
; xx [ 106 ] = xx [ 113 ] ; xx [ 107 ] = xx [ 104 ] ; xx [ 108 ] =
pm_math_dot3 ( xx + 132 , xx + 98 ) + pm_math_dot3 ( xx + 110 , xx + 105 ) ;
ii [ 0 ] = factorSymmetricPosDef ( xx + 108 , 1 , xx + 98 ) ; if ( ii [ 0 ]
!= 0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Revolute2' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 98 ] = ( input [ 2 ] - ( pm_math_dot3 ( xx + 132 , xx
+ 77 ) + pm_math_dot3 ( xx + 110 , xx + 84 ) ) ) / xx [ 108 ] ; xx [ 77 ] =
xx [ 31 ] + xx [ 32 ] * xx [ 98 ] ; xx [ 78 ] = xx [ 49 ] + xx [ 57 ] * xx [
98 ] ; xx [ 79 ] = xx [ 63 ] + xx [ 82 ] * xx [ 98 ] ; pm_math_quatXform ( xx
+ 51 , xx + 77 , xx + 84 ) ; xx [ 77 ] = xx [ 65 ] + xx [ 101 ] * xx [ 98 ] ;
xx [ 78 ] = xx [ 55 ] + xx [ 113 ] * xx [ 98 ] ; xx [ 79 ] = xx [ 56 ] + xx [
104 ] * xx [ 98 ] ; pm_math_quatXform ( xx + 51 , xx + 77 , xx + 105 ) ;
pm_math_cross3 ( xx + 95 , xx + 105 , xx + 77 ) ; xx [ 31 ] = xx [ 51 ] * xx
[ 51 ] ; xx [ 49 ] = xx [ 52 ] * xx [ 53 ] ; xx [ 55 ] = xx [ 51 ] * xx [ 54
] ; xx [ 56 ] = xx [ 52 ] * xx [ 54 ] ; xx [ 63 ] = xx [ 51 ] * xx [ 53 ] ;
xx [ 65 ] = xx [ 53 ] * xx [ 54 ] ; xx [ 99 ] = xx [ 51 ] * xx [ 52 ] ; xx [
123 ] = ( xx [ 31 ] + xx [ 52 ] * xx [ 52 ] ) * xx [ 81 ] - xx [ 71 ] ; xx [
124 ] = xx [ 81 ] * ( xx [ 49 ] - xx [ 55 ] ) ; xx [ 125 ] = ( xx [ 56 ] + xx
[ 63 ] ) * xx [ 81 ] ; xx [ 126 ] = ( xx [ 49 ] + xx [ 55 ] ) * xx [ 81 ] ;
xx [ 127 ] = ( xx [ 31 ] + xx [ 53 ] * xx [ 53 ] ) * xx [ 81 ] - xx [ 71 ] ;
xx [ 128 ] = xx [ 81 ] * ( xx [ 65 ] - xx [ 99 ] ) ; xx [ 129 ] = xx [ 81 ] *
( xx [ 56 ] - xx [ 63 ] ) ; xx [ 130 ] = ( xx [ 65 ] + xx [ 99 ] ) * xx [ 81
] ; xx [ 131 ] = ( xx [ 31 ] + xx [ 54 ] * xx [ 54 ] ) * xx [ 81 ] - xx [ 71
] ; xx [ 31 ] = xx [ 32 ] / xx [ 108 ] ; xx [ 49 ] = xx [ 57 ] * xx [ 31 ] ;
xx [ 55 ] = xx [ 82 ] * xx [ 31 ] ; xx [ 56 ] = xx [ 57 ] / xx [ 108 ] ; xx [
63 ] = xx [ 82 ] * xx [ 56 ] ; xx [ 65 ] = xx [ 82 ] / xx [ 108 ] ; xx [ 132
] = xx [ 61 ] - xx [ 32 ] * xx [ 31 ] + xx [ 50 ] ; xx [ 133 ] = xx [ 69 ] -
xx [ 49 ] ; xx [ 134 ] = xx [ 70 ] - xx [ 55 ] ; xx [ 135 ] = xx [ 72 ] - xx
[ 49 ] ; xx [ 136 ] = xx [ 80 ] - xx [ 57 ] * xx [ 56 ] + xx [ 58 ] ; xx [
137 ] = xx [ 87 ] - xx [ 63 ] ; xx [ 138 ] = xx [ 88 ] - xx [ 55 ] ; xx [ 139
] = xx [ 102 ] - xx [ 63 ] ; xx [ 140 ] = xx [ 103 ] - xx [ 82 ] * xx [ 65 ]
+ xx [ 59 ] ; pm_math_matrix3x3ComposeTranspose ( xx + 132 , xx + 123 , xx +
152 ) ; pm_math_matrix3x3Compose ( xx + 123 , xx + 152 , xx + 132 ) ; xx [ 49
] = xx [ 101 ] / xx [ 108 ] ; xx [ 50 ] = xx [ 113 ] / xx [ 108 ] ; xx [ 55 ]
= xx [ 104 ] / xx [ 108 ] ; xx [ 152 ] = - ( xx [ 35 ] + xx [ 32 ] * xx [ 49
] ) ; xx [ 153 ] = - ( xx [ 44 ] + xx [ 32 ] * xx [ 50 ] ) ; xx [ 154 ] = - (
xx [ 48 ] + xx [ 32 ] * xx [ 55 ] ) ; xx [ 155 ] = - ( xx [ 66 ] + xx [ 57 ]
* xx [ 49 ] ) ; xx [ 156 ] = - ( xx [ 68 ] + xx [ 57 ] * xx [ 50 ] ) ; xx [
157 ] = - ( xx [ 89 ] + xx [ 57 ] * xx [ 55 ] ) ; xx [ 158 ] = - ( xx [ 93 ]
+ xx [ 82 ] * xx [ 49 ] ) ; xx [ 159 ] = - ( xx [ 94 ] + xx [ 82 ] * xx [ 50
] ) ; xx [ 160 ] = - ( xx [ 67 ] + xx [ 82 ] * xx [ 55 ] ) ;
pm_math_matrix3x3ComposeTranspose ( xx + 152 , xx + 123 , xx + 161 ) ;
pm_math_matrix3x3Compose ( xx + 123 , xx + 161 , xx + 152 ) ;
pm_math_matrix3x3PostCross ( xx + 152 , xx + 95 , xx + 161 ) ; xx [ 32 ] = xx
[ 113 ] * xx [ 49 ] ; xx [ 35 ] = xx [ 104 ] * xx [ 49 ] ; xx [ 44 ] = xx [
104 ] * xx [ 50 ] ; xx [ 170 ] = xx [ 143 ] - xx [ 101 ] * xx [ 49 ] + xx [
64 ] ; xx [ 171 ] = xx [ 144 ] - xx [ 32 ] ; xx [ 172 ] = xx [ 145 ] - xx [
35 ] ; xx [ 173 ] = xx [ 146 ] - xx [ 32 ] ; xx [ 174 ] = xx [ 147 ] - xx [
113 ] * xx [ 50 ] + xx [ 64 ] ; xx [ 175 ] = xx [ 148 ] - xx [ 44 ] ; xx [
176 ] = xx [ 149 ] - xx [ 35 ] ; xx [ 177 ] = xx [ 150 ] - xx [ 44 ] ; xx [
178 ] = xx [ 151 ] - xx [ 104 ] * xx [ 55 ] + xx [ 64 ] ;
pm_math_matrix3x3ComposeTranspose ( xx + 170 , xx + 123 , xx + 108 ) ;
pm_math_matrix3x3Compose ( xx + 123 , xx + 108 , xx + 141 ) ;
pm_math_matrix3x3PostCross ( xx + 141 , xx + 95 , xx + 108 ) ;
pm_math_matrix3x3PreCross ( xx + 108 , xx + 95 , xx + 123 ) ; xx [ 32 ] = xx
[ 132 ] - xx [ 161 ] - xx [ 161 ] - xx [ 123 ] ; xx [ 35 ] = xx [ 133 ] - xx
[ 162 ] - xx [ 164 ] - xx [ 124 ] ; xx [ 44 ] = xx [ 134 ] - xx [ 163 ] - xx
[ 167 ] - xx [ 125 ] ; xx [ 48 ] = xx [ 135 ] - xx [ 164 ] - xx [ 162 ] - xx
[ 126 ] ; xx [ 57 ] = xx [ 136 ] - xx [ 165 ] - xx [ 165 ] - xx [ 127 ] ; xx
[ 58 ] = xx [ 137 ] - xx [ 166 ] - xx [ 168 ] - xx [ 128 ] ; xx [ 59 ] = xx [
138 ] - xx [ 167 ] - xx [ 163 ] - xx [ 129 ] ; xx [ 61 ] = xx [ 139 ] - xx [
168 ] - xx [ 166 ] - xx [ 130 ] ; xx [ 63 ] = xx [ 140 ] - xx [ 169 ] - xx [
169 ] - xx [ 131 ] ; xx [ 123 ] = xx [ 25 ] + xx [ 32 ] ; xx [ 124 ] = xx [
35 ] ; xx [ 125 ] = xx [ 44 ] ; xx [ 126 ] = xx [ 48 ] ; xx [ 127 ] = xx [ 33
] + xx [ 57 ] ; xx [ 128 ] = xx [ 58 ] ; xx [ 129 ] = xx [ 59 ] ; xx [ 130 ]
= xx [ 61 ] ; xx [ 131 ] = xx [ 34 ] + xx [ 63 ] ; xx [ 66 ] = - xx [ 10 ] ;
xx [ 67 ] = xx [ 19 ] ; xx [ 68 ] = - xx [ 23 ] ; pm_math_cross3 ( xx + 15 ,
xx + 66 , xx + 87 ) ; pm_math_matrix3x3Xform ( xx + 123 , xx + 87 , xx + 66 )
; xx [ 10 ] = xx [ 152 ] - xx [ 108 ] ; xx [ 19 ] = xx [ 153 ] - xx [ 111 ] ;
xx [ 23 ] = xx [ 154 ] - xx [ 114 ] ; xx [ 64 ] = xx [ 155 ] - xx [ 109 ] ;
xx [ 69 ] = xx [ 156 ] - xx [ 112 ] ; xx [ 70 ] = xx [ 157 ] - xx [ 115 ] ;
xx [ 72 ] = xx [ 158 ] - xx [ 110 ] ; xx [ 80 ] = xx [ 159 ] - xx [ 113 ] ;
xx [ 82 ] = xx [ 160 ] - xx [ 116 ] ; xx [ 108 ] = xx [ 10 ] ; xx [ 109 ] =
xx [ 19 ] ; xx [ 110 ] = xx [ 23 ] ; xx [ 111 ] = xx [ 64 ] ; xx [ 112 ] = xx
[ 69 ] ; xx [ 113 ] = xx [ 70 ] ; xx [ 114 ] = xx [ 72 ] ; xx [ 115 ] = xx [
80 ] ; xx [ 116 ] = xx [ 82 ] ; xx [ 99 ] = xx [ 15 ] + xx [ 18 ] ; xx [ 100
] = xx [ 16 ] + xx [ 22 ] ; xx [ 101 ] = xx [ 17 ] + xx [ 24 ] ; xx [ 15 ] =
6.714001730939487e-3 ; xx [ 16 ] = 0.1402789988265656 ; xx [ 17 ] =
0.01281680513782706 ; xx [ 102 ] = - ( xx [ 15 ] * state [ 3 ] ) ; xx [ 103 ]
= - ( xx [ 16 ] * state [ 3 ] ) ; xx [ 104 ] = - ( xx [ 17 ] * state [ 3 ] )
; pm_math_cross3 ( xx + 99 , xx + 102 , xx + 117 ) ; xx [ 99 ] = -
0.1407398768514533 ; xx [ 100 ] = 3.421461385860196e-3 ; xx [ 101 ] =
0.03627804230933915 ; pm_math_quatXform ( xx + 26 , xx + 99 , xx + 102 ) ; xx
[ 99 ] = 0.1201757092040852 - xx [ 102 ] ; xx [ 100 ] = - (
7.110878959537235e-3 + xx [ 103 ] ) ; xx [ 101 ] = 2.53404406177922e-3 - xx [
104 ] ; pm_math_cross3 ( xx + 6 , xx + 99 , xx + 102 ) ; pm_math_cross3 ( xx
+ 6 , xx + 102 , xx + 132 ) ; pm_math_quatInverseXform ( xx + 26 , xx + 132 ,
xx + 102 ) ; xx [ 18 ] = xx [ 117 ] + xx [ 102 ] ; xx [ 22 ] = xx [ 118 ] +
xx [ 103 ] ; xx [ 24 ] = xx [ 119 ] + xx [ 104 ] ; xx [ 102 ] = xx [ 18 ] ;
xx [ 103 ] = xx [ 22 ] ; xx [ 104 ] = xx [ 24 ] ; pm_math_matrix3x3Xform ( xx
+ 108 , xx + 102 , xx + 117 ) ; xx [ 93 ] = xx [ 38 ] + xx [ 84 ] + xx [ 77 ]
+ xx [ 66 ] + xx [ 117 ] ; xx [ 132 ] = - xx [ 11 ] ; xx [ 133 ] = xx [ 20 ]
; xx [ 134 ] = - xx [ 21 ] ; pm_math_matrix3x3Xform ( xx + 123 , xx + 132 ,
xx + 135 ) ; xx [ 123 ] = - xx [ 15 ] ; xx [ 124 ] = - xx [ 16 ] ; xx [ 125 ]
= - xx [ 17 ] ; pm_math_matrix3x3Xform ( xx + 108 , xx + 123 , xx + 126 ) ;
xx [ 94 ] = xx [ 135 ] + xx [ 126 ] ; xx [ 129 ] = xx [ 39 ] + xx [ 85 ] + xx
[ 78 ] + xx [ 67 ] + xx [ 118 ] ; xx [ 38 ] = xx [ 40 ] + xx [ 86 ] + xx [ 79
] + xx [ 68 ] + xx [ 119 ] ; xx [ 66 ] = xx [ 93 ] ; xx [ 67 ] = xx [ 129 ] ;
xx [ 68 ] = xx [ 38 ] ; pm_math_matrix3x3TransposeXform ( xx + 108 , xx + 87
, xx + 77 ) ; xx [ 39 ] = 3.625089926187905 ; xx [ 150 ] = xx [ 39 ] + xx [
141 ] ; xx [ 151 ] = xx [ 142 ] ; xx [ 152 ] = xx [ 143 ] ; xx [ 153 ] = xx [
144 ] ; xx [ 154 ] = xx [ 39 ] + xx [ 145 ] ; xx [ 155 ] = xx [ 146 ] ; xx [
156 ] = xx [ 147 ] ; xx [ 157 ] = xx [ 148 ] ; xx [ 158 ] = xx [ 39 ] + xx [
149 ] ; pm_math_matrix3x3Xform ( xx + 150 , xx + 102 , xx + 84 ) ; xx [ 40 ]
= xx [ 105 ] + xx [ 77 ] + xx [ 84 ] ; xx [ 102 ] = xx [ 106 ] + xx [ 78 ] +
xx [ 85 ] ; xx [ 77 ] = xx [ 107 ] + xx [ 79 ] + xx [ 86 ] ; xx [ 84 ] = xx [
40 ] ; xx [ 85 ] = xx [ 102 ] ; xx [ 86 ] = xx [ 77 ] ; xx [ 78 ] = xx [ 136
] + xx [ 127 ] ; xx [ 79 ] = xx [ 137 ] + xx [ 128 ] ; xx [ 103 ] = xx [ 94 ]
; xx [ 104 ] = xx [ 78 ] ; xx [ 105 ] = xx [ 79 ] ;
pm_math_matrix3x3TransposeXform ( xx + 108 , xx + 132 , xx + 117 ) ;
pm_math_matrix3x3Xform ( xx + 150 , xx + 123 , xx + 106 ) ; xx [ 109 ] = xx [
117 ] + xx [ 106 ] ; xx [ 110 ] = xx [ 118 ] + xx [ 107 ] ; xx [ 106 ] = xx [
119 ] + xx [ 108 ] ; xx [ 111 ] = xx [ 109 ] ; xx [ 112 ] = xx [ 110 ] ; xx [
113 ] = xx [ 106 ] ; xx [ 107 ] = pm_math_dot3 ( xx + 132 , xx + 103 ) +
pm_math_dot3 ( xx + 123 , xx + 111 ) ; ii [ 0 ] = factorSymmetricPosDef ( xx
+ 107 , 1 , xx + 103 ) ; if ( ii [ 0 ] != 0 ) { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Revolute1' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 103 ] = ( input [ 1 ] - ( pm_math_dot3 ( xx + 132 , xx
+ 66 ) + pm_math_dot3 ( xx + 123 , xx + 84 ) ) ) / xx [ 107 ] ; xx [ 66 ] =
xx [ 93 ] + xx [ 94 ] * xx [ 103 ] ; xx [ 67 ] = xx [ 129 ] + xx [ 78 ] * xx
[ 103 ] ; xx [ 68 ] = xx [ 38 ] + xx [ 79 ] * xx [ 103 ] ; pm_math_quatXform
( xx + 26 , xx + 66 , xx + 84 ) ; xx [ 66 ] = xx [ 40 ] + xx [ 109 ] * xx [
103 ] ; xx [ 67 ] = xx [ 102 ] + xx [ 110 ] * xx [ 103 ] ; xx [ 68 ] = xx [
77 ] + xx [ 106 ] * xx [ 103 ] ; pm_math_quatXform ( xx + 26 , xx + 66 , xx +
111 ) ; pm_math_cross3 ( xx + 99 , xx + 111 , xx + 66 ) ; xx [ 38 ] = xx [ 26
] * xx [ 26 ] ; xx [ 40 ] = xx [ 27 ] * xx [ 28 ] ; xx [ 77 ] = xx [ 26 ] *
xx [ 29 ] ; xx [ 93 ] = xx [ 27 ] * xx [ 29 ] ; xx [ 102 ] = xx [ 26 ] * xx [
28 ] ; xx [ 104 ] = xx [ 28 ] * xx [ 29 ] ; xx [ 105 ] = xx [ 26 ] * xx [ 27
] ; xx [ 123 ] = ( xx [ 38 ] + xx [ 27 ] * xx [ 27 ] ) * xx [ 81 ] - xx [ 71
] ; xx [ 124 ] = xx [ 81 ] * ( xx [ 40 ] - xx [ 77 ] ) ; xx [ 125 ] = ( xx [
93 ] + xx [ 102 ] ) * xx [ 81 ] ; xx [ 126 ] = ( xx [ 40 ] + xx [ 77 ] ) * xx
[ 81 ] ; xx [ 127 ] = ( xx [ 38 ] + xx [ 28 ] * xx [ 28 ] ) * xx [ 81 ] - xx
[ 71 ] ; xx [ 128 ] = xx [ 81 ] * ( xx [ 104 ] - xx [ 105 ] ) ; xx [ 129 ] =
xx [ 81 ] * ( xx [ 93 ] - xx [ 102 ] ) ; xx [ 130 ] = ( xx [ 104 ] + xx [ 105
] ) * xx [ 81 ] ; xx [ 131 ] = ( xx [ 38 ] + xx [ 29 ] * xx [ 29 ] ) * xx [
81 ] - xx [ 71 ] ; xx [ 38 ] = xx [ 109 ] / xx [ 107 ] ; xx [ 40 ] = xx [ 110
] / xx [ 107 ] ; xx [ 71 ] = xx [ 106 ] / xx [ 107 ] ; xx [ 132 ] = xx [ 10 ]
- xx [ 94 ] * xx [ 38 ] ; xx [ 133 ] = xx [ 19 ] - xx [ 94 ] * xx [ 40 ] ; xx
[ 134 ] = xx [ 23 ] - xx [ 94 ] * xx [ 71 ] ; xx [ 135 ] = xx [ 64 ] - xx [
78 ] * xx [ 38 ] ; xx [ 136 ] = xx [ 69 ] - xx [ 78 ] * xx [ 40 ] ; xx [ 137
] = xx [ 70 ] - xx [ 78 ] * xx [ 71 ] ; xx [ 138 ] = xx [ 72 ] - xx [ 79 ] *
xx [ 38 ] ; xx [ 139 ] = xx [ 80 ] - xx [ 79 ] * xx [ 40 ] ; xx [ 140 ] = xx
[ 82 ] - xx [ 79 ] * xx [ 71 ] ; pm_math_matrix3x3ComposeTranspose ( xx + 132
, xx + 123 , xx + 150 ) ; pm_math_matrix3x3Compose ( xx + 123 , xx + 150 , xx
+ 132 ) ; xx [ 10 ] = xx [ 110 ] * xx [ 38 ] ; xx [ 19 ] = xx [ 106 ] * xx [
38 ] ; xx [ 23 ] = xx [ 106 ] * xx [ 40 ] ; xx [ 150 ] = xx [ 141 ] - xx [
109 ] * xx [ 38 ] + xx [ 39 ] ; xx [ 151 ] = xx [ 142 ] - xx [ 10 ] ; xx [
152 ] = xx [ 143 ] - xx [ 19 ] ; xx [ 153 ] = xx [ 144 ] - xx [ 10 ] ; xx [
154 ] = xx [ 145 ] - xx [ 110 ] * xx [ 40 ] + xx [ 39 ] ; xx [ 155 ] = xx [
146 ] - xx [ 23 ] ; xx [ 156 ] = xx [ 147 ] - xx [ 19 ] ; xx [ 157 ] = xx [
148 ] - xx [ 23 ] ; xx [ 158 ] = xx [ 149 ] - xx [ 106 ] * xx [ 71 ] + xx [
39 ] ; pm_math_matrix3x3ComposeTranspose ( xx + 150 , xx + 123 , xx + 141 ) ;
pm_math_matrix3x3Compose ( xx + 123 , xx + 141 , xx + 150 ) ;
pm_math_matrix3x3PostCross ( xx + 150 , xx + 99 , xx + 141 ) ; xx [ 159 ] =
xx [ 132 ] - xx [ 141 ] ; xx [ 160 ] = xx [ 133 ] - xx [ 144 ] ; xx [ 161 ] =
xx [ 134 ] - xx [ 147 ] ; xx [ 162 ] = xx [ 135 ] - xx [ 142 ] ; xx [ 163 ] =
xx [ 136 ] - xx [ 145 ] ; xx [ 164 ] = xx [ 137 ] - xx [ 148 ] ; xx [ 165 ] =
xx [ 138 ] - xx [ 143 ] ; xx [ 166 ] = xx [ 139 ] - xx [ 146 ] ; xx [ 167 ] =
xx [ 140 ] - xx [ 149 ] ; xx [ 10 ] = 2.865896225298708e-4 ; xx [ 19 ] =
0.05740946930939202 ; xx [ 23 ] = 7.921215826873348e-3 ; xx [ 104 ] = xx [ 10
] * state [ 1 ] ; xx [ 105 ] = - ( xx [ 19 ] * state [ 1 ] ) ; xx [ 106 ] = -
( xx [ 23 ] * state [ 1 ] ) ; pm_math_cross3 ( xx + 6 , xx + 104 , xx + 108 )
; pm_math_matrix3x3Xform ( xx + 159 , xx + 108 , xx + 6 ) ; xx [ 104 ] = xx [
12 ] + xx [ 84 ] + xx [ 66 ] + xx [ 6 ] ; xx [ 105 ] = xx [ 13 ] + xx [ 85 ]
+ xx [ 67 ] + xx [ 7 ] ; xx [ 106 ] = xx [ 14 ] + xx [ 86 ] + xx [ 68 ] + xx
[ 8 ] ; xx [ 6 ] = xx [ 10 ] ; xx [ 7 ] = - xx [ 19 ] ; xx [ 8 ] = - xx [ 23
] ; xx [ 12 ] = 9.096721286140776 ; xx [ 168 ] = xx [ 12 ] + xx [ 150 ] ; xx
[ 169 ] = xx [ 151 ] ; xx [ 170 ] = xx [ 152 ] ; xx [ 171 ] = xx [ 153 ] ; xx
[ 172 ] = xx [ 12 ] + xx [ 154 ] ; xx [ 173 ] = xx [ 155 ] ; xx [ 174 ] = xx
[ 156 ] ; xx [ 175 ] = xx [ 157 ] ; xx [ 176 ] = xx [ 12 ] + xx [ 158 ] ;
pm_math_matrix3x3Xform ( xx + 168 , xx + 108 , xx + 12 ) ; xx [ 66 ] = xx [
111 ] + xx [ 12 ] ; xx [ 67 ] = xx [ 112 ] + xx [ 13 ] ; xx [ 68 ] = xx [ 113
] + xx [ 14 ] ; xx [ 12 ] = xx [ 94 ] / xx [ 107 ] ; xx [ 13 ] = xx [ 78 ] *
xx [ 12 ] ; xx [ 14 ] = xx [ 79 ] * xx [ 12 ] ; xx [ 39 ] = xx [ 78 ] / xx [
107 ] ; xx [ 64 ] = xx [ 79 ] * xx [ 39 ] ; xx [ 69 ] = xx [ 79 ] / xx [ 107
] ; xx [ 111 ] = xx [ 32 ] - xx [ 94 ] * xx [ 12 ] + xx [ 25 ] ; xx [ 112 ] =
xx [ 35 ] - xx [ 13 ] ; xx [ 113 ] = xx [ 44 ] - xx [ 14 ] ; xx [ 114 ] = xx
[ 48 ] - xx [ 13 ] ; xx [ 115 ] = xx [ 57 ] - xx [ 78 ] * xx [ 39 ] + xx [ 33
] ; xx [ 116 ] = xx [ 58 ] - xx [ 64 ] ; xx [ 117 ] = xx [ 59 ] - xx [ 14 ] ;
xx [ 118 ] = xx [ 61 ] - xx [ 64 ] ; xx [ 119 ] = xx [ 63 ] - xx [ 79 ] * xx
[ 69 ] + xx [ 34 ] ; pm_math_matrix3x3ComposeTranspose ( xx + 111 , xx + 123
, xx + 150 ) ; pm_math_matrix3x3Compose ( xx + 123 , xx + 150 , xx + 111 ) ;
pm_math_matrix3x3PostCross ( xx + 132 , xx + 99 , xx + 123 ) ;
pm_math_matrix3x3PreCross ( xx + 141 , xx + 99 , xx + 132 ) ; xx [ 141 ] =
0.01846476327874685 + xx [ 111 ] - xx [ 123 ] - xx [ 123 ] - xx [ 132 ] ; xx
[ 142 ] = xx [ 112 ] - xx [ 124 ] - xx [ 126 ] - xx [ 133 ] ; xx [ 143 ] = xx
[ 113 ] - xx [ 125 ] - xx [ 129 ] - xx [ 134 ] ; xx [ 144 ] = xx [ 114 ] - xx
[ 126 ] - xx [ 124 ] - xx [ 135 ] ; xx [ 145 ] = 0.0935880946348107 + xx [
115 ] - xx [ 127 ] - xx [ 127 ] - xx [ 136 ] ; xx [ 146 ] = xx [ 116 ] - xx [
128 ] - xx [ 130 ] - xx [ 137 ] ; xx [ 147 ] = xx [ 117 ] - xx [ 129 ] - xx [
125 ] - xx [ 138 ] ; xx [ 148 ] = xx [ 118 ] - xx [ 130 ] - xx [ 128 ] - xx [
139 ] ; xx [ 149 ] = 0.09240747813027378 + xx [ 119 ] - xx [ 131 ] - xx [ 131
] - xx [ 140 ] ; pm_math_matrix3x3Xform ( xx + 141 , xx + 3 , xx + 32 ) ;
pm_math_matrix3x3Xform ( xx + 159 , xx + 6 , xx + 57 ) ; xx [ 77 ] = xx [ 32
] + xx [ 57 ] ; xx [ 78 ] = xx [ 33 ] + xx [ 58 ] ; xx [ 79 ] = xx [ 34 ] +
xx [ 59 ] ; pm_math_matrix3x3TransposeXform ( xx + 159 , xx + 3 , xx + 32 ) ;
pm_math_matrix3x3Xform ( xx + 168 , xx + 6 , xx + 57 ) ; xx [ 13 ] = xx [ 32
] + xx [ 57 ] ; xx [ 14 ] = xx [ 33 ] + xx [ 58 ] ; xx [ 25 ] = xx [ 34 ] +
xx [ 59 ] ; xx [ 32 ] = xx [ 13 ] ; xx [ 33 ] = xx [ 14 ] ; xx [ 34 ] = xx [
25 ] ; xx [ 35 ] = pm_math_dot3 ( xx + 3 , xx + 77 ) + pm_math_dot3 ( xx + 6
, xx + 32 ) ; ii [ 0 ] = factorSymmetricPosDef ( xx + 35 , 1 , xx + 32 ) ; if
( ii [ 0 ] != 0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'Aluminum_Robot_ARM/ROBOT4DOF/Subsystem/Revolute' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 32 ] = xx [ 13 ] / xx [ 35 ] ; xx [ 33 ] = xx [ 14 ] /
xx [ 35 ] ; xx [ 34 ] = xx [ 25 ] / xx [ 35 ] ; xx [ 77 ] =
0.9422787284768807 ; xx [ 78 ] = - 0.05585051596064775 ; xx [ 79 ] = -
0.3301325867908895 ; xx [ 80 ] = - 1.998215623677746e-3 ; xx [ 13 ] = xx [ 9
] * state [ 0 ] ; xx [ 9 ] = sin ( xx [ 13 ] ) ; xx [ 111 ] = cos ( xx [ 13 ]
) ; xx [ 112 ] = - ( xx [ 0 ] * xx [ 9 ] ) ; xx [ 113 ] = xx [ 1 ] * xx [ 9 ]
; xx [ 114 ] = - ( xx [ 2 ] * xx [ 9 ] ) ; pm_math_quatCompose ( xx + 77 , xx
+ 111 , xx + 115 ) ; xx [ 9 ] = 9.806649999999999 ; xx [ 13 ] = xx [ 9 ] * xx
[ 118 ] ; xx [ 14 ] = xx [ 9 ] * xx [ 116 ] ; xx [ 25 ] = ( xx [ 115 ] * xx [
13 ] + xx [ 117 ] * xx [ 14 ] ) * xx [ 81 ] ; xx [ 44 ] = ( xx [ 118 ] * xx [
13 ] + xx [ 116 ] * xx [ 14 ] ) * xx [ 81 ] ; xx [ 48 ] = xx [ 81 ] * ( xx [
117 ] * xx [ 13 ] - xx [ 115 ] * xx [ 14 ] ) ; xx [ 57 ] = xx [ 25 ] ; xx [
58 ] = xx [ 9 ] - xx [ 44 ] ; xx [ 59 ] = xx [ 48 ] ; xx [ 13 ] = ( input [ 0
] - ( pm_math_dot3 ( xx + 3 , xx + 104 ) + pm_math_dot3 ( xx + 6 , xx + 66 )
) ) / xx [ 35 ] - pm_math_dot3 ( xx + 32 , xx + 57 ) ; xx [ 3 ] = xx [ 12 ] ;
xx [ 4 ] = xx [ 39 ] ; xx [ 5 ] = xx [ 69 ] ; xx [ 6 ] = - ( xx [ 0 ] * xx [
13 ] ) ; xx [ 7 ] = xx [ 1 ] * xx [ 13 ] ; xx [ 8 ] = - ( xx [ 2 ] * xx [ 13
] ) ; pm_math_quatInverseXform ( xx + 26 , xx + 6 , xx + 0 ) ; xx [ 32 ] = xx
[ 38 ] ; xx [ 33 ] = xx [ 40 ] ; xx [ 34 ] = xx [ 71 ] ; pm_math_cross3 ( xx
+ 6 , xx + 99 , xx + 38 ) ; xx [ 6 ] = xx [ 25 ] + xx [ 10 ] * xx [ 13 ] + xx
[ 108 ] + xx [ 38 ] ; xx [ 7 ] = xx [ 109 ] - ( xx [ 19 ] * xx [ 13 ] + xx [
44 ] ) + xx [ 39 ] + xx [ 9 ] ; xx [ 8 ] = xx [ 48 ] - xx [ 23 ] * xx [ 13 ]
+ xx [ 110 ] + xx [ 40 ] ; pm_math_quatInverseXform ( xx + 26 , xx + 6 , xx +
38 ) ; xx [ 6 ] = xx [ 103 ] - ( pm_math_dot3 ( xx + 3 , xx + 0 ) +
pm_math_dot3 ( xx + 32 , xx + 38 ) ) ; xx [ 3 ] = xx [ 31 ] ; xx [ 4 ] = xx [
56 ] ; xx [ 5 ] = xx [ 65 ] ; xx [ 7 ] = xx [ 0 ] - xx [ 11 ] * xx [ 6 ] + xx
[ 87 ] ; xx [ 8 ] = xx [ 1 ] + xx [ 20 ] * xx [ 6 ] + xx [ 88 ] ; xx [ 9 ] =
xx [ 2 ] - xx [ 21 ] * xx [ 6 ] + xx [ 89 ] ; pm_math_quatInverseXform ( xx +
51 , xx + 7 , xx + 0 ) ; xx [ 10 ] = xx [ 49 ] ; xx [ 11 ] = xx [ 50 ] ; xx [
12 ] = xx [ 55 ] ; pm_math_cross3 ( xx + 7 , xx + 95 , xx + 19 ) ; xx [ 7 ] =
xx [ 38 ] - xx [ 15 ] * xx [ 6 ] + xx [ 18 ] + xx [ 19 ] ; xx [ 8 ] = xx [ 39
] - xx [ 16 ] * xx [ 6 ] + xx [ 22 ] + xx [ 20 ] ; xx [ 9 ] = xx [ 40 ] - xx
[ 17 ] * xx [ 6 ] + xx [ 24 ] + xx [ 21 ] ; pm_math_quatInverseXform ( xx +
51 , xx + 7 , xx + 14 ) ; xx [ 7 ] = xx [ 98 ] - ( pm_math_dot3 ( xx + 3 , xx
+ 0 ) + pm_math_dot3 ( xx + 10 , xx + 14 ) ) ; xx [ 3 ] = xx [ 0 ] + xx [ 36
] * xx [ 7 ] + xx [ 120 ] ; xx [ 4 ] = xx [ 1 ] - xx [ 45 ] * xx [ 7 ] + xx [
121 ] ; xx [ 5 ] = xx [ 2 ] + xx [ 46 ] * xx [ 7 ] + xx [ 122 ] ;
pm_math_quatInverseXform ( xx + 73 , xx + 3 , xx + 0 ) ; pm_math_cross3 ( xx
+ 3 , xx + 90 , xx + 8 ) ; xx [ 3 ] = xx [ 14 ] - xx [ 37 ] * xx [ 7 ] + xx [
43 ] + xx [ 8 ] ; xx [ 4 ] = xx [ 15 ] - xx [ 41 ] * xx [ 7 ] + xx [ 47 ] +
xx [ 9 ] ; xx [ 5 ] = xx [ 16 ] - xx [ 42 ] * xx [ 7 ] + xx [ 30 ] + xx [ 10
] ; pm_math_quatInverseXform ( xx + 73 , xx + 3 , xx + 8 ) ; deriv [ 0 ] =
state [ 1 ] ; deriv [ 1 ] = xx [ 13 ] ; deriv [ 2 ] = state [ 3 ] ; deriv [ 3
] = xx [ 6 ] ; deriv [ 4 ] = state [ 5 ] ; deriv [ 5 ] = xx [ 7 ] ; deriv [ 6
] = state [ 7 ] ; deriv [ 7 ] = xx [ 83 ] - ( xx [ 60 ] * xx [ 2 ] + xx [ 62
] * xx [ 9 ] ) ; errorResult [ 0 ] = 0.0 ; return NULL ; }
