#include "RocketTarget.h"
#include "Net/UnrealNetwork.h"

ARocketTarget::ARocketTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetDormancy = DORM_DormantAll;
    this->OriginMapID = EWorldConquestMapId::Invalid;
    this->LaunchCodeID = 0;
    this->LaunchTimeRemaining = 0.00f;
    this->bIsSirenActive = false;
}

void ARocketTarget::OnRep_IsSirenActive() {
}

void ARocketTarget::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARocketTarget, bIsSirenActive);
}


