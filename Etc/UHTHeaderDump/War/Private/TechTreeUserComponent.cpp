#include "TechTreeUserComponent.h"
#include "Net/UnrealNetwork.h"

UTechTreeUserComponent::UTechTreeUserComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsSpawnPointSetHere = false;
}

void UTechTreeUserComponent::ServerSetVote_Implementation(const ESpawnPointCategory SpawnPointCategory, const EInfrastructureType Vote) {
}
bool UTechTreeUserComponent::ServerSetVote_Validate(const ESpawnPointCategory SpawnPointCategory, const EInfrastructureType Vote) {
    return true;
}

void UTechTreeUserComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTechTreeUserComponent, TechTreeVotes);
    DOREPLIFETIME(UTechTreeUserComponent, bIsSpawnPointSetHere);
}


