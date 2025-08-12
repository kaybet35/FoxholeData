#include "ArtilleryGunnerMountComponent.h"
#include "EEquippedWeaponGripType.h"

UArtilleryGunnerMountComponent::UArtilleryGunnerMountComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DisplayName = FText::FromString(TEXT("Artillery"));
    this->EquippedGripType = EEquippedWeaponGripType::VehicleFieldArtillery;
    this->bTriggerDriverFiringState = true;
    this->MuzzleFlashPS = NULL;
    this->TelegraphOffset = 0.00f;
    this->DamageDelay = 0.75f;
    this->FireDelay = 1.50f;
    this->SpoolupDelay = 0.00f;
    this->FiringAngleOverride = 0.00f;
    this->bUseMuzzleRotationForFiringAngleOverride = false;
    this->bUseCustomDelayScaling = false;
    this->bCanRotate = true;
    this->bUseClampTrjectoryToDistanceHack = false;
    this->bIsAutomaticFire = false;
    this->bHighArc = true;
    this->FlightObstructionCheckDistance = 0.00f;
    this->bUsePerBarrelFX = false;
    this->bSupportsDirectFireMode = false;
    this->DirectFireScopeRange = 4000.00f;
    this->DirectFireMaxDistance = 4000.00f;
    this->DirectFireDropOffset = 500.00f;
    this->bDisableRotationForFiringDuration = false;
}

void UArtilleryGunnerMountComponent::ServerStopInvoke_Implementation() {
}
bool UArtilleryGunnerMountComponent::ServerStopInvoke_Validate() {
    return true;
}

void UArtilleryGunnerMountComponent::ServerSetPitch_Implementation(float Pitch) {
}
bool UArtilleryGunnerMountComponent::ServerSetPitch_Validate(float Pitch) {
    return true;
}

void UArtilleryGunnerMountComponent::ServerFireShell_Implementation(FActivityStateChange ActivityStateChange, const bool bInIsDirectFireMode) {
}
bool UArtilleryGunnerMountComponent::ServerFireShell_Validate(FActivityStateChange ActivityStateChange, const bool bInIsDirectFireMode) {
    return true;
}

void UArtilleryGunnerMountComponent::MulticastPlayRocketFiringFX_Implementation(const AExplosiveAmmoPickup* AmmoPickupCDO, const uint8 MuzzleIndex) {
}

void UArtilleryGunnerMountComponent::MulticastPlayFiringFX_Implementation(const AExplosiveAmmoPickup* AmmoPickupCDO) {
}


