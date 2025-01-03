#include "FortTurret.h"
#include "EStructureNetRelevancySize.h"
#include "EStructureProfileType.h"
#include "Net/UnrealNetwork.h"

AFortTurret::AFortTurret(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProfileType = EStructureProfileType::FortUpgrade;
    this->StructureNetRelevancySize = EStructureNetRelevancySize::Medium;
    this->bProvidesBasedShelter = true;
    this->bHasMeshVisibilityComponent = true;
}

void AFortTurret::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortTurret, PowerInfo);
}


