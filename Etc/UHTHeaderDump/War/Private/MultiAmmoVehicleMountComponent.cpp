#include "MultiAmmoVehicleMountComponent.h"
#include "Net/UnrealNetwork.h"

UMultiAmmoVehicleMountComponent::UMultiAmmoVehicleMountComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DisplayName = FText::FromString(TEXT("Turret"));
    this->bRequiresExternalReload = false;
}

void UMultiAmmoVehicleMountComponent::ServerSetDesiredAmmoType_Implementation(FName InDesiredAmmoType) {
}
bool UMultiAmmoVehicleMountComponent::ServerSetDesiredAmmoType_Validate(FName InDesiredAmmoType) {
    return true;
}

void UMultiAmmoVehicleMountComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMultiAmmoVehicleMountComponent, MultiAmmo);
}


