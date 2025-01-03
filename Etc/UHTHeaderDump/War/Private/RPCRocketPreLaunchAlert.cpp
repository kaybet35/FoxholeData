#include "RPCRocketPreLaunchAlert.h"

FRPCRocketPreLaunchAlert::FRPCRocketPreLaunchAlert() {
    this->LaunchCodeID = 0;
    this->Origin = EWorldConquestMapId::Invalid;
    this->FactionId = EFactionId::Colonials;
    this->TargetMapID = EWorldConquestMapId::Invalid;
}

