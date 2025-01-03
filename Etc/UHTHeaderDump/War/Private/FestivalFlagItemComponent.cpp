#include "FestivalFlagItemComponent.h"
#include "Net/UnrealNetwork.h"

UFestivalFlagItemComponent::UFestivalFlagItemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WalkingSpeedScale = 1.00f;
    this->TeamId = 255;
}

void UFestivalFlagItemComponent::OnRep_TeamID() {
}

void UFestivalFlagItemComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFestivalFlagItemComponent, TeamId);
}


