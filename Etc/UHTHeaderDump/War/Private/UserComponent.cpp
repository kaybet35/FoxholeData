#include "UserComponent.h"
#include "Net/UnrealNetwork.h"

UUserComponent::UUserComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
}

void UUserComponent::OnRep_AssociatedComponent() {
}

void UUserComponent::OnRep_AssociatedActor() {
}

void UUserComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UUserComponent, AssociatedActor);
    DOREPLIFETIME(UUserComponent, AssociatedComponent);
}


