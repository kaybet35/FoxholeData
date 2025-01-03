#include "DestroyedTeamStructure.h"

ADestroyedTeamStructure::ADestroyedTeamStructure(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LastHeldFactionID = EFactionId::NoTeam;
}


