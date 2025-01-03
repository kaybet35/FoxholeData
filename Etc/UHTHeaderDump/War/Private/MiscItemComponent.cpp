#include "MiscItemComponent.h"
#include "Net/UnrealNetwork.h"

UMiscItemComponent::UMiscItemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    this->bAutoActivate = true;
    this->bIsEquipped = false;
}

void UMiscItemComponent::OnRep_IsEquipped() {
}

void UMiscItemComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMiscItemComponent, bIsEquipped);
}


