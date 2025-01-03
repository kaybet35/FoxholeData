#include "ItemHolderUserComponent.h"
#include "Net/UnrealNetwork.h"

UItemHolderUserComponent::UItemHolderUserComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UItemHolderUserComponent::OnRep_Items() {
}

void UItemHolderUserComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UItemHolderUserComponent, Items);
}


