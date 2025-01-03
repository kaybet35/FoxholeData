#include "ProjectileGunnerMountComponent.h"
#include "EVehicleSubsystem.h"
#include "Net/UnrealNetwork.h"

UProjectileGunnerMountComponent::UProjectileGunnerMountComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DisplayName = FText::FromString(TEXT("Mortar"));
    this->LinkedVehicleSubsystem = EVehicleSubsystem::Turret;
    this->MuzzleFlashPS = NULL;
    this->BackMuzzleFlashPS = NULL;
    this->ShotSoundCue = NULL;
    this->MinSpeed = 3000.00f;
    this->MaxSpeed = 3000.00f;
    this->SpeedVariation = 0.15f;
    this->SuggestedVelocitySpeed = 0.00f;
    this->FallbackAngle = 30.00f;
    this->DetonationDepthToggleIncrement = 100.00f;
    this->MinDetonationDepth = 500.00f;
    this->MaxDetonationDepth = 3000.00f;
    this->ProjectileClass = NULL;
    this->bIsArtilleryMode = false;
    this->bIsDepthMode = false;
    this->bShowAimMesh = false;
    this->bIsAutomaticFire = false;
    this->bApplyVehicleAngleLimit = false;
    this->Ammo = 0;
}

void UProjectileGunnerMountComponent::ServerStopInvoke_Implementation() {
}
bool UProjectileGunnerMountComponent::ServerStopInvoke_Validate() {
    return true;
}

void UProjectileGunnerMountComponent::ServerStartInvoke_Implementation(FCharacterInvokeInfo InvokeInfo, FActivityStateChange ActivityStateChange, const float InDetonationDepth) {
}
bool UProjectileGunnerMountComponent::ServerStartInvoke_Validate(FCharacterInvokeInfo InvokeInfo, FActivityStateChange ActivityStateChange, const float InDetonationDepth) {
    return true;
}

void UProjectileGunnerMountComponent::ServerSetPitch_Implementation(float Pitch) {
}
bool UProjectileGunnerMountComponent::ServerSetPitch_Validate(float Pitch) {
    return true;
}

void UProjectileGunnerMountComponent::AllSpawnFiringEffects_Implementation() {
}

void UProjectileGunnerMountComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UProjectileGunnerMountComponent, Ammo);
}


