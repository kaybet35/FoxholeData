#include "MultiAmmoItemComponent.h"
#include "Net/UnrealNetwork.h"

UMultiAmmoItemComponent::UMultiAmmoItemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    this->bIsEquipped = false;
}

void UMultiAmmoItemComponent::ServerSetDesiredAmmoType_Implementation(FName InDesiredAmmoType) {
}
bool UMultiAmmoItemComponent::ServerSetDesiredAmmoType_Validate(FName InDesiredAmmoType) {
    return true;
}

void UMultiAmmoItemComponent::OnRep_MultiAmmo() {
}

void UMultiAmmoItemComponent::OnRep_IsEquipped() {
}

void UMultiAmmoItemComponent::ClientSetDesiredAmmoType_Implementation(FName InDesiredAmmoType) {
}

void UMultiAmmoItemComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMultiAmmoItemComponent, MultiAmmo);
    DOREPLIFETIME(UMultiAmmoItemComponent, bIsEquipped);
}


