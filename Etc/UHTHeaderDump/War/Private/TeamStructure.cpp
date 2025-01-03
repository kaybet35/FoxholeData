#include "TeamStructure.h"
#include "Net/UnrealNetwork.h"

ATeamStructure::ATeamStructure(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TeamId = 255;
    this->bAllowUseByEnemy = false;
    this->bCanBeFlaggedForDisruptivePlacement = false;
    this->DisruptivePlacementVoteMultiplier = 1.00f;
}

void ATeamStructure::OnRep_TeamIdNotify() {
}

void ATeamStructure::BPSetTeamVisuals_Implementation(const int32 VisualTeamId) {
}

void ATeamStructure::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATeamStructure, TeamId);
}


