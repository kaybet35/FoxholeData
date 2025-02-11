#include "TechTreeComponent.h"
#include "Net/UnrealNetwork.h"

UTechTreeComponent::UTechTreeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    this->DataClass = NULL;
    this->bStartsCompleted = false;
    this->Data = NULL;
    this->ItemUnlockBits = 0;
    this->InfrastructureModCount[0] = 0;
    this->InfrastructureModCount[1] = 0;
    this->InfrastructureModCount[2] = 0;
    this->InfrastructureModCount[3] = 0;
    this->InfrastructureModCount[4] = 0;
    this->TechStateID = 0;
}

void UTechTreeComponent::OnRep_ItemUnlockBits(const int32 PreviousItemUnlockBits) {
}

void UTechTreeComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTechTreeComponent, ItemProgress);
    DOREPLIFETIME(UTechTreeComponent, ItemUnlockBits);
    DOREPLIFETIME(UTechTreeComponent, InfrastructureModCount);
}


