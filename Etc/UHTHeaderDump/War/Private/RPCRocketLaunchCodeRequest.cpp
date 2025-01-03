#include "RPCRocketLaunchCodeRequest.h"

FRPCRocketLaunchCodeRequest::FRPCRocketLaunchCodeRequest() {
    this->LaunchCodeID = 0;
    this->Origin = EWorldConquestMapId::Invalid;
    this->FactionId = EFactionId::Colonials;
}

