#include "RPCRocketLaunchCodeResponse.h"

FRPCRocketLaunchCodeResponse::FRPCRocketLaunchCodeResponse() {
    this->LaunchCodeID = 0;
    this->Origin = EWorldConquestMapId::Invalid;
    this->TraceResult = ERocketLaunchResponse::Success;
}

