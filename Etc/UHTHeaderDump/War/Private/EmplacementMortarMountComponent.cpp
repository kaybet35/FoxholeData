#include "EmplacementMortarMountComponent.h"
#include "EEquippedWeaponGripType.h"

UEmplacementMortarMountComponent::UEmplacementMortarMountComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EquippedGripType = EEquippedWeaponGripType::VehicleGunboatCannonGunner;
    this->ScopeRange = 0.00f;
    this->MuzzleFlashPS = NULL;
    this->TelegraphDelay = 0.00f;
    this->MortarFlightTime = 0.00f;
}

void UEmplacementMortarMountComponent::ServerStartInvoke_Implementation(FActivityStateChange ActivityStateChange, float Distance) {
}
bool UEmplacementMortarMountComponent::ServerStartInvoke_Validate(FActivityStateChange ActivityStateChange, float Distance) {
    return true;
}

void UEmplacementMortarMountComponent::MulticastPlayFiringFX_Implementation(const AExplosiveAmmoPickup* AmmoPickupCDO) {
}

void UEmplacementMortarMountComponent::MulticastDamageDebug_Implementation(FVector TraceStart, FVector TraceEnd, FVector Location, const AExplosiveAmmoPickup* AmmoPickupCDO) {
}


