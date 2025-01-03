#include "PowerPoleUserComponent.h"
#include "Net/UnrealNetwork.h"

UPowerPoleUserComponent::UPowerPoleUserComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsDisabled = false;
}

void UPowerPoleUserComponent::ServerSetIsDisabled_Implementation(const bool bInIsDisabled) {
}

void UPowerPoleUserComponent::OnRep_IsDisabled() {
}

void UPowerPoleUserComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPowerPoleUserComponent, bIsDisabled);
}


