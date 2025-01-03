#include "TankGunnerMountComponent.h"
#include "EVehicleSubsystem.h"

UTankGunnerMountComponent::UTankGunnerMountComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LinkedVehicleSubsystem = EVehicleSubsystem::Turret;
    this->ShotSoundCue = NULL;
    this->MuzzleFlashPS = NULL;
    this->bUsePerBarrelFX = false;
    this->AimOffsetEnabled = false;
    this->AimOffsetStartRange = 0.00f;
    this->AimRightOffsetAmount = 0.00f;
    this->AimDistanceOffsetAmount = 0.00f;
}

void UTankGunnerMountComponent::ServerFireShell_Implementation(FActivityStateChange ActivityStateChange, const FCharacterInvokeInfo InvokeInfo) {
}
bool UTankGunnerMountComponent::ServerFireShell_Validate(FActivityStateChange ActivityStateChange, const FCharacterInvokeInfo InvokeInfo) {
    return true;
}

void UTankGunnerMountComponent::MulticastPlayFiringFX_Implementation() {
}

void UTankGunnerMountComponent::MulticastPlayDebugTrace_Implementation(FVector TraceStart, FVector TraceEnd, FVector HitLocation, float HitAngle, FVector HitNormal, float DamageInnerRadius, float DamageOuterRadius) {
}


