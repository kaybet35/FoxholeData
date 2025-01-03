#include "RPCRocketTargetUpdate.h"

FRPCRocketTargetUpdate::FRPCRocketTargetUpdate() {
    this->LaunchCodeID = 0;
    this->Origin = EWorldConquestMapId::Invalid;
    this->FactionId = EFactionId::Colonials;
    this->LaunchTimeRemaining = 0.00f;
}

