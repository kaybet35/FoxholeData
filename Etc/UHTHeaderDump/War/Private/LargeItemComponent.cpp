#include "LargeItemComponent.h"
#include "Net/UnrealNetwork.h"

ULargeItemComponent::ULargeItemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    this->bAutoActivate = true;
    this->Mesh = NULL;
    this->bIsEquipped = false;
}

void ULargeItemComponent::OnRep_IsEquipped() {
}

void ULargeItemComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ULargeItemComponent, bIsEquipped);
}


