#include "EmplacedArtillery.h"
#include "EStructureProfileType.h"
#include "Net/UnrealNetwork.h"

AEmplacedArtillery::AEmplacedArtillery(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProfileType = EStructureProfileType::EmplacedArtillery;
    this->RequiredSquadMembers = 3;
    this->SquadId = 0;
}

void AEmplacedArtillery::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEmplacedArtillery, RequiredSquadMembers);
    DOREPLIFETIME(AEmplacedArtillery, SquadId);
}


