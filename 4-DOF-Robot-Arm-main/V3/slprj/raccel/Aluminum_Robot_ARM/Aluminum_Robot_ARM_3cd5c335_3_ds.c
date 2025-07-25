#include "__cf_Aluminum_Robot_ARM.h"
#include "ne_ds.h"
#include "Aluminum_Robot_ARM_3cd5c335_3_ds_zc.h"
#include "Aluminum_Robot_ARM_3cd5c335_3_ds_obs_il.h"
#include "Aluminum_Robot_ARM_3cd5c335_3_ds_obs_all.h"
#include "Aluminum_Robot_ARM_3cd5c335_3_ds_obs_act.h"
#include "Aluminum_Robot_ARM_3cd5c335_3_ds_obs_exp.h"
#include "Aluminum_Robot_ARM_3cd5c335_3_ds_log.h"
#include "Aluminum_Robot_ARM_3cd5c335_3_ds_dxf.h"
#include "Aluminum_Robot_ARM_3cd5c335_3_ds_f.h"
#include "Aluminum_Robot_ARM_3cd5c335_3_ds.h"
#include "ssc_ml_fun.h"
#include "Aluminum_Robot_ARM_3cd5c335_3_ds_external_struct.h"
#include "Aluminum_Robot_ARM_3cd5c335_3_ds_sys_struct.h"
#include "Aluminum_Robot_ARM_3cd5c335_3_ds_externals.h"
static int32_T ds_m_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T ds_m (
const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_vmm ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dxm_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dxm ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dum_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dum ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dtm_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dtm ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_a_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_a ( const NeDynamicSystem * ds ,
const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_b_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_b ( const NeDynamicSystem * ds ,
const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_c_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_c ( const NeDynamicSystem * ds ,
const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_vmf ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_slf ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_slf0 ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dxf_p ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_duf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_duf ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dtf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_dtf ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_ddf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_ddf ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_tduf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_tdxf_p ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dnf_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T ds_dnf
( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dnf_v_x ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_ic ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_icr ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_icr_im ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_icr_id ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_icr_il ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dxicr ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dxicr_p ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_tduicr_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_mduy_p ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_mdxy_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_tduy_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_tdxy_p ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_y ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dxy_p ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dxy ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_duy_p ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_duy ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_dty_p ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dty ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_mode ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_cache_r ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_cache_i ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_update_r ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_update_i ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_sfo ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_sfp ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_init_r ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_init_i ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_assert ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_passert ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_iassert ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_del_t ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_del_v ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_del_v0 ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_del_tmax ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dxdelt_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dxdelt ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dudelt_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_dudelt ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dtdelt_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dtdelt ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dp_l ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dp_i ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_dp_j ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dp_r ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T ds_qx (
const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_qu ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_qt ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_q1 ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_qx_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_qu_p ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_qt_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_q1_p ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_var_tol ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_eq_tol ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_lv ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_slv ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static NeDsMethodOutput * ds_output_m_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_m ( const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_vmm ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_dxm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dxm ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dum_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dum ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dtm_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dtm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_a_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_a ( const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_b_p ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_b ( const NeDynamicSystem *
ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_c_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_c ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_f ( const NeDynamicSystem *
ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_vmf (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_slf ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_slf0 ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dxf_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dxf ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_duf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_duf ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dtf_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dtf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_ddf_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_ddf ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_tduf_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_tdxf_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dnf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dnf ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dnf_v_x ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_ic ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_icr ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_icr_im ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_icr_id (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_icr_il ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dxicr ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dxicr_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_tduicr_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_mduy_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_mdxy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_tduy_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_tdxy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_y ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dxy_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dxy ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_duy_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_duy ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dty_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dty ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_mode ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_zc ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_cache_r (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_cache_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_update_r (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_update_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_sfo ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_sfp ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_init_r ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_init_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_log ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_assert ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_passert ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_iassert ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_del_t ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_del_v ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_del_v0 ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_del_tmax (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dxdelt_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dxdelt (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dudelt_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dudelt (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dtdelt_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dtdelt (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_obs_exp ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_obs_act (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_obs_all ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_obs_il (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dp_l ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_dp_i ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dp_j ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dp_r ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_qx ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_qu ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_qt ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_q1 ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_qx_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_qu_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_qt_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_q1_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_var_tol ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_eq_tol (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_lv ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_slv ( const NeDynamicSystem
* ds , PmAllocator * allocator ) ; static void release_reference (
NeDynamicSystem * ds ) ; static void get_reference ( NeDynamicSystem * ds ) ;
static NeDynamicSystem * diagnostics ( const NeDynamicSystem * ds ) ; static
void expand ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
PmRealVector * out ) ; static NeEquationData s_equation_data [ 6 ] = { { "" ,
0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/DC Motor" , 2U , 0U ,
TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/DC Motor" , 2U , 2U ,
TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/H-Bridge"
, 5U , 4U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Interface/Ideal Torque Sensor"
, 1U , 9U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/Controlled PWM Voltage"
, 1U , 10U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/H-Bridge"
, 9U , 11U , TRUE , 1.0 , "1" , } } ; static NeVariableData s_variable_data [
6 ] = { { "ROBOT4DOF.DC_Motors.Turntable_Motor.DC_Motor.w" , 0U , 0 ,
"Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/DC Motor" , 1.0 , "1"
, 0.0 , TRUE , 1U , 1U , NE_INIT_MODE_MANDATORY , "Angular velocity" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Motor.DC_Motor.i_L" , 0U , 0 ,
"Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/DC Motor" , 1.0 , "1"
, 0.0 , TRUE , 1U , 1U , NE_INIT_MODE_MANDATORY , "Current" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.H_Bridge.v_lag" , 0U , 0
,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/H-Bridge"
, 1.0 , "1" , 0.0 , TRUE , 1U , 1U , NE_INIT_MODE_MANDATORY , "Lag variable"
, } , {
"ROBOT4DOF.DC_Motors.Turntable_Interface.Ideal_Angular_Velocity_Source.t" ,
0U , 0 ,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Interface/Ideal Angular Velocity Source"
, 1.0 , "1" , 0.0 , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Torque" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Motor.DC_Motor.v" , 0U , 0 ,
"Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/DC Motor" , 1.0 , "1"
, 0.0 , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Voltage" , } , {
 "ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.Controlled_PWM_Voltage.p2.v"
, 0U , 1 ,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/Controlled PWM Voltage"
, 1.0 , "1" , 0.0 , FALSE , 1U , 1U , NE_INIT_MODE_NONE , "Voltage" , } } ;
static NeVariableData * s_discrete_data = NULL ; static NeObservableData
s_observable_data [ 81 ] = { { "ROBOT4DOF.DC_Motors.Turntable_Interface.C.w"
, "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Interface" , 1U , 1U ,
"rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE
, FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rotational velocity" , } ,
{ "ROBOT4DOF.DC_Motors.Turntable_Interface.Ideal_Angular_Velocity_Source.C.w"
,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Interface/Ideal Angular Velocity Source"
, 1U , 1U , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Interface.Ideal_Angular_Velocity_Source.R.w" ,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Interface/Ideal Angular Velocity Source"
, 1U , 1U , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Interface.Ideal_Angular_Velocity_Source.S" ,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Interface/Ideal Angular Velocity Source"
, 1U , 1U , "rad/s" , 1.0 , "rad/s" , NE_NOMINAL_SOURCE_FIXED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "S"
, } , {
"ROBOT4DOF.DC_Motors.Turntable_Interface.Ideal_Angular_Velocity_Source.t" ,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Interface/Ideal Angular Velocity Source"
, 1U , 1U , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Torque" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Interface.Ideal_Angular_Velocity_Source.w" ,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Interface/Ideal Angular Velocity Source"
, 1U , 1U , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Angular velocity" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Interface.Ideal_Torque_Sensor.C.w" ,
"Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Interface/Ideal Torque Sensor"
, 1U , 1U , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Interface.Ideal_Torque_Sensor.R.w" ,
"Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Interface/Ideal Torque Sensor"
, 1U , 1U , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Interface.Ideal_Torque_Sensor.T" ,
"Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Interface/Ideal Torque Sensor"
, 1U , 1U , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "T" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Interface.Ideal_Torque_Sensor.t" ,
"Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Interface/Ideal Torque Sensor"
, 1U , 1U , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Torque" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Interface.Ideal_Torque_Sensor.w" ,
"Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Interface/Ideal Torque Sensor"
, 1U , 1U , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Angular velocity" , } , { "ROBOT4DOF.DC_Motors.Turntable_Interface.R.w" ,
"Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Interface" , 1U , 1U ,
"rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE
, FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rotational velocity" , } ,
{ "ROBOT4DOF.DC_Motors.Turntable_Motor.DC_Motor.C.w" ,
"Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/DC Motor" , 1U , 1U ,
"rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE
, FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Motor.DC_Motor.R.w" ,
"Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/DC Motor" , 1U , 1U ,
"rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE
, FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Motor.DC_Motor.i" ,
"Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/DC Motor" , 1U , 1U ,
"A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Motor.DC_Motor.i_L" ,
"Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/DC Motor" , 1U , 1U ,
"A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE ,
TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Motor.DC_Motor.n.v" ,
"Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/DC Motor" , 1U , 1U ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Motor.DC_Motor.p.v" ,
"Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/DC Motor" , 1U , 1U ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Motor.DC_Motor.power_dissipated" ,
"Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/DC Motor" , 1U , 1U ,
"W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Motor.DC_Motor.t" ,
"Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/DC Motor" , 1U , 1U ,
"N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Torque" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Motor.DC_Motor.v" ,
"Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/DC Motor" , 1U , 1U ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Motor.DC_Motor.w" ,
"Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/DC Motor" , 1U , 1U ,
"rpm" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_MANDATORY ,
FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Angular velocity" , } ,
{ "ROBOT4DOF.DC_Motors.Turntable_Motor.Electrical_Reference2.V.v" ,
"Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Electrical Reference2"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Motor.Gear_Box.O.w" ,
"Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Gear Box" , 1U , 1U ,
"rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE
, FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Motor.Gear_Box.S.w" ,
"Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Gear Box" , 1U , 1U ,
"rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE
, FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Rotational velocity" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Motor.Gear_Box.t_in" ,
"Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Gear Box" , 1U , 1U ,
"N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Input shaft incoming torque" ,
} , { "ROBOT4DOF.DC_Motors.Turntable_Motor.Gear_Box.t_out" ,
"Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Gear Box" , 1U , 1U ,
"N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Output shaft incoming torque"
, } , { "ROBOT4DOF.DC_Motors.Turntable_Motor.Housing.w" ,
"Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor" , 1U , 1U , "rad/s"
, 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE
, NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rotational velocity" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Motor.Mechanical_Rotational_Reference.W.w" ,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Mechanical Rotational Reference"
, 1U , 1U , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.Controlled_PWM_Voltage.i1"
,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/Controlled PWM Voltage"
, 1U , 1U , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Input current" , } , {
 "ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.Controlled_PWM_Voltage.n1.v"
,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/Controlled PWM Voltage"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
 "ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.Controlled_PWM_Voltage.n2.v"
,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/Controlled PWM Voltage"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
 "ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.Controlled_PWM_Voltage.p1.v"
,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/Controlled PWM Voltage"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
 "ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.Controlled_PWM_Voltage.p2.v"
,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/Controlled PWM Voltage"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
 "ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.Controlled_PWM_Voltage.pwm.duty_cycle"
,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/Controlled PWM Voltage"
, 1U , 1U , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Duty cycle" , } , {
 "ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.Controlled_PWM_Voltage.pwm.i2"
,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/Controlled PWM Voltage"
, 1U , 1U , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Output current" , } , {
 "ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.Controlled_PWM_Voltage.pwm.n2.v"
,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/Controlled PWM Voltage"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
 "ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.Controlled_PWM_Voltage.pwm.p2.v"
,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/Controlled PWM Voltage"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
 "ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.Controlled_PWM_Voltage.pwm.v2"
,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/Controlled PWM Voltage"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Output voltage" , } ,
{
"ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.Electrical_Reference1.V.v"
,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/Electrical Reference1"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.H_Bridge.BRK.v" ,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/H-Bridge"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.H_Bridge.ENA.v" ,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/H-Bridge"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.H_Bridge.REF.v" ,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/H-Bridge"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.H_Bridge.REV.v" ,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/H-Bridge"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.H_Bridge.i2" ,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/H-Bridge"
, 1U , 1U , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current (+ -> -)" , }
, { "ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.H_Bridge.iBRK" ,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/H-Bridge"
, 1U , 1U , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current (BRK -> REF)" ,
} , { "ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.H_Bridge.iENA" ,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/H-Bridge"
, 1U , 1U , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current (ENA -> REF)" ,
} , { "ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.H_Bridge.iREV" ,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/H-Bridge"
, 1U , 1U , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current (REV -> REF)" ,
} , { "ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.H_Bridge.n2.v" ,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/H-Bridge"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.H_Bridge.p2.v" ,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/H-Bridge"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.H_Bridge.power_dissipated"
,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/H-Bridge"
, 1U , 1U , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , }
, { "ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.H_Bridge.v_lag" ,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/H-Bridge"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Lag variable" , } , {
 "ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.SL2Vbrk.Electrical_Reference1.V.v"
,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/SL2Vbrk/Electrical Reference1"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.SL2Vbrk.Voltage_Source.i"
,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/SL2Vbrk/Voltage Source"
, 1U , 1U , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.SL2Vbrk.Voltage_Source.n.v"
,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/SL2Vbrk/Voltage Source"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.SL2Vbrk.Voltage_Source.p.v"
,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/SL2Vbrk/Voltage Source"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.SL2Vbrk.Voltage_Source.v"
,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/SL2Vbrk/Voltage Source"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "v" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.SL2Vbrk.Voltage_Source.vT"
,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/SL2Vbrk/Voltage Source"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "vT" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.SL2Vbrk.Volts.v" ,
"Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/SL2Vbrk"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
 "ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.SL2Vduty.Electrical_Reference1.V.v"
,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/SL2Vduty/Electrical Reference1"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.SL2Vduty.Voltage_Source.i"
,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/SL2Vduty/Voltage Source"
, 1U , 1U , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i" , } , {
 "ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.SL2Vduty.Voltage_Source.n.v"
,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/SL2Vduty/Voltage Source"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
 "ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.SL2Vduty.Voltage_Source.p.v"
,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/SL2Vduty/Voltage Source"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.SL2Vduty.Voltage_Source.v"
,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/SL2Vduty/Voltage Source"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "v" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.SL2Vduty.Voltage_Source.vT"
,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/SL2Vduty/Voltage Source"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "vT" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.SL2Vduty.Volts.v" ,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/SL2Vduty"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
 "ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.SL2Vrev.Electrical_Reference1.V.v"
,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/SL2Vrev/Electrical Reference1"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.SL2Vrev.Voltage_Source.i"
,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/SL2Vrev/Voltage Source"
, 1U , 1U , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.SL2Vrev.Voltage_Source.n.v"
,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/SL2Vrev/Voltage Source"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.SL2Vrev.Voltage_Source.p.v"
,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/SL2Vrev/Voltage Source"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.SL2Vrev.Voltage_Source.v"
,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/SL2Vrev/Voltage Source"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "v" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.SL2Vrev.Voltage_Source.vT"
,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/SL2Vrev/Voltage Source"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "vT" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.SL2Vrev.Volts.v" ,
"Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/SL2Vrev"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.V0.v" ,
"Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier" , 1U
, 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE
, FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.V1.v" ,
"Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier" , 1U
, 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.Voltage_Sensor.V" ,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/Voltage Sensor"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.Voltage_Sensor.i1" ,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/Voltage Sensor"
, 1U , 1U , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.Voltage_Sensor.n.v" ,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/Voltage Sensor"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.Voltage_Sensor.p.v" ,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/Voltage Sensor"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.Voltage_Sensor.v1" ,
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/Voltage Sensor"
, 1U , 1U , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"ROBOT4DOF.DC_Motors.Turntable_Motor.Shaft.w" ,
"Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor" , 1U , 1U , "rad/s"
, 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rotational velocity" , } } ; static
NeModeData * s_major_mode_data = NULL ; static NeZCData s_zc_data [ 5 ] = { {
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/H-Bridge"
, 1U , 0U , "ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.H_Bridge" ,
 "C:/Program Files/Polyspace/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/h_bridge.sscp"
, NE_ZC_TYPE_FALSE , } , {
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/H-Bridge"
, 1U , 1U , "ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.H_Bridge" ,
 "C:/Program Files/Polyspace/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/h_bridge.sscp"
, NE_ZC_TYPE_FALSE , } , {
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/H-Bridge"
, 1U , 2U , "ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.H_Bridge" ,
 "C:/Program Files/Polyspace/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/h_bridge.sscp"
, NE_ZC_TYPE_TRUE , } , {
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/H-Bridge"
, 1U , 3U , "ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.H_Bridge" ,
 "C:/Program Files/Polyspace/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/h_bridge.sscp"
, NE_ZC_TYPE_FALSE , } , {
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/H-Bridge"
, 1U , 4U , "ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.H_Bridge" ,
 "C:/Program Files/Polyspace/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/h_bridge.sscp"
, NE_ZC_TYPE_FALSE , } } ; static NeRange s_range [ 5 ] = { {
 "C:/Program Files/Polyspace/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/h_bridge.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/Polyspace/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/h_bridge.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/Polyspace/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/h_bridge.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/Polyspace/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/h_bridge.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/Polyspace/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/h_bridge.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } } ; static NeAssertData
s_assert_data [ 7 ] = { {
"Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/DC Motor" , 1U , 0U ,
"ROBOT4DOF.DC_Motors.Turntable_Motor.DC_Motor" ,
 "C:/Program Files/Polyspace/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+brushed/dc_motor.sscp"
, TRUE ,
 "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases."
, "physmod:common:mf:core:asserts:RequireExponentPositive" , } , {
"Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/DC Motor" , 1U , 1U ,
"ROBOT4DOF.DC_Motors.Turntable_Motor.DC_Motor" ,
 "C:/Program Files/Polyspace/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+brushed/dc_motor.sscp"
, TRUE ,
 "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases."
, "physmod:common:mf:core:asserts:RequireBaseNonnegative" , } , {
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/H-Bridge"
, 1U , 2U , "ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.H_Bridge" ,
 "C:/Program Files/Polyspace/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/h_bridge.sscp"
, TRUE ,
 "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases."
, "physmod:common:mf:core:asserts:RequireExponentPositive" , } , {
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/H-Bridge"
, 1U , 3U , "ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.H_Bridge" ,
 "C:/Program Files/Polyspace/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/h_bridge.sscp"
, TRUE ,
 "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases."
, "physmod:common:mf:core:asserts:RequireBaseNonnegative" , } , {
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/Controlled PWM Voltage"
, 1U , 4U ,
"ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.Controlled_PWM_Voltage"
,
 "C:/Program Files/Polyspace/R2019a/toolbox/physmod/elec/library/m/+ee/+ic/controlled_pwm.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:core:asserts:RequireDenominatorNonzero" , } , {
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/H-Bridge"
, 1U , 5U , "ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.H_Bridge" ,
 "C:/Program Files/Polyspace/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/h_bridge.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:core:asserts:RequireDenominatorNonzero" , } , {
 "Aluminum_Robot_ARM/ROBOT4DOF/DC Motors/Turntable Motor/Power Amplifier/H-Bridge"
, 1U , 6U , "ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.H_Bridge" ,
 "C:/Program Files/Polyspace/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/h_bridge.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:core:asserts:RequireDenominatorNonzero" , } } ; static
NeRange s_assert_range [ 7 ] = { {
 "C:/Program Files/Polyspace/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+brushed/dc_motor.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/Polyspace/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+brushed/dc_motor.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/Polyspace/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/h_bridge.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/Polyspace/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/h_bridge.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/Polyspace/R2019a/toolbox/physmod/elec/library/m/+ee/+ic/controlled_pwm.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/Polyspace/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/h_bridge.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/Polyspace/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/h_bridge.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } } ; static NeAssertData *
s_param_assert_data = NULL ; static NeRange * s_param_assert_range = NULL ;
static NeAssertData * s_initial_assert_data = NULL ; static NeRange *
s_initial_assert_range = NULL ; static NeRange s_equation_range [ 20 ] = { {
 "C:/Program Files/Polyspace/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+brushed/dc_motor.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/Polyspace/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+brushed/dc_motor.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/Polyspace/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+brushed/dc_motor.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/Polyspace/R2019a/toolbox/physmod/elec/library/m/+ee/+electromech/+brushed/dc_motor.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/Polyspace/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/h_bridge.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/Polyspace/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/h_bridge.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/Polyspace/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/h_bridge.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/Polyspace/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/h_bridge.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/Polyspace/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/h_bridge.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/Polyspace/R2019a/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/torque.ssc"
, 36U , 5U , 36U , 19U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/Polyspace/R2019a/toolbox/physmod/elec/library/m/+ee/+ic/controlled_pwm.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/Polyspace/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/h_bridge.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/Polyspace/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/h_bridge.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/Polyspace/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/h_bridge.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/Polyspace/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/h_bridge.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/Polyspace/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/h_bridge.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/Polyspace/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/h_bridge.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/Polyspace/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/h_bridge.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/Polyspace/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/h_bridge.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/Polyspace/R2019a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/h_bridge.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } } ; static NeParameterData
* s_logical_parameter_data = NULL ; static NeParameterData *
s_integer_parameter_data = NULL ; static NeParameterData *
s_index_parameter_data = NULL ; static NeParameterData *
s_real_parameter_data = NULL ; static NeDsMethodOutput * ds_output_m_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mM_P . mNumCol = 6 ;
out -> mM_P . mNumRow = 6 ; out -> mM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 7 ) ; out -> mM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 3 ) ;
return out ; } static NeDsMethodOutput * ds_output_m ( const NeDynamicSystem
* ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out
= ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mM . mN = 3 ; out -> mM . mX = ( real_T * )
allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 3 ) ; return out ;
} static NeDsMethodOutput * ds_output_vmm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mVMM . mN = 3 ; out -> mVMM . mX = (
boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T ) , 3
) ; return out ; } static NeDsMethodOutput * ds_output_dxm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXM_P . mNumCol = 6 ; out ->
mDXM_P . mNumRow = 3 ; out -> mDXM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 7 ) ; out -> mDXM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dxm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXM . mN = 0 ; out -> mDXM . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dum_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUM_P . mNumCol = 4 ; out ->
mDUM_P . mNumRow = 3 ; out -> mDUM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 5 ) ; out -> mDUM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dum ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUM . mN = 0 ; out -> mDUM . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dtm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTM_P . mNumCol = 1 ; out ->
mDTM_P . mNumRow = 3 ; out -> mDTM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mDTM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dtm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTM . mN = 0 ; out -> mDTM . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_a_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mA_P . mNumCol = 6 ; out -> mA_P
. mNumRow = 6 ; out -> mA_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 7 ) ; out -> mA_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 9 ) ; return out ;
} static NeDsMethodOutput * ds_output_a ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mA . mN = 9 ; out -> mA . mX = ( real_T * )
allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 9 ) ; return out ;
} static NeDsMethodOutput * ds_output_b_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mB_P . mNumCol = 4 ; out -> mB_P . mNumRow
= 6 ; out -> mB_P . mJc = ( int32_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( int32_T ) , 5 ) ; out -> mB_P . mIr = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; return out ; } static
NeDsMethodOutput * ds_output_b ( const NeDynamicSystem * ds , PmAllocator *
allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput
* ) allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ;
out -> mB . mN = 1 ; out -> mB . mX = ( real_T * ) allocator -> mCallocFcn (
allocator , sizeof ( real_T ) , 1 ) ; return out ; } static NeDsMethodOutput
* ds_output_c_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mC_P .
mNumCol = 1 ; out -> mC_P . mNumRow = 6 ; out -> mC_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mC_P
. mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T
) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_c ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mC . mN = 0 ; out -> mC . mX = (
real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_f ( const NeDynamicSystem
* ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out
= ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mF . mN = 6 ; out -> mF . mX = ( real_T * )
allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 6 ) ; return out ;
} static NeDsMethodOutput * ds_output_vmf ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mVMF . mN = 6 ; out -> mVMF . mX = (
boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T ) , 6
) ; return out ; } static NeDsMethodOutput * ds_output_slf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSLF . mN = 6 ; out -> mSLF . mX
= ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T )
, 6 ) ; return out ; } static NeDsMethodOutput * ds_output_slf0 ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSLF0 . mN = 6 ; out -> mSLF0 .
mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T
) , 6 ) ; return out ; } static NeDsMethodOutput * ds_output_dxf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXF_P . mNumCol = 6 ; out ->
mDXF_P . mNumRow = 6 ; out -> mDXF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 7 ) ; out -> mDXF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 5 ) ;
return out ; } static NeDsMethodOutput * ds_output_dxf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXF . mN = 5 ; out -> mDXF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 5 )
; return out ; } static NeDsMethodOutput * ds_output_duf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUF_P . mNumCol = 4 ; out ->
mDUF_P . mNumRow = 6 ; out -> mDUF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 5 ) ; out -> mDUF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ;
return out ; } static NeDsMethodOutput * ds_output_duf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUF . mN = 1 ; out -> mDUF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 1 )
; return out ; } static NeDsMethodOutput * ds_output_dtf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTF_P . mNumCol = 1 ; out ->
mDTF_P . mNumRow = 6 ; out -> mDTF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mDTF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dtf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTF . mN = 0 ; out -> mDTF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_ddf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDF_P . mNumCol = 0 ; out ->
mDDF_P . mNumRow = 6 ; out -> mDDF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out -> mDDF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_ddf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDF . mN = 0 ; out -> mDDF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_tduf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDUF_P . mNumCol = 4 ; out ->
mTDUF_P . mNumRow = 6 ; out -> mTDUF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 5 ) ; out -> mTDUF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 5 ) ;
return out ; } static NeDsMethodOutput * ds_output_tdxf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDXF_P . mNumCol = 6 ; out ->
mTDXF_P . mNumRow = 6 ; out -> mTDXF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 7 ) ; out -> mTDXF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 14 ) ;
return out ; } static NeDsMethodOutput * ds_output_dnf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDNF_P . mNumCol = 4 ; out ->
mDNF_P . mNumRow = 6 ; out -> mDNF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 5 ) ; out -> mDNF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ;
return out ; } static NeDsMethodOutput * ds_output_dnf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDNF . mN = 1 ; out -> mDNF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 1 )
; return out ; } static NeDsMethodOutput * ds_output_dnf_v_x ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDNF_V_X . mN = 6 ; out ->
mDNF_V_X . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof
( boolean_T ) , 6 ) ; return out ; } static NeDsMethodOutput * ds_output_ic (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mIC . mN = 6 ; out ->
mIC . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T
) , 6 ) ; return out ; } static NeDsMethodOutput * ds_output_icr ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICR . mN = 0 ; out -> mICR . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_icr_im ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICR_IM . mN = 0 ; out ->
mICR_IM . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_icr_id (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICR_ID . mN = 0 ; out
-> mICR_ID . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( boolean_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_icr_il ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mICR_IL . mN = 0 ; out -> mICR_IL . mX = ( boolean_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( boolean_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_dxicr ( const NeDynamicSystem * ds , PmAllocator
* allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDXICR . mN = 0 ; out -> mDXICR . mX = (
real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dxicr_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXICR_P . mNumCol = 6 ; out ->
mDXICR_P . mNumRow = 0 ; out -> mDXICR_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 7 ) ; out -> mDXICR_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_tduicr_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDUICR_P . mNumCol = 4 ; out ->
mTDUICR_P . mNumRow = 0 ; out -> mTDUICR_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 5 ) ; out -> mTDUICR_P . mIr =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_mduy_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mMDUY_P . mNumCol = 4 ; out ->
mMDUY_P . mNumRow = 2 ; out -> mMDUY_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 5 ) ; out -> mMDUY_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_mdxy_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mMDXY_P . mNumCol = 6 ; out ->
mMDXY_P . mNumRow = 2 ; out -> mMDXY_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 7 ) ; out -> mMDXY_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_tduy_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDUY_P . mNumCol = 4 ; out ->
mTDUY_P . mNumRow = 2 ; out -> mTDUY_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 5 ) ; out -> mTDUY_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_tdxy_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDXY_P . mNumCol = 6 ; out ->
mTDXY_P . mNumRow = 2 ; out -> mTDXY_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 7 ) ; out -> mTDXY_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ;
return out ; } static NeDsMethodOutput * ds_output_y ( const NeDynamicSystem
* ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out
= ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mY . mN = 2 ; out -> mY . mX = ( real_T * )
allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 2 ) ; return out ;
} static NeDsMethodOutput * ds_output_dxy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDXY_P . mNumCol = 6 ; out -> mDXY_P .
mNumRow = 2 ; out -> mDXY_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 7 ) ; out -> mDXY_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; return out ;
} static NeDsMethodOutput * ds_output_dxy ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDXY . mN = 2 ; out -> mDXY . mX = ( real_T
* ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 2 ) ; return
out ; } static NeDsMethodOutput * ds_output_duy_p ( const NeDynamicSystem *
ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out =
( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDUY_P . mNumCol = 4 ; out -> mDUY_P .
mNumRow = 2 ; out -> mDUY_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 5 ) ; out -> mDUY_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_duy ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDUY . mN = 0 ; out -> mDUY . mX = ( real_T
* ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return
out ; } static NeDsMethodOutput * ds_output_dty_p ( const NeDynamicSystem *
ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out =
( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDTY_P . mNumCol = 1 ; out -> mDTY_P .
mNumRow = 2 ; out -> mDTY_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 2 ) ; out -> mDTY_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_dty ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDTY . mN = 0 ; out -> mDTY . mX = ( real_T
* ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return
out ; } static NeDsMethodOutput * ds_output_mode ( const NeDynamicSystem * ds
, PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mMODE . mN = 5 ; out -> mMODE . mX = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 5 ) ;
return out ; } static NeDsMethodOutput * ds_output_zc ( const NeDynamicSystem
* ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out
= ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mZC . mN = 5 ; out -> mZC . mX = ( real_T *
) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 5 ) ; return out
; } static NeDsMethodOutput * ds_output_cache_r ( const NeDynamicSystem * ds
, PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mCACHE_R . mN = 0 ; out -> mCACHE_R . mX =
( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_cache_i ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mCACHE_I . mN = 0 ; out ->
mCACHE_I . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_update_r
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mUPDATE_R . mN = 0 ;
out -> mUPDATE_R . mX = ( real_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( real_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_update_i ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mUPDATE_I . mN = 0 ; out -> mUPDATE_I . mX = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_sfo ( const NeDynamicSystem * ds , PmAllocator *
allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput
* ) allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ;
out -> mSFO . mN = 0 ; out -> mSFO . mX = ( real_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_sfp ( const NeDynamicSystem * ds , PmAllocator *
allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput
* ) allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ;
out -> mSFP . mN = 0 ; out -> mSFP . mX = ( real_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_init_r ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mINIT_R . mN = 0 ; out -> mINIT_R . mX = (
real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_init_i ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mINIT_I . mN = 0 ; out ->
mINIT_I . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_log (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mLOG . mN = 81 ; out
-> mLOG . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 81 ) ; return out ; } static NeDsMethodOutput * ds_output_assert (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mASSERT . mN = 7 ; out
-> mASSERT . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof
( int32_T ) , 7 ) ; return out ; } static NeDsMethodOutput *
ds_output_passert ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mPASSERT . mN = 0 ; out -> mPASSERT . mX = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_iassert ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mIASSERT . mN = 0 ; out -> mIASSERT . mX =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_del_t ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_T . mN = 0 ; out -> mDEL_T
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_del_v ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_V . mN = 0 ; out -> mDEL_V
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_del_v0 ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_V0 . mN = 0 ; out ->
mDEL_V0 . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_del_tmax
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_TMAX . mN = 0 ;
out -> mDEL_TMAX . mX = ( real_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( real_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_dxdelt_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mDXDELT_P . mNumCol = 6 ; out -> mDXDELT_P . mNumRow = 0 ; out -> mDXDELT_P .
mJc = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T )
, 7 ) ; out -> mDXDELT_P . mIr = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput
* ds_output_dxdelt ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mDXDELT . mN = 0 ; out -> mDXDELT . mX = ( real_T * ) allocator -> mCallocFcn
( allocator , sizeof ( real_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_dudelt_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDUDELT_P . mNumCol = 4 ; out -> mDUDELT_P
. mNumRow = 0 ; out -> mDUDELT_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 5 ) ; out -> mDUDELT_P . mIr =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dudelt ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUDELT . mN = 0 ; out ->
mDUDELT . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dtdelt_p
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTDELT_P . mNumCol =
1 ; out -> mDTDELT_P . mNumRow = 0 ; out -> mDTDELT_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out ->
mDTDELT_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof
( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dtdelt
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTDELT . mN = 0 ; out
-> mDTDELT . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_obs_exp (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mOBS_EXP . mN = 81 ;
out -> mOBS_EXP . mX = ( real_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( real_T ) , 81 ) ; return out ; } static NeDsMethodOutput *
ds_output_obs_act ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mOBS_ACT . mN = 81 ; out -> mOBS_ACT . mX = ( real_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( real_T ) , 81 ) ; return out ; } static
NeDsMethodOutput * ds_output_obs_all ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mOBS_ALL . mN = 81 ; out -> mOBS_ALL . mX =
( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 81 ) ;
return out ; } static NeDsMethodOutput * ds_output_obs_il ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mOBS_IL . mN = 81 ; out ->
mOBS_IL . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof (
boolean_T ) , 81 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_l
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDP_L . mN = 0 ; out
-> mDP_L . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDP_I . mN = 0 ; out
-> mDP_I . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_j (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDP_J . mN = 0 ; out
-> mDP_J . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_r (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDP_R . mN = 0 ; out
-> mDP_R . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_qx (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mQX . mN = 0 ; out ->
mQX . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T
) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_qu ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mQU . mN = 0 ; out -> mQU . mX =
( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_qt ( const NeDynamicSystem
* ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out
= ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQT . mN = 0 ; out -> mQT . mX = ( real_T *
) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out
; } static NeDsMethodOutput * ds_output_q1 ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQ1 . mN = 0 ; out -> mQ1 . mX = ( real_T *
) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out
; } static NeDsMethodOutput * ds_output_qx_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQX_P . mNumCol = 6 ; out -> mQX_P .
mNumRow = 6 ; out -> mQX_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 7 ) ; out -> mQX_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_qu_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQU_P . mNumCol = 4 ; out -> mQU_P .
mNumRow = 6 ; out -> mQU_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 5 ) ; out -> mQU_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_qt_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQT_P . mNumCol = 1 ; out -> mQT_P .
mNumRow = 6 ; out -> mQT_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 2 ) ; out -> mQT_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_q1_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQ1_P . mNumCol = 1 ; out -> mQ1_P .
mNumRow = 6 ; out -> mQ1_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 2 ) ; out -> mQ1_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_var_tol ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mVAR_TOL . mN = 6 ; out -> mVAR_TOL . mX =
( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 6 ) ;
return out ; } static NeDsMethodOutput * ds_output_eq_tol ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mEQ_TOL . mN = 6 ; out ->
mEQ_TOL . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 6 ) ; return out ; } static NeDsMethodOutput * ds_output_lv (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mLV . mN = 6 ; out ->
mLV . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof (
boolean_T ) , 6 ) ; return out ; } static NeDsMethodOutput * ds_output_slv (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSLV . mN = 6 ; out ->
mSLV . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof (
boolean_T ) , 6 ) ; return out ; } static void release_reference (
NeDynamicSystem * ds ) { _NeDynamicSystem * _ds ; _ds = ( _NeDynamicSystem *
) ds ; if ( -- _ds -> mRefCnt == 0 ) { _ds -> mAlloc . mFreeFcn ( & _ds ->
mAlloc , _ds ) ; } } static void get_reference ( NeDynamicSystem * ds ) {
_NeDynamicSystem * _ds ; _ds = ( _NeDynamicSystem * ) ds ; ++ _ds -> mRefCnt
; } static NeDynamicSystem * diagnostics ( const NeDynamicSystem * ds ) {
_NeDynamicSystem * _ds = ( _NeDynamicSystem * ) ds ; ne_ds_get_reference ( &
_ds -> mBase ) ; return & _ds -> mBase ; } static void expand ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , PmRealVector * out )
{ ( void ) ds ; memcpy ( out -> mX , in -> mX . mX , sizeof ( real_T ) * out
-> mN ) ; } NeDynamicSystem * Aluminum_Robot_ARM_3cd5c335_3_dae_ds (
PmAllocator * allocator ) { NeDynamicSystem * ds ; _NeDynamicSystem * _ds ;
static NeDsIoInfo input_info [ 4 ] ; static NeDsIoInfo output_info [ 2 ] ;
_ds = ( _NeDynamicSystem * ) allocator -> mCallocFcn ( allocator , sizeof (
_NeDynamicSystem ) , 1 ) ; _ds -> mAlloc = * allocator ; _ds -> mRefCnt = 1 ;
ds = & _ds -> mBase ; ds -> mNumVariables = 6 ; ds ->
mNumDiscreteRealVariables = 0 ; ds -> mNumDifferentialVariables = 3 ; ds ->
mNumEquations = 6 ; ds -> mNumICResiduals = 0 ; ds -> mNumModes = 5 ; ds ->
mNumMajorModes = 0 ; ds -> mNumRealCache = 0 ; ds -> mNumIntCache = 0 ; ds ->
mNumObservables = 81 ; ds -> mNumObservableElements = 81 ; ds -> mNumZcs = 5
; ds -> mNumAsserts = 7 ; ds -> mNumAssertRanges = 7 ; ds -> mNumParamAsserts
= 0 ; ds -> mNumParamAssertRanges = 0 ; ds -> mNumInitialAsserts = 0 ; ds ->
mNumInitialAssertRanges = 0 ; ds -> mNumRanges = 5 ; ds -> mNumEquationRanges
= 20 ; ds -> mNumFundamentalSamples = 0 ; ds -> mNumDelays = 0 ; ds ->
mNumLogicalParameters = 0 ; ds -> mNumIntegerParameters = 0 ; ds ->
mNumIndexParameters = 0 ; ds -> mNumRealParameters = 0 ; ds ->
mNumLogicalDerivedParameters = 0 ; ds -> mNumIntegerDerivedParameters = 0 ;
ds -> mNumIndexDerivedParameters = 0 ; ds -> mNumRealDerivedParameters = 0 ;
ds -> mIsOutputLinear = TRUE ; ds -> mIsOutputSwitchedLinear = TRUE ; ds ->
mNumIo [ NE_INPUT_IO_TYPE ] = 4 ; input_info [ 0 ] . mIdentifier =
"ROBOT4DOF.DC_Motors.Turntable_Interface.Ideal_Angular_Velocity_Source.S" ;
input_info [ 0 ] . mM = 1 ; input_info [ 0 ] . mN = 1 ; input_info [ 0 ] .
mName =
"ROBOT4DOF.DC_Motors.Turntable_Interface.Ideal_Angular_Velocity_Source.S" ;
input_info [ 0 ] . mUnit = "rad/s" ; input_info [ 1 ] . mIdentifier =
"ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.SL2Vduty.Voltage_Source.vT"
; input_info [ 1 ] . mM = 1 ; input_info [ 1 ] . mN = 1 ; input_info [ 1 ] .
mName =
"ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.SL2Vduty.Voltage_Source.vT"
; input_info [ 1 ] . mUnit = "V" ; input_info [ 2 ] . mIdentifier =
"ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.SL2Vbrk.Voltage_Source.vT"
; input_info [ 2 ] . mM = 1 ; input_info [ 2 ] . mN = 1 ; input_info [ 2 ] .
mName =
"ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.SL2Vbrk.Voltage_Source.vT"
; input_info [ 2 ] . mUnit = "V" ; input_info [ 3 ] . mIdentifier =
"ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.SL2Vrev.Voltage_Source.vT"
; input_info [ 3 ] . mM = 1 ; input_info [ 3 ] . mN = 1 ; input_info [ 3 ] .
mName =
"ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.SL2Vrev.Voltage_Source.vT"
; input_info [ 3 ] . mUnit = "V" ; ds -> mIo [ NE_INPUT_IO_TYPE ] =
input_info ; ds -> mNumIo [ NE_OUTPUT_IO_TYPE ] = 2 ; output_info [ 0 ] .
mIdentifier = "ROBOT4DOF.DC_Motors.Turntable_Interface.Ideal_Torque_Sensor.T"
; output_info [ 0 ] . mM = 1 ; output_info [ 0 ] . mN = 1 ; output_info [ 0 ]
. mName = "ROBOT4DOF.DC_Motors.Turntable_Interface.Ideal_Torque_Sensor.T" ;
output_info [ 0 ] . mUnit = "N*m" ; output_info [ 1 ] . mIdentifier =
"ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.Voltage_Sensor.V" ;
output_info [ 1 ] . mM = 1 ; output_info [ 1 ] . mN = 1 ; output_info [ 1 ] .
mName =
"ROBOT4DOF.DC_Motors.Turntable_Motor.Power_Amplifier.Voltage_Sensor.V" ;
output_info [ 1 ] . mUnit = "V" ; ds -> mIo [ NE_OUTPUT_IO_TYPE ] =
output_info ; ds -> mReleaseReference = release_reference ; ds ->
mGetReference = get_reference ; ds -> mDiagnosticsDsFcn = diagnostics ; ds ->
mExpandFcn = expand ; ds -> mMethods [ NE_DS_METHOD_M_P ] = ds_m_p ; ds ->
mMakeOutput [ NE_DS_METHOD_M_P ] = ds_output_m_p ; ds -> mMethods [
NE_DS_METHOD_M ] = ds_m ; ds -> mMakeOutput [ NE_DS_METHOD_M ] = ds_output_m
; ds -> mMethods [ NE_DS_METHOD_VMM ] = ds_vmm ; ds -> mMakeOutput [
NE_DS_METHOD_VMM ] = ds_output_vmm ; ds -> mMethods [ NE_DS_METHOD_DXM_P ] =
ds_dxm_p ; ds -> mMakeOutput [ NE_DS_METHOD_DXM_P ] = ds_output_dxm_p ; ds ->
mMethods [ NE_DS_METHOD_DXM ] = ds_dxm ; ds -> mMakeOutput [ NE_DS_METHOD_DXM
] = ds_output_dxm ; ds -> mMethods [ NE_DS_METHOD_DUM_P ] = ds_dum_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DUM_P ] = ds_output_dum_p ; ds -> mMethods [
NE_DS_METHOD_DUM ] = ds_dum ; ds -> mMakeOutput [ NE_DS_METHOD_DUM ] =
ds_output_dum ; ds -> mMethods [ NE_DS_METHOD_DTM_P ] = ds_dtm_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DTM_P ] = ds_output_dtm_p ; ds -> mMethods [
NE_DS_METHOD_DTM ] = ds_dtm ; ds -> mMakeOutput [ NE_DS_METHOD_DTM ] =
ds_output_dtm ; ds -> mMethods [ NE_DS_METHOD_A_P ] = ds_a_p ; ds ->
mMakeOutput [ NE_DS_METHOD_A_P ] = ds_output_a_p ; ds -> mMethods [
NE_DS_METHOD_A ] = ds_a ; ds -> mMakeOutput [ NE_DS_METHOD_A ] = ds_output_a
; ds -> mMethods [ NE_DS_METHOD_B_P ] = ds_b_p ; ds -> mMakeOutput [
NE_DS_METHOD_B_P ] = ds_output_b_p ; ds -> mMethods [ NE_DS_METHOD_B ] = ds_b
; ds -> mMakeOutput [ NE_DS_METHOD_B ] = ds_output_b ; ds -> mMethods [
NE_DS_METHOD_C_P ] = ds_c_p ; ds -> mMakeOutput [ NE_DS_METHOD_C_P ] =
ds_output_c_p ; ds -> mMethods [ NE_DS_METHOD_C ] = ds_c ; ds -> mMakeOutput
[ NE_DS_METHOD_C ] = ds_output_c ; ds -> mMethods [ NE_DS_METHOD_F ] =
Aluminum_Robot_ARM_3cd5c335_3_ds_f ; ds -> mMakeOutput [ NE_DS_METHOD_F ] =
ds_output_f ; ds -> mMethods [ NE_DS_METHOD_VMF ] = ds_vmf ; ds ->
mMakeOutput [ NE_DS_METHOD_VMF ] = ds_output_vmf ; ds -> mMethods [
NE_DS_METHOD_SLF ] = ds_slf ; ds -> mMakeOutput [ NE_DS_METHOD_SLF ] =
ds_output_slf ; ds -> mMethods [ NE_DS_METHOD_SLF0 ] = ds_slf0 ; ds ->
mMakeOutput [ NE_DS_METHOD_SLF0 ] = ds_output_slf0 ; ds -> mMethods [
NE_DS_METHOD_DXF_P ] = ds_dxf_p ; ds -> mMakeOutput [ NE_DS_METHOD_DXF_P ] =
ds_output_dxf_p ; ds -> mMethods [ NE_DS_METHOD_DXF ] =
Aluminum_Robot_ARM_3cd5c335_3_ds_dxf ; ds -> mMakeOutput [ NE_DS_METHOD_DXF ]
= ds_output_dxf ; ds -> mMethods [ NE_DS_METHOD_DUF_P ] = ds_duf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DUF_P ] = ds_output_duf_p ; ds -> mMethods [
NE_DS_METHOD_DUF ] = ds_duf ; ds -> mMakeOutput [ NE_DS_METHOD_DUF ] =
ds_output_duf ; ds -> mMethods [ NE_DS_METHOD_DTF_P ] = ds_dtf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DTF_P ] = ds_output_dtf_p ; ds -> mMethods [
NE_DS_METHOD_DTF ] = ds_dtf ; ds -> mMakeOutput [ NE_DS_METHOD_DTF ] =
ds_output_dtf ; ds -> mMethods [ NE_DS_METHOD_DDF_P ] = ds_ddf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DDF_P ] = ds_output_ddf_p ; ds -> mMethods [
NE_DS_METHOD_DDF ] = ds_ddf ; ds -> mMakeOutput [ NE_DS_METHOD_DDF ] =
ds_output_ddf ; ds -> mMethods [ NE_DS_METHOD_TDUF_P ] = ds_tduf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_TDUF_P ] = ds_output_tduf_p ; ds -> mMethods [
NE_DS_METHOD_TDXF_P ] = ds_tdxf_p ; ds -> mMakeOutput [ NE_DS_METHOD_TDXF_P ]
= ds_output_tdxf_p ; ds -> mMethods [ NE_DS_METHOD_DNF_P ] = ds_dnf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DNF_P ] = ds_output_dnf_p ; ds -> mMethods [
NE_DS_METHOD_DNF ] = ds_dnf ; ds -> mMakeOutput [ NE_DS_METHOD_DNF ] =
ds_output_dnf ; ds -> mMethods [ NE_DS_METHOD_DNF_V_X ] = ds_dnf_v_x ; ds ->
mMakeOutput [ NE_DS_METHOD_DNF_V_X ] = ds_output_dnf_v_x ; ds -> mMethods [
NE_DS_METHOD_IC ] = ds_ic ; ds -> mMakeOutput [ NE_DS_METHOD_IC ] =
ds_output_ic ; ds -> mMethods [ NE_DS_METHOD_ICR ] = ds_icr ; ds ->
mMakeOutput [ NE_DS_METHOD_ICR ] = ds_output_icr ; ds -> mMethods [
NE_DS_METHOD_ICR_IM ] = ds_icr_im ; ds -> mMakeOutput [ NE_DS_METHOD_ICR_IM ]
= ds_output_icr_im ; ds -> mMethods [ NE_DS_METHOD_ICR_ID ] = ds_icr_id ; ds
-> mMakeOutput [ NE_DS_METHOD_ICR_ID ] = ds_output_icr_id ; ds -> mMethods [
NE_DS_METHOD_ICR_IL ] = ds_icr_il ; ds -> mMakeOutput [ NE_DS_METHOD_ICR_IL ]
= ds_output_icr_il ; ds -> mMethods [ NE_DS_METHOD_DXICR ] = ds_dxicr ; ds ->
mMakeOutput [ NE_DS_METHOD_DXICR ] = ds_output_dxicr ; ds -> mMethods [
NE_DS_METHOD_DXICR_P ] = ds_dxicr_p ; ds -> mMakeOutput [
NE_DS_METHOD_DXICR_P ] = ds_output_dxicr_p ; ds -> mMethods [
NE_DS_METHOD_TDUICR_P ] = ds_tduicr_p ; ds -> mMakeOutput [
NE_DS_METHOD_TDUICR_P ] = ds_output_tduicr_p ; ds -> mMethods [
NE_DS_METHOD_MDUY_P ] = ds_mduy_p ; ds -> mMakeOutput [ NE_DS_METHOD_MDUY_P ]
= ds_output_mduy_p ; ds -> mMethods [ NE_DS_METHOD_MDXY_P ] = ds_mdxy_p ; ds
-> mMakeOutput [ NE_DS_METHOD_MDXY_P ] = ds_output_mdxy_p ; ds -> mMethods [
NE_DS_METHOD_TDUY_P ] = ds_tduy_p ; ds -> mMakeOutput [ NE_DS_METHOD_TDUY_P ]
= ds_output_tduy_p ; ds -> mMethods [ NE_DS_METHOD_TDXY_P ] = ds_tdxy_p ; ds
-> mMakeOutput [ NE_DS_METHOD_TDXY_P ] = ds_output_tdxy_p ; ds -> mMethods [
NE_DS_METHOD_Y ] = ds_y ; ds -> mMakeOutput [ NE_DS_METHOD_Y ] = ds_output_y
; ds -> mMethods [ NE_DS_METHOD_DXY_P ] = ds_dxy_p ; ds -> mMakeOutput [
NE_DS_METHOD_DXY_P ] = ds_output_dxy_p ; ds -> mMethods [ NE_DS_METHOD_DXY ]
= ds_dxy ; ds -> mMakeOutput [ NE_DS_METHOD_DXY ] = ds_output_dxy ; ds ->
mMethods [ NE_DS_METHOD_DUY_P ] = ds_duy_p ; ds -> mMakeOutput [
NE_DS_METHOD_DUY_P ] = ds_output_duy_p ; ds -> mMethods [ NE_DS_METHOD_DUY ]
= ds_duy ; ds -> mMakeOutput [ NE_DS_METHOD_DUY ] = ds_output_duy ; ds ->
mMethods [ NE_DS_METHOD_DTY_P ] = ds_dty_p ; ds -> mMakeOutput [
NE_DS_METHOD_DTY_P ] = ds_output_dty_p ; ds -> mMethods [ NE_DS_METHOD_DTY ]
= ds_dty ; ds -> mMakeOutput [ NE_DS_METHOD_DTY ] = ds_output_dty ; ds ->
mMethods [ NE_DS_METHOD_MODE ] = ds_mode ; ds -> mMakeOutput [
NE_DS_METHOD_MODE ] = ds_output_mode ; ds -> mMethods [ NE_DS_METHOD_ZC ] =
Aluminum_Robot_ARM_3cd5c335_3_ds_zc ; ds -> mMakeOutput [ NE_DS_METHOD_ZC ] =
ds_output_zc ; ds -> mMethods [ NE_DS_METHOD_CACHE_R ] = ds_cache_r ; ds ->
mMakeOutput [ NE_DS_METHOD_CACHE_R ] = ds_output_cache_r ; ds -> mMethods [
NE_DS_METHOD_CACHE_I ] = ds_cache_i ; ds -> mMakeOutput [
NE_DS_METHOD_CACHE_I ] = ds_output_cache_i ; ds -> mMethods [
NE_DS_METHOD_UPDATE_R ] = ds_update_r ; ds -> mMakeOutput [
NE_DS_METHOD_UPDATE_R ] = ds_output_update_r ; ds -> mMethods [
NE_DS_METHOD_UPDATE_I ] = ds_update_i ; ds -> mMakeOutput [
NE_DS_METHOD_UPDATE_I ] = ds_output_update_i ; ds -> mMethods [
NE_DS_METHOD_SFO ] = ds_sfo ; ds -> mMakeOutput [ NE_DS_METHOD_SFO ] =
ds_output_sfo ; ds -> mMethods [ NE_DS_METHOD_SFP ] = ds_sfp ; ds ->
mMakeOutput [ NE_DS_METHOD_SFP ] = ds_output_sfp ; ds -> mMethods [
NE_DS_METHOD_INIT_R ] = ds_init_r ; ds -> mMakeOutput [ NE_DS_METHOD_INIT_R ]
= ds_output_init_r ; ds -> mMethods [ NE_DS_METHOD_INIT_I ] = ds_init_i ; ds
-> mMakeOutput [ NE_DS_METHOD_INIT_I ] = ds_output_init_i ; ds -> mMethods [
NE_DS_METHOD_LOG ] = Aluminum_Robot_ARM_3cd5c335_3_ds_log ; ds -> mMakeOutput
[ NE_DS_METHOD_LOG ] = ds_output_log ; ds -> mMethods [ NE_DS_METHOD_ASSERT ]
= ds_assert ; ds -> mMakeOutput [ NE_DS_METHOD_ASSERT ] = ds_output_assert ;
ds -> mMethods [ NE_DS_METHOD_PASSERT ] = ds_passert ; ds -> mMakeOutput [
NE_DS_METHOD_PASSERT ] = ds_output_passert ; ds -> mMethods [
NE_DS_METHOD_IASSERT ] = ds_iassert ; ds -> mMakeOutput [
NE_DS_METHOD_IASSERT ] = ds_output_iassert ; ds -> mMethods [
NE_DS_METHOD_DEL_T ] = ds_del_t ; ds -> mMakeOutput [ NE_DS_METHOD_DEL_T ] =
ds_output_del_t ; ds -> mMethods [ NE_DS_METHOD_DEL_V ] = ds_del_v ; ds ->
mMakeOutput [ NE_DS_METHOD_DEL_V ] = ds_output_del_v ; ds -> mMethods [
NE_DS_METHOD_DEL_V0 ] = ds_del_v0 ; ds -> mMakeOutput [ NE_DS_METHOD_DEL_V0 ]
= ds_output_del_v0 ; ds -> mMethods [ NE_DS_METHOD_DEL_TMAX ] = ds_del_tmax ;
ds -> mMakeOutput [ NE_DS_METHOD_DEL_TMAX ] = ds_output_del_tmax ; ds ->
mMethods [ NE_DS_METHOD_DXDELT_P ] = ds_dxdelt_p ; ds -> mMakeOutput [
NE_DS_METHOD_DXDELT_P ] = ds_output_dxdelt_p ; ds -> mMethods [
NE_DS_METHOD_DXDELT ] = ds_dxdelt ; ds -> mMakeOutput [ NE_DS_METHOD_DXDELT ]
= ds_output_dxdelt ; ds -> mMethods [ NE_DS_METHOD_DUDELT_P ] = ds_dudelt_p ;
ds -> mMakeOutput [ NE_DS_METHOD_DUDELT_P ] = ds_output_dudelt_p ; ds ->
mMethods [ NE_DS_METHOD_DUDELT ] = ds_dudelt ; ds -> mMakeOutput [
NE_DS_METHOD_DUDELT ] = ds_output_dudelt ; ds -> mMethods [
NE_DS_METHOD_DTDELT_P ] = ds_dtdelt_p ; ds -> mMakeOutput [
NE_DS_METHOD_DTDELT_P ] = ds_output_dtdelt_p ; ds -> mMethods [
NE_DS_METHOD_DTDELT ] = ds_dtdelt ; ds -> mMakeOutput [ NE_DS_METHOD_DTDELT ]
= ds_output_dtdelt ; ds -> mMethods [ NE_DS_METHOD_OBS_EXP ] =
Aluminum_Robot_ARM_3cd5c335_3_ds_obs_exp ; ds -> mMakeOutput [
NE_DS_METHOD_OBS_EXP ] = ds_output_obs_exp ; ds -> mMethods [
NE_DS_METHOD_OBS_ACT ] = Aluminum_Robot_ARM_3cd5c335_3_ds_obs_act ; ds ->
mMakeOutput [ NE_DS_METHOD_OBS_ACT ] = ds_output_obs_act ; ds -> mMethods [
NE_DS_METHOD_OBS_ALL ] = Aluminum_Robot_ARM_3cd5c335_3_ds_obs_all ; ds ->
mMakeOutput [ NE_DS_METHOD_OBS_ALL ] = ds_output_obs_all ; ds -> mMethods [
NE_DS_METHOD_OBS_IL ] = Aluminum_Robot_ARM_3cd5c335_3_ds_obs_il ; ds ->
mMakeOutput [ NE_DS_METHOD_OBS_IL ] = ds_output_obs_il ; ds -> mMethods [
NE_DS_METHOD_DP_L ] = ds_dp_l ; ds -> mMakeOutput [ NE_DS_METHOD_DP_L ] =
ds_output_dp_l ; ds -> mMethods [ NE_DS_METHOD_DP_I ] = ds_dp_i ; ds ->
mMakeOutput [ NE_DS_METHOD_DP_I ] = ds_output_dp_i ; ds -> mMethods [
NE_DS_METHOD_DP_J ] = ds_dp_j ; ds -> mMakeOutput [ NE_DS_METHOD_DP_J ] =
ds_output_dp_j ; ds -> mMethods [ NE_DS_METHOD_DP_R ] = ds_dp_r ; ds ->
mMakeOutput [ NE_DS_METHOD_DP_R ] = ds_output_dp_r ; ds -> mMethods [
NE_DS_METHOD_QX ] = ds_qx ; ds -> mMakeOutput [ NE_DS_METHOD_QX ] =
ds_output_qx ; ds -> mMethods [ NE_DS_METHOD_QU ] = ds_qu ; ds -> mMakeOutput
[ NE_DS_METHOD_QU ] = ds_output_qu ; ds -> mMethods [ NE_DS_METHOD_QT ] =
ds_qt ; ds -> mMakeOutput [ NE_DS_METHOD_QT ] = ds_output_qt ; ds -> mMethods
[ NE_DS_METHOD_Q1 ] = ds_q1 ; ds -> mMakeOutput [ NE_DS_METHOD_Q1 ] =
ds_output_q1 ; ds -> mMethods [ NE_DS_METHOD_QX_P ] = ds_qx_p ; ds ->
mMakeOutput [ NE_DS_METHOD_QX_P ] = ds_output_qx_p ; ds -> mMethods [
NE_DS_METHOD_QU_P ] = ds_qu_p ; ds -> mMakeOutput [ NE_DS_METHOD_QU_P ] =
ds_output_qu_p ; ds -> mMethods [ NE_DS_METHOD_QT_P ] = ds_qt_p ; ds ->
mMakeOutput [ NE_DS_METHOD_QT_P ] = ds_output_qt_p ; ds -> mMethods [
NE_DS_METHOD_Q1_P ] = ds_q1_p ; ds -> mMakeOutput [ NE_DS_METHOD_Q1_P ] =
ds_output_q1_p ; ds -> mMethods [ NE_DS_METHOD_VAR_TOL ] = ds_var_tol ; ds ->
mMakeOutput [ NE_DS_METHOD_VAR_TOL ] = ds_output_var_tol ; ds -> mMethods [
NE_DS_METHOD_EQ_TOL ] = ds_eq_tol ; ds -> mMakeOutput [ NE_DS_METHOD_EQ_TOL ]
= ds_output_eq_tol ; ds -> mMethods [ NE_DS_METHOD_LV ] = ds_lv ; ds ->
mMakeOutput [ NE_DS_METHOD_LV ] = ds_output_lv ; ds -> mMethods [
NE_DS_METHOD_SLV ] = ds_slv ; ds -> mMakeOutput [ NE_DS_METHOD_SLV ] =
ds_output_slv ; ds -> mEquationData = s_equation_data ; ds -> mVariableData =
s_variable_data ; ds -> mDiscreteData = s_discrete_data ; ds ->
mObservableData = s_observable_data ; ds -> mMajorModeData =
s_major_mode_data ; ds -> mZCData = s_zc_data ; ds -> mRanges = s_range ; ds
-> mAssertData = s_assert_data ; ds -> mAssertRanges = s_assert_range ; ds ->
mParamAssertData = s_param_assert_data ; ds -> mParamAssertRanges =
s_param_assert_range ; ds -> mInitialAssertData = s_initial_assert_data ; ds
-> mInitialAssertRanges = s_initial_assert_range ; ds -> mEquationRanges =
s_equation_range ; ds -> mLogicalParameters = s_logical_parameter_data ; ds
-> mIntegerParameters = s_integer_parameter_data ; ds -> mIndexParameters =
s_index_parameter_data ; ds -> mRealParameters = s_real_parameter_data ;
return ( NeDynamicSystem * ) _ds ; } static int32_T ds_assert ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmIntVector out ; ( void ) t1 ; out = t2 -> mASSERT ; out . mX [ 0 ] =
1 ; out . mX [ 1 ] = 1 ; out . mX [ 2 ] = 1 ; out . mX [ 3 ] = 1 ; out . mX [
4 ] = 1 ; out . mX [ 5 ] = 1 ; out . mX [ 6 ] = 1 ; ( void ) sys ; ( void )
t2 ; return 0 ; } static int32_T ds_passert ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; (
void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_iassert ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_del_v ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_del_v0 ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_del_tmax ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_del_t ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_dxdelt ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dxdelt_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mDXDELT_P ; out .
mNumCol = 6ULL ; out . mNumRow = 0ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ]
= 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out .
mJc [ 5 ] = 0 ; out . mJc [ 6 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ;
} static int32_T ds_dudelt ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dudelt_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mDUDELT_P ; out .
mNumCol = 4ULL ; out . mNumRow = 0ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ]
= 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; (
void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dtdelt ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_dtdelt_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 ->
mDTDELT_P ; out . mNumCol = 1ULL ; out . mNumRow = 0ULL ; out . mJc [ 0 ] = 0
; out . mJc [ 1 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static
int32_T ds_cache_r ( const NeDynamicSystem * sys , const NeDynamicSystemInput
* t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ;
return 0 ; } static int32_T ds_init_r ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_update_r ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_cache_i ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_init_i ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_update_i ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_sfp ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_sfo ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dxf_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mDXF_P ; out .
mNumCol = 6ULL ; out . mNumRow = 6ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ]
= 1 ; out . mJc [ 2 ] = 2 ; out . mJc [ 3 ] = 3 ; out . mJc [ 4 ] = 3 ; out .
mJc [ 5 ] = 4 ; out . mJc [ 6 ] = 5 ; out . mIr [ 0 ] = 5 ; out . mIr [ 1 ] =
5 ; out . mIr [ 2 ] = 2 ; out . mIr [ 3 ] = 5 ; out . mIr [ 4 ] = 5 ; ( void
) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_duf ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmRealVector out ; real_T U_idx_1 ; U_idx_1 = t1 -> mU . mX [ 1 ] ;
out = t2 -> mDUF ; if ( U_idx_1 <= 0.0 ) { U_idx_1 = 0.0 ; } else if (
U_idx_1 >= 5.0 ) { U_idx_1 = 0.0 ; } else { U_idx_1 = 0.2 ; } out . mX [ 0 ]
= - U_idx_1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_duf_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 ->
mDUF_P ; out . mNumCol = 4ULL ; out . mNumRow = 6ULL ; out . mJc [ 0 ] = 0 ;
out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 1 ; out . mJc [ 3 ] = 1 ; out . mJc [
4 ] = 1 ; out . mIr [ 0 ] = 4 ; ( void ) sys ; ( void ) t2 ; return 0 ; }
static int32_T ds_dtf ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dtf_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mDTF_P ; out .
mNumCol = 1ULL ; out . mNumRow = 6ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ]
= 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_a ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmRealVector out ; ( void ) t1 ; out = t2 -> mA ; out . mX [ 0 ] =
0.15940999890801014 ; out . mX [ 1 ] = - 0.00080030444215186357 ; out . mX [
2 ] = - 0.0625 ; out . mX [ 3 ] = 0.99999999885558855 ; out . mX [ 4 ] =
0.99999999885558843 ; out . mX [ 5 ] = - 0.34259600159299941 ; out . mX [ 6 ]
= - 0.87381165183725884 ; out . mX [ 7 ] = 9.9999999885558865E-10 ; out . mX
[ 8 ] = 0.2 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_a_p
( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 ->
mA_P ; out . mNumCol = 6ULL ; out . mNumRow = 6ULL ; out . mJc [ 0 ] = 0 ;
out . mJc [ 1 ] = 3 ; out . mJc [ 2 ] = 5 ; out . mJc [ 3 ] = 5 ; out . mJc [
4 ] = 6 ; out . mJc [ 5 ] = 8 ; out . mJc [ 6 ] = 9 ; out . mIr [ 0 ] = 0 ;
out . mIr [ 1 ] = 1 ; out . mIr [ 2 ] = 3 ; out . mIr [ 3 ] = 0 ; out . mIr [
4 ] = 1 ; out . mIr [ 5 ] = 1 ; out . mIr [ 6 ] = 0 ; out . mIr [ 7 ] = 1 ;
out . mIr [ 8 ] = 4 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static
int32_T ds_b ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1
, NeDsMethodOutput * t2 ) { PmRealVector out ; ( void ) t1 ; out = t2 -> mB ;
out . mX [ 0 ] = 1.0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static
int32_T ds_b_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2
-> mB_P ; out . mNumCol = 4ULL ; out . mNumRow = 6ULL ; out . mJc [ 0 ] = 0 ;
out . mJc [ 1 ] = 1 ; out . mJc [ 2 ] = 1 ; out . mJc [ 3 ] = 1 ; out . mJc [
4 ] = 1 ; out . mIr [ 0 ] = 3 ; ( void ) sys ; ( void ) t2 ; return 0 ; }
static int32_T ds_c ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_c_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mC_P ; out . mNumCol
= 1ULL ; out . mNumRow = 6ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; (
void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_tduf_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mTDUF_P ; out .
mNumCol = 4ULL ; out . mNumRow = 6ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ]
= 1 ; out . mJc [ 2 ] = 2 ; out . mJc [ 3 ] = 4 ; out . mJc [ 4 ] = 5 ; out .
mIr [ 0 ] = 3 ; out . mIr [ 1 ] = 4 ; out . mIr [ 2 ] = 2 ; out . mIr [ 3 ] =
5 ; out . mIr [ 4 ] = 5 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static
int32_T ds_tdxf_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput
* t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out =
t2 -> mTDXF_P ; out . mNumCol = 6ULL ; out . mNumRow = 6ULL ; out . mJc [ 0 ]
= 0 ; out . mJc [ 1 ] = 4 ; out . mJc [ 2 ] = 7 ; out . mJc [ 3 ] = 8 ; out .
mJc [ 4 ] = 9 ; out . mJc [ 5 ] = 12 ; out . mJc [ 6 ] = 14 ; out . mIr [ 0 ]
= 0 ; out . mIr [ 1 ] = 1 ; out . mIr [ 2 ] = 3 ; out . mIr [ 3 ] = 5 ; out .
mIr [ 4 ] = 0 ; out . mIr [ 5 ] = 1 ; out . mIr [ 6 ] = 5 ; out . mIr [ 7 ] =
2 ; out . mIr [ 8 ] = 1 ; out . mIr [ 9 ] = 0 ; out . mIr [ 10 ] = 1 ; out .
mIr [ 11 ] = 5 ; out . mIr [ 12 ] = 4 ; out . mIr [ 13 ] = 5 ; ( void ) sys ;
( void ) t2 ; return 0 ; } static int32_T ds_ddf ( const NeDynamicSystem *
sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1
; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_ddf_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mDDF_P ; out .
mNumCol = 0ULL ; out . mNumRow = 6ULL ; out . mJc [ 0 ] = 0 ; ( void ) sys ;
( void ) t2 ; return 0 ; } static int32_T ds_vmf ( const NeDynamicSystem *
sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) {
PmBoolVector out ; ( void ) t1 ; out = t2 -> mVMF ; out . mX [ 0 ] = false ;
out . mX [ 1 ] = false ; out . mX [ 2 ] = true ; out . mX [ 3 ] = false ; out
. mX [ 4 ] = true ; out . mX [ 5 ] = true ; ( void ) sys ; ( void ) t2 ;
return 0 ; } static int32_T ds_slf ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmBoolVector out ; (
void ) t1 ; out = t2 -> mSLF ; out . mX [ 0 ] = false ; out . mX [ 1 ] =
false ; out . mX [ 2 ] = false ; out . mX [ 3 ] = false ; out . mX [ 4 ] =
false ; out . mX [ 5 ] = false ; ( void ) sys ; ( void ) t2 ; return 0 ; }
static int32_T ds_dnf ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmRealVector out ; (
void ) t1 ; out = t2 -> mDNF ; out . mX [ 0 ] = - 1.0 ; ( void ) sys ; ( void
) t2 ; return 0 ; } static int32_T ds_dnf_p ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern
out ; ( void ) t1 ; out = t2 -> mDNF_P ; out . mNumCol = 4ULL ; out . mNumRow
= 6ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 1 ;
out . mJc [ 3 ] = 1 ; out . mJc [ 4 ] = 1 ; out . mIr [ 0 ] = 4 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dnf_v_x ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmBoolVector out ; ( void ) t1 ; out = t2 -> mDNF_V_X ; out . mX [ 0 ]
= true ; out . mX [ 1 ] = true ; out . mX [ 2 ] = true ; out . mX [ 3 ] =
false ; out . mX [ 4 ] = false ; out . mX [ 5 ] = true ; ( void ) sys ; (
void ) t2 ; return 0 ; } static int32_T ds_slf0 ( const NeDynamicSystem * sys
, const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmBoolVector
out ; ( void ) t1 ; out = t2 -> mSLF0 ; out . mX [ 0 ] = false ; out . mX [ 1
] = false ; out . mX [ 2 ] = false ; out . mX [ 3 ] = false ; out . mX [ 4 ]
= false ; out . mX [ 5 ] = false ; ( void ) sys ; ( void ) t2 ; return 0 ; }
static int32_T ds_ic ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmRealVector out ; (
void ) t1 ; out = t2 -> mIC ; out . mX [ 0 ] = 0.0 ; out . mX [ 1 ] = 0.0 ;
out . mX [ 2 ] = 1.0 ; out . mX [ 3 ] = 0.0 ; out . mX [ 4 ] = 0.0 ; out . mX
[ 5 ] = 0.0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_icr
( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_icr_im ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_icr_id ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_icr_il ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_dxicr ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dxicr_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mDXICR_P ; out .
mNumCol = 6ULL ; out . mNumRow = 0ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ]
= 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out .
mJc [ 5 ] = 0 ; out . mJc [ 6 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ;
} static int32_T ds_tduicr_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mTDUICR_P ; out . mNumCol = 4ULL ; out . mNumRow =
0ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out
. mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_m ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmRealVector out ; (
void ) t1 ; out = t2 -> mM ; out . mX [ 0 ] = 0.027955833729988753 ; out . mX
[ 1 ] = - 0.0017476233056745176 ; out . mX [ 2 ] = 1.0 ; ( void ) sys ; (
void ) t2 ; return 0 ; } static int32_T ds_m_p ( const NeDynamicSystem * sys
, const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) {
PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mM_P ; out . mNumCol = 6ULL
; out . mNumRow = 6ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 1 ; out .
mJc [ 2 ] = 2 ; out . mJc [ 3 ] = 3 ; out . mJc [ 4 ] = 3 ; out . mJc [ 5 ] =
3 ; out . mJc [ 6 ] = 3 ; out . mIr [ 0 ] = 1 ; out . mIr [ 1 ] = 0 ; out .
mIr [ 2 ] = 2 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_dxm ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_dxm_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mDXM_P ; out . mNumCol = 6ULL ; out . mNumRow =
3ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out
. mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; out . mJc [ 6 ]
= 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dum ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_dum_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 ->
mDUM_P ; out . mNumCol = 4ULL ; out . mNumRow = 3ULL ; out . mJc [ 0 ] = 0 ;
out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [
4 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dtm (
const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_dtm_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mDTM_P ; out . mNumCol = 1ULL ; out . mNumRow =
3ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; ( void ) sys ; ( void ) t2
; return 0 ; } static int32_T ds_vmm ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmBoolVector out ; (
void ) t1 ; out = t2 -> mVMM ; out . mX [ 0 ] = false ; out . mX [ 1 ] =
false ; out . mX [ 2 ] = false ; ( void ) sys ; ( void ) t2 ; return 0 ; }
static int32_T ds_mode ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmIntVector out ;
real_T U_idx_2 ; real_T U_idx_3 ; real_T X_idx_5 ; U_idx_2 = t1 -> mU . mX [
2 ] ; U_idx_3 = t1 -> mU . mX [ 3 ] ; X_idx_5 = t1 -> mX . mX [ 5 ] ; out =
t2 -> mMODE ; out . mX [ 0 ] = ( int32_T ) ( U_idx_2 > 2.5 ) ; out . mX [ 1 ]
= ( int32_T ) ( U_idx_2 > 2.5 ) ; out . mX [ 2 ] = ( int32_T ) ( X_idx_5 <
0.0 ) ; out . mX [ 3 ] = ( int32_T ) ( X_idx_5 <= 5.0 ) ; out . mX [ 4 ] = (
int32_T ) ( U_idx_3 > 2.5 ) ; ( void ) sys ; ( void ) t2 ; return 0 ; }
static int32_T ds_dp_l ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dp_i ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_dp_j ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_dp_r ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_qx ( const NeDynamicSystem
* sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void )
t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_qu ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_qt ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0
; } static int32_T ds_q1 ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_qx_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mQX_P ; out .
mNumCol = 6ULL ; out . mNumRow = 6ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ]
= 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out .
mJc [ 5 ] = 0 ; out . mJc [ 6 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ;
} static int32_T ds_qu_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mQU_P ; out . mNumCol = 4ULL ; out . mNumRow = 6ULL
; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc
[ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; }
static int32_T ds_qt_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mQT_P ; out . mNumCol = 1ULL ; out . mNumRow = 6ULL
; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; ( void ) sys ; ( void ) t2 ;
return 0 ; } static int32_T ds_q1_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mQ1_P ; out . mNumCol = 1ULL ; out . mNumRow = 6ULL
; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; ( void ) sys ; ( void ) t2 ;
return 0 ; } static int32_T ds_var_tol ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmRealVector out ; (
void ) t1 ; out = t2 -> mVAR_TOL ; out . mX [ 0 ] = 1.0E-9 ; out . mX [ 1 ] =
1.0E-9 ; out . mX [ 2 ] = 1.0E-9 ; out . mX [ 3 ] = 1.0E-9 ; out . mX [ 4 ] =
1.0E-9 ; out . mX [ 5 ] = 1.0E-9 ; ( void ) sys ; ( void ) t2 ; return 0 ; }
static int32_T ds_eq_tol ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmRealVector out ; (
void ) t1 ; out = t2 -> mEQ_TOL ; out . mX [ 0 ] = 1.0E-9 ; out . mX [ 1 ] =
1.0E-9 ; out . mX [ 2 ] = 1.0E-9 ; out . mX [ 3 ] = 1.0E-9 ; out . mX [ 4 ] =
1.0E-9 ; out . mX [ 5 ] = 1.0E-9 ; ( void ) sys ; ( void ) t2 ; return 0 ; }
static int32_T ds_lv ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmBoolVector out ; (
void ) t1 ; out = t2 -> mLV ; out . mX [ 0 ] = false ; out . mX [ 1 ] = false
; out . mX [ 2 ] = false ; out . mX [ 3 ] = true ; out . mX [ 4 ] = false ;
out . mX [ 5 ] = false ; ( void ) sys ; ( void ) t2 ; return 0 ; } static
int32_T ds_slv ( const NeDynamicSystem * sys , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * t2 ) { PmBoolVector out ; ( void ) t1 ; out = t2 ->
mSLV ; out . mX [ 0 ] = false ; out . mX [ 1 ] = false ; out . mX [ 2 ] =
false ; out . mX [ 3 ] = true ; out . mX [ 4 ] = false ; out . mX [ 5 ] =
false ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_y ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t2 , NeDsMethodOutput *
t3 ) { PmRealVector out ; real_T X_idx_4 ; real_T X_idx_3 ; X_idx_3 = t2 ->
mX . mX [ 3 ] ; X_idx_4 = t2 -> mX . mX [ 4 ] ; out = t3 -> mY ; out . mX [ 0
] = X_idx_3 ; out . mX [ 1 ] = - X_idx_4 / - 1.0 ; ( void ) sys ; ( void ) t3
; return 0 ; } static int32_T ds_dxy ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmRealVector out ; (
void ) t1 ; out = t2 -> mDXY ; out . mX [ 0 ] = 1.0 ; out . mX [ 1 ] = 1.0 ;
( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dxy_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mDXY_P ; out .
mNumCol = 6ULL ; out . mNumRow = 2ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ]
= 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 1 ; out .
mJc [ 5 ] = 2 ; out . mJc [ 6 ] = 2 ; out . mIr [ 0 ] = 0 ; out . mIr [ 1 ] =
1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_duy ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T
ds_duy_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 ->
mDUY_P ; out . mNumCol = 4ULL ; out . mNumRow = 2ULL ; out . mJc [ 0 ] = 0 ;
out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [
4 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_mduy_p
( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 ->
mMDUY_P ; out . mNumCol = 4ULL ; out . mNumRow = 2ULL ; out . mJc [ 0 ] = 0 ;
out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [
4 ] = 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; } static int32_T ds_mdxy_p
( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 ->
mMDXY_P ; out . mNumCol = 6ULL ; out . mNumRow = 2ULL ; out . mJc [ 0 ] = 0 ;
out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [
4 ] = 0 ; out . mJc [ 5 ] = 0 ; out . mJc [ 6 ] = 0 ; ( void ) sys ; ( void )
t2 ; return 0 ; } static int32_T ds_tduy_p ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern
out ; ( void ) t1 ; out = t2 -> mTDUY_P ; out . mNumCol = 4ULL ; out .
mNumRow = 2ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ]
= 0 ; out . mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; ( void ) sys ; ( void ) t2
; return 0 ; } static int32_T ds_tdxy_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; out = t2 -> mTDXY_P ; out . mNumCol = 6ULL ; out . mNumRow =
2ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out
. mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 1 ; out . mJc [ 5 ] = 2 ; out . mJc [ 6 ]
= 2 ; out . mIr [ 0 ] = 0 ; out . mIr [ 1 ] = 1 ; ( void ) sys ; ( void ) t2
; return 0 ; } static int32_T ds_dty ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
sys ; ( void ) t2 ; return 0 ; } static int32_T ds_dty_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; out = t2 -> mDTY_P ; out .
mNumCol = 1ULL ; out . mNumRow = 2ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ]
= 0 ; ( void ) sys ; ( void ) t2 ; return 0 ; }
