#include "DestroyedStructure.h"
#include "EStructureProfileType.h"
#include "Net/UnrealNetwork.h"

ADestroyedStructure::ADestroyedStructure(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetDormancy = DORM_DormantAll;
    this->ProfileType = EStructureProfileType::DestroyedStructure;
    this->bIsScorchable = true;
    this->bIsScorched = false;
}

void ADestroyedStructure::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADestroyedStructure, bIsScorched);
}


