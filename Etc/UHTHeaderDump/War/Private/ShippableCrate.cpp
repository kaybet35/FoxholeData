#include "ShippableCrate.h"
#include "EArmourType.h"
#include "EStructureProfileType.h"
#include "Net/UnrealNetwork.h"

AShippableCrate::AShippableCrate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProfileType = EStructureProfileType::Shippable;
    this->ArmourType = EArmourType::Tier1Structure;
    this->ShippableMesh = NULL;
}

void AShippableCrate::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AShippableCrate, StoredCodeName);
}


