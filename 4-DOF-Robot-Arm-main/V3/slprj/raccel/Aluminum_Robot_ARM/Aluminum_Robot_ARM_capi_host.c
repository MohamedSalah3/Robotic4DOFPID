#include "Aluminum_Robot_ARM_capi_host.h"
static Aluminum_Robot_ARM_host_DataMapInfo_T root;
static int initialized = 0;
__declspec( dllexport ) rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        Aluminum_Robot_ARM_host_InitializeDataMapInfo(&(root), "Aluminum_Robot_ARM");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction() {return(getRootMappingInfo());}
