#include "ModularMountsComponent.h"
#include "Net/UnrealNetwork.h"

UModularMountsComponent::UModularMountsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActiveModularMounts[0] = 0;
    this->ActiveModularMounts[1] = 0;
    this->ActiveModularMounts[2] = 0;
    this->ActiveModularMounts[3] = 0;
}

void UModularMountsComponent::OnRep_ActiveModularMounts() {
}

void UModularMountsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UModularMountsComponent, ActiveModularMounts);
    DOREPLIFETIME(UModularMountsComponent, GunnerInfo);
}


