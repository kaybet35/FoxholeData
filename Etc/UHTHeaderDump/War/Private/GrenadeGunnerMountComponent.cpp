#include "GrenadeGunnerMountComponent.h"
#include "Net/UnrealNetwork.h"

UGrenadeGunnerMountComponent::UGrenadeGunnerMountComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UGrenadeGunnerMountComponent::ServerSetDesiredAmmoType_Implementation(FName InDesiredAmmoType) {
}
bool UGrenadeGunnerMountComponent::ServerSetDesiredAmmoType_Validate(FName InDesiredAmmoType) {
    return true;
}

void UGrenadeGunnerMountComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGrenadeGunnerMountComponent, MultiAmmo);
}


