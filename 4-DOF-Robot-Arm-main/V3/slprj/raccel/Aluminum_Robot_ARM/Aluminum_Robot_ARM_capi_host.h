#include "__cf_Aluminum_Robot_ARM.h"
#ifndef RTW_HEADER_Aluminum_Robot_ARM_cap_host_h_
#define RTW_HEADER_Aluminum_Robot_ARM_cap_host_h_
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
Aluminum_Robot_ARM_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void Aluminum_Robot_ARM_host_InitializeDataMapInfo (
Aluminum_Robot_ARM_host_DataMapInfo_T * dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
