#include "StructureSeatComponent.h"
#include "Net/UnrealNetwork.h"

UStructureSeatComponent::UStructureSeatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    this->bProvidesFullCover = true;
    this->bProvidesInvul = true;
    this->bTeleportBack = true;
    this->bCanOccupantSeeThroughEverything = false;
    this->bCheckForPlayersOnOccupy = false;
    this->bOccupantCrouches = true;
}

void UStructureSeatComponent::OnRep_CurrentOccupant() {
}

void UStructureSeatComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UStructureSeatComponent, CurrentOccupant);
}


