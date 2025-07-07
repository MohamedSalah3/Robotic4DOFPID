#include "__cf_Aluminum_Robot_ARM.h"
#ifndef RTW_HEADER_Aluminum_Robot_ARM_h_
#define RTW_HEADER_Aluminum_Robot_ARM_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef Aluminum_Robot_ARM_COMMON_INCLUDES_
#define Aluminum_Robot_ARM_COMMON_INCLUDES_
#include <stdlib.h>
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging.h"
#include "dt_info.h"
#include "ext_work.h"
#include "nesl_rtw.h"
#include "Aluminum_Robot_ARM_3cd5c335_1_gateway.h"
#include "Aluminum_Robot_ARM_3cd5c335_3_gateway.h"
#include "Aluminum_Robot_ARM_3cd5c335_5_gateway.h"
#include "Aluminum_Robot_ARM_3cd5c335_4_gateway.h"
#include "Aluminum_Robot_ARM_3cd5c335_2_gateway.h"
#endif
#include "Aluminum_Robot_ARM_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME Aluminum_Robot_ARM
#define NSAMPLE_TIMES (5) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (105) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (40)   
#elif NCSTATES != 40
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T ktd2h4wayi [ 8 ] ; real_T olyap2fx01 [ 8 ] ; real_T
nq5ondror4 ; real_T aw3y3l5gc0 [ 4 ] ; real_T i53lpxrgtl ; real_T fzkuxy2mpg
; real_T ibymeqo4w3 ; real_T drh4o4lsrm ; real_T fpfaubmnjj ; real_T
pie23wd2bf ; real_T mxbqwluued ; real_T a1olpxanio ; real_T kia1ippuen ;
real_T jyxpzlsxjp ; real_T giapxchzsc ; real_T jwbkjot453 ; real_T iky3yyt4pc
; real_T bprngneuci ; real_T jws0qcirwo ; real_T j5lrlirlvy ; real_T
hwz513wtcp ; real_T jwmopbhf1l ; real_T ny2yf13znw ; real_T ilkoc43ltu ;
real_T exgpu4mzzl ; real_T hvq1hssahi ; real_T cuzdkp3u4j ; real_T oerp2b0et4
; real_T d2pifgecao ; real_T hvt3a3pw0z ; real_T jw2daefpkv ; real_T
o5l0llujzt ; real_T hjbicvqaq4 ; real_T ehzqu1jmju ; real_T mfkgxksgwr ;
real_T fcpppxuvag ; real_T p3ywisr0dv ; real_T gpl4kzhqur ; real_T gco3jzxyom
; real_T etnxfpjznh ; real_T c52coq543c ; real_T j0yyb35mlc ; real_T
ficpm2krqt ; real_T ipyiynxjfh ; real_T ktl1ztab5m ; real_T kddarmbprq ;
real_T e1djqxoyiu ; real_T fpmzk1nlis ; real_T btv3yvuomn ; real_T eeen4ada3p
; real_T br5skhqgef ; real_T inuxleclis ; real_T krtbfhbtm0 ; real_T
j0gqbgko2i ; real_T oknip1aipe ; real_T kivpoxi4vr ; real_T f0l35tzqgs ;
real_T ciyx4ip0mc ; real_T jexlycubeg ; real_T a0sz2tfduf ; real_T mt5eefv21t
; real_T fmmqt4ysyf ; real_T librkmwt3k ; real_T d30bf04ldl ; real_T
hjectoyfy3 ; real_T bvdhbj54q0 ; real_T l3unbkufet ; real_T f5abzmvimg ;
real_T lhs5btp42r ; real_T ierntvt5nm ; real_T eustrco4oa ; real_T dqzjzzlnzt
; real_T ctnr2llxd1 ; real_T mjvmdy05hg [ 4 ] ; real_T l0ydipaxdm [ 4 ] ;
real_T kfmkfo20tj [ 4 ] ; real_T dp5tl3nrhd [ 4 ] ; real_T cx5y3yvdok [ 11 ]
; real_T p2elnfut2o [ 2 ] ; real_T e1jqwcx00o [ 4 ] ; real_T plozcdvjyj [ 4 ]
; real_T mm054drprn [ 4 ] ; real_T ech2ew1rr2 [ 4 ] ; real_T eirl2ntjhd [ 11
] ; real_T fk1jgig4mk ; real_T i2goomhryg [ 4 ] ; real_T j2fnpsqpqo [ 4 ] ;
real_T he3hlshzz3 [ 4 ] ; real_T c1eemeez3i [ 4 ] ; real_T n5wwmjhbo3 [ 4 ] ;
real_T ex1x01f4oc [ 4 ] ; real_T m4tugv1m5k [ 11 ] ; real_T f2wzumnwx4 ;
real_T chzxe3k2dn [ 4 ] ; real_T ke4jnme1cl [ 4 ] ; real_T jgkcsd20s3 [ 4 ] ;
real_T nu0fcm3rf4 [ 4 ] ; real_T enbi2t101n [ 4 ] ; real_T ilihvuljus [ 11 ]
; real_T dbqqr4x2jx ; real_T pnk1tj1sdk [ 4 ] ; boolean_T elkmica4fl ;
boolean_T jkg3quvkxc ; boolean_T avhyg1sjte ; boolean_T czs44yka0h ; } B ;
typedef struct { real_T brd5pvpnwz ; real_T aph4a3hagw ; real_T nmj1xcahr1 ;
real_T k2qwlebtbj ; real_T pfrj0uy4xn ; real_T faouxk0mcc ; real_T j5idu3rbuu
; real_T mpnq3ofhxk ; real_T jtqxtmo1oi ; real_T g5fnflwjfz [ 2 ] ; real_T
lzyoonlrrq [ 2 ] ; real_T fahg2tibp4 [ 2 ] ; real_T n4e3fjrbpf ; real_T
jaoyvsgqpt ; real_T fo4d3b1zug [ 2 ] ; real_T oa43d4a4ep [ 2 ] ; real_T
jubld2f0oy [ 2 ] ; real_T m0ux4nsemt [ 2 ] ; real_T e0qmamr2s3 [ 2 ] ; real_T
cdofc10d2c ; real_T laqbkmsqgt ; real_T esdkzybfai [ 2 ] ; real_T ia553yu2wz
[ 2 ] ; real_T at0rqsdgt1 [ 2 ] ; real_T dll33owect [ 2 ] ; real_T efm5wrkv3j
; real_T hug3ibj3ji ; real_T hbdiwwiuy3 [ 2 ] ; real_T izya5bz1fe [ 2 ] ;
real_T iijr2xg2li [ 2 ] ; real_T deyfcmgmsf [ 2 ] ; real_T g42hzkrdme ;
real_T aw3x413kxh ; real_T irz3pmh2ot ; real_T f2nbr3luvy ; real_T mpmqkaspx1
; real_T cxsjqpuo4e ; real_T jy0kf1gtnz ; real_T l1mlsom4no ; real_T
hkg4huthek ; real_T g3r1cnilme ; real_T hwhuf1w0bo ; real_T l23eqhz4lj ;
real_T dqtlecgkn4 ; void * gpclr5jytr ; void * hwxj03owez ; void * fb2s2iht4c
; void * k3bhkg1udv ; void * pqkloj3n3k ; void * a0idm12ybz ; void *
hfzjpix1m2 ; void * psm45qaiki ; void * ndryjsauqt ; void * clj03fazmq ;
struct { void * AQHandles [ 4 ] ; void * SlioLTF ; } cizvyg3haq ; struct {
void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ; } nxn4r2j4ni ; struct
{ void * AQHandles [ 3 ] ; void * SlioLTF ; } o4zjtouqv1 ; struct { void *
AQHandles ; void * SlioLTF ; } kk11noexzo ; struct { void * AQHandles ; void
* SlioLTF ; } otmjf3k0yc ; struct { void * AQHandles ; void * SlioLTF ; }
kpxx2wlm0j ; struct { void * AQHandles ; void * SlioLTF ; } hhil12yx2a ;
struct { void * LoggedData [ 4 ] ; } e0ybehcbdl ; struct { void * LoggedData
[ 4 ] ; } c3kh11hlq0 ; struct { void * LoggedData [ 4 ] ; } m2xuz0rl23 ;
struct { void * LoggedData [ 4 ] ; } f0org12oie ; struct { void * LoggedData
[ 3 ] ; } oiyi4iq2ei ; struct { void * LoggedData ; } h3yefwqha0 ; struct {
void * LoggedData ; } dmlu2cvdth ; struct { void * LoggedData ; } m4ybtmpe04
; struct { void * LoggedData ; } dsr4ci5ezz ; struct { void * LoggedData ; }
lay2ajedkj ; void * a3jz1vhf4h ; void * ox0bnvu31g ; void * dhy2lo1oyd ; void
* duwjflxffa ; void * kf1tdxa4de ; void * i2rvvnjeqf ; void * am2r0bghwi ;
void * eyjwwignxd ; void * anuu03dolc ; void * iyfy1t030u ; struct { void *
LoggedData ; } m2kh0iykjh ; struct { void * LoggedData ; } b0ercmpblz ;
struct { void * LoggedData ; } hyjdfylux2 ; struct { void * LoggedData ; }
iqe1gchloi ; void * la3jhngrnl ; void * bj3ze5yj42 ; void * lieaetbmrt ; void
* ozm3gvpfzi ; void * b3xra5qedg ; void * o3onksh0um ; void * j23zdmwkkl ;
void * npoaqa0aen ; void * ioj5ac2qgb ; void * huxngibetu ; struct { void *
LoggedData ; } pafgzxfqbf ; struct { void * LoggedData ; } pwksrlmfas ; void
* fhthr4gruq ; void * gwtjdjy24g ; void * dt5cmcttgx ; void * dvaor03ch4 ;
void * ajovsjrrzu ; void * klkrr1jmqr ; void * p4tamc0yv4 ; void * pb3ij5lml1
; void * fyfyt3vgzn ; void * hykmwsuzxo ; void * mxvpzlsras ; void *
gx5a0stbnw ; void * h4w0g3bulz ; void * by1emf5y3g ; void * jaqsbgiutc ; void
* pogmy1p0md ; void * isu1bsjo01 ; void * p5u2wq1dfl ; void * g3fkpimayx ;
void * dpfuvpgag5 ; int_T l0fbymf1qf ; int_T hnatrkqrtk ; struct { int_T
PrevIndex ; } fhyyuxa0yu ; int_T gbzd5pugdl [ 5 ] ; int_T itey1ecn4p ; int_T
hsxy3n0vne [ 5 ] ; int_T ffx44a5ccg ; int_T dmcndn514o [ 5 ] ; int_T
ievrpb2b23 ; int_T e5bbdxb5mf [ 5 ] ; int_T g420u1faqi ; int_T jeyjmatrkm ;
int_T kevcm4tkte ; int_T p2vhcjso24 ; int_T bejosmavsz ; int_T ddvttsm35w ;
int_T ozk21ex1fn ; int_T m22bguur0b ; int_T ajjzhp3ldi ; int_T o51g2ohecp ;
int_T eckwmjhlyk ; int_T lboglrrbuz ; int_T mq5tzhz5sr ; int32_T kaatgekvbb ;
int32_T lsqosgc1dj ; int32_T fje1tm10vl ; int32_T e5efcpoufx ; boolean_T
f311qku23a ; boolean_T htztxl2g4g ; boolean_T joeszm1q20 ; boolean_T
kmlkzpy3eu ; boolean_T pden1paxeu ; boolean_T ksnx1fvtcv ; boolean_T
i0yeepj0lf ; boolean_T bf50kmffwm ; boolean_T fl5zdmtbiu ; boolean_T
m1kxujqwzt ; boolean_T bacve1cbmd ; boolean_T ba3leuf343 ; boolean_T
mjcxfqix55 ; boolean_T okptqdewzq ; } DW ; typedef struct { real_T mqrisyyzvz
[ 8 ] ; real_T ho32jzvqwd ; real_T cnzrnlw10x ; real_T cf4eknbnqt ; real_T
fabp12nunk ; real_T ijlqzu10zq ; real_T fwzhxfm2hy [ 6 ] ; real_T c3cmrhd2ez
; real_T feytd2zvev [ 6 ] ; real_T pgtm2y1e0v ; real_T f5ermfyj2i [ 6 ] ;
real_T gspguq4t1h ; real_T atgv4dpb4z [ 6 ] ; } X ; typedef struct { real_T
mqrisyyzvz [ 8 ] ; real_T ho32jzvqwd ; real_T cnzrnlw10x ; real_T cf4eknbnqt
; real_T fabp12nunk ; real_T ijlqzu10zq ; real_T fwzhxfm2hy [ 6 ] ; real_T
c3cmrhd2ez ; real_T feytd2zvev [ 6 ] ; real_T pgtm2y1e0v ; real_T f5ermfyj2i
[ 6 ] ; real_T gspguq4t1h ; real_T atgv4dpb4z [ 6 ] ; } XDot ; typedef struct
{ boolean_T mqrisyyzvz [ 8 ] ; boolean_T ho32jzvqwd ; boolean_T cnzrnlw10x ;
boolean_T cf4eknbnqt ; boolean_T fabp12nunk ; boolean_T ijlqzu10zq ;
boolean_T fwzhxfm2hy [ 6 ] ; boolean_T c3cmrhd2ez ; boolean_T feytd2zvev [ 6
] ; boolean_T pgtm2y1e0v ; boolean_T f5ermfyj2i [ 6 ] ; boolean_T gspguq4t1h
; boolean_T atgv4dpb4z [ 6 ] ; } XDis ; typedef struct { real_T mqrisyyzvz [
8 ] ; real_T ho32jzvqwd ; real_T cnzrnlw10x ; real_T cf4eknbnqt ; real_T
fabp12nunk ; real_T ijlqzu10zq ; real_T fwzhxfm2hy [ 6 ] ; real_T c3cmrhd2ez
; real_T feytd2zvev [ 6 ] ; real_T pgtm2y1e0v ; real_T f5ermfyj2i [ 6 ] ;
real_T gspguq4t1h ; real_T atgv4dpb4z [ 6 ] ; } CStateAbsTol ; typedef struct
{ real_T p4k4gdmo4v ; real_T g5w0nxlif5 ; real_T otdo313mxl ; real_T
cnvmscutud ; real_T jee5ahbk1h ; real_T hdjjin2d3x ; real_T iapftjzhuf ;
real_T kvv3bmzij1 ; real_T gu0dhz5gwt ; real_T lfrityh43z ; real_T ksx34bpgpt
; real_T hkpsmybqcd ; real_T ksy42hggvb ; real_T ebfpdyxazs ; real_T
n1depw4tx1 ; real_T ixgove5zin ; real_T hwwgzbshwl ; real_T f4dqhr5sdb ;
real_T ggscdzj5n0 ; real_T nr0tznxbkt ; real_T gjetlqnik1 ; real_T iu0hekcmzw
; real_T fgeicburg2 ; real_T j0mlzstahp ; real_T j22lhobcyq ; real_T
mgyjxjjfey ; real_T j2os4s3jnu ; real_T kvs0r1dduk ; real_T mkqpcwh4mz ;
real_T f5uqnpdap1 ; real_T csr2uzq2hb ; real_T p3t4lg1mae ; real_T odbwip1fbg
; real_T mp3hyyaeww ; real_T ep0hmewse4 ; real_T al2ypdiibi ; real_T
khgqb3ckyl ; real_T egd3owttze ; real_T dp25dvsjtx ; real_T pfnvosbeej ; }
ZCV ; typedef struct { int_T ir [ 32 ] ; int_T jc [ 41 ] ; real_T pr [ 32 ] ;
} MassMatrix ; typedef struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo
; struct P_ { real_T dFilt [ 2 ] ; real_T nFilt [ 2 ] ; real_T
PIDController_D ; real_T PIDController1_D ; real_T PIDController2_D ; real_T
PIDController3_D ; real_T PIDController_I ; real_T PIDController1_I ; real_T
PIDController2_I ; real_T PIDController3_I ; real_T
PIDController_InitialConditionForFilter ; real_T
PIDController1_InitialConditionForFilter ; real_T
PIDController2_InitialConditionForFilter ; real_T
PIDController3_InitialConditionForFilter ; real_T
PIDController_InitialConditionForIntegrator ; real_T
PIDController1_InitialConditionForIntegrator ; real_T
PIDController2_InitialConditionForIntegrator ; real_T
PIDController3_InitialConditionForIntegrator ; real_T
PIDController_LowerSaturationLimit ; real_T
PIDController1_LowerSaturationLimit ; real_T
PIDController2_LowerSaturationLimit ; real_T
PIDController3_LowerSaturationLimit ; real_T PIDController_N ; real_T
PIDController1_N ; real_T PIDController2_N ; real_T PIDController3_N ; real_T
PIDController_P ; real_T PIDController1_P ; real_T PIDController2_P ; real_T
PIDController3_P ; real_T PIDController_UpperSaturationLimit ; real_T
PIDController1_UpperSaturationLimit ; real_T
PIDController2_UpperSaturationLimit ; real_T
PIDController3_UpperSaturationLimit ; real_T Step_Time ; real_T Step_Y0 ;
real_T Step_YFinal ; real_T Gain_Gain ; real_T FromWs_Time0 [ 7 ] ; real_T
FromWs_Data0 [ 28 ] ; real_T Integrator_gainval ; real_T Filter_gainval ;
real_T u5_UpperSat ; real_T u5_LowerSat ; real_T Gain_Gain_mzek03xops ;
real_T Break_Value ; real_T u5_UpperSat_f1xxbogm20 ; real_T
u5_LowerSat_aimx5l53y0 ; real_T Step1_Time ; real_T Step1_Y0 ; real_T
Step1_YFinal ; real_T Gain1_Gain ; real_T Step2_Time ; real_T Step2_Y0 ;
real_T Step2_YFinal ; real_T Gain2_Gain ; real_T Step3_Time ; real_T Step3_Y0
; real_T Step3_YFinal ; real_T Gain3_Gain ; real_T Gain_Gain_eco1mxudja ;
real_T Gain2_Gain_fdcexdgxvr ; real_T Gain1_Gain_j1nnjap4ro ; real_T
Gain3_Gain_egywykobhy ; real_T IC_Value ; real_T
DiscreteTransferFcn1_InitialStates ; real_T Gain4_Gain ; real_T
Integrator_gainval_f3eeszil3z ; real_T Filter_gainval_nqnvwj50lp ; real_T
u5_UpperSat_hsorbciehn ; real_T u5_LowerSat_odxlmaevjb ; real_T Gain6_Gain ;
real_T Gain7_Gain ; real_T DiscreteTransferFcn2_InitialStates ; real_T
Gain8_Gain ; real_T u255_UpperSat ; real_T u255_LowerSat ; real_T Gain10_Gain
; real_T Gain9_Gain ; real_T DiscreteTransferFcn3_InitialStates ; real_T
Gain11_Gain ; real_T u255_UpperSat_cy5lmsdzoz ; real_T
u255_LowerSat_asbda50lue ; real_T Gain5_Gain ; real_T Break1_Value ; real_T
Break2_Value ; real_T Break3_Value ; real_T ZeroGain_Gain ; real_T
Constant1_Value ; real_T ZeroGain_Gain_chz5ufcktq ; real_T
Constant1_Value_ploncjubhz ; real_T ZeroGain_Gain_emqj4r052y ; real_T
Constant1_Value_hvrq5qxppi ; real_T ZeroGain_Gain_jxlmlnbspu ; real_T
Constant1_Value_g4hj2bwvcs ; real_T Gain_Gain_irbaz43gud ; real_T
u5_UpperSat_atus3v43bp ; real_T u5_LowerSat_oryv2y43s1 ; real_T
Gain_Gain_iboc4vsafp ; real_T u255_UpperSat_m5nwsc4prn ; real_T
u255_LowerSat_dzjia1thqe ; real_T Gain_Gain_g0cjd2kme4 ; real_T
u255_UpperSat_b3symk0lb5 ; real_T u255_LowerSat_n1e2cxv13l ; boolean_T
Memory_InitialCondition ; boolean_T Memory_InitialCondition_btlhzlk5fx ;
uint8_T ManualSwitch_1_CurrentSetting ; uint8_T ManualSwitch_2_CurrentSetting
; uint8_T ManualSwitch_3_CurrentSetting ; uint8_T
ManualSwitch_4_CurrentSetting ; } ; extern const char *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ; extern DW rtDW ;
extern MassMatrix rtMassMatrix ; extern P rtP ; extern const
rtwCAPI_ModelMappingStaticInfo * Aluminum_Robot_ARM_GetCAPIStaticMap ( void )
; extern SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern
const int_T gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
extern const int_T gblNumRootInportBlks ; extern const int_T
gblNumModelInputs ; extern const int_T gblInportDataTypeIdx [ ] ; extern
const int_T gblInportDims [ ] ; extern const int_T gblInportComplex [ ] ;
extern const int_T gblInportInterpoFlag [ ] ; extern const int_T
gblInportContinuous [ ] ; extern const int_T gblParameterTuningTid ; extern
DataMapInfo * rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo *
rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid ) ; void
MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ;
void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model ( void
) ;
#endif
