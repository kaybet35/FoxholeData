#include "GangwayRamp.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EVisibilityBasedAnimTickOption -FallbackName=EVisibilityBasedAnimTickOption
#include "Net/UnrealNetwork.h"

UGangwayRamp::UGangwayRamp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    this->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::OnlyTickPoseWhenRendered;
    this->DeployLoopSoundCue = NULL;
    this->DeployCompleteSoundCue = NULL;
    this->InteractionVolume = NULL;
    this->PassengerVolume = NULL;
    this->State = ERampState::Raised;
    this->RampAngle = 0.00f;
    this->DeployAudioComponent = NULL;
}

void UGangwayRamp::OnRep_State(ERampState PrevState) {
}

void UGangwayRamp::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGangwayRamp, State);
    DOREPLIFETIME(UGangwayRamp, RampAngle);
}


