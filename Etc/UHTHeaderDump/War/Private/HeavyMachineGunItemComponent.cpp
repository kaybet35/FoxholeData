#include "HeavyMachineGunItemComponent.h"
#include "EEquippedWeaponGripType.h"
#include "Net/UnrealNetwork.h"

UHeavyMachineGunItemComponent::UHeavyMachineGunItemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    this->bAutoActivate = true;
    this->EquippedGripType = EEquippedWeaponGripType::HeavyMachinegun;
    this->SkeletalMesh = NULL;
    this->FireCameraShake = NULL;
    this->ImpactEffect = NULL;
    this->WeaponFireFXClass = NULL;
    this->ShotSoundCue = NULL;
    this->MuzzleFlashPS = NULL;
    this->FiringRate = 0.25f;
    this->bSpawnFakeTracerFX = true;
    this->MitigationType = ECoverMitigationType::Default;
    this->bRequiresOpenVehiclePlatform = false;
    this->bIsVehiclePlatformHeavyWeaponsRestricted = false;
    this->bCheckForOpenSpaceWhenFiring = false;
    this->bCanFireFromVehicle = false;
    this->bIsEquipped = false;
}

void UHeavyMachineGunItemComponent::ServerStopInvoke_Implementation() {
}
bool UHeavyMachineGunItemComponent::ServerStopInvoke_Validate() {
    return true;
}

void UHeavyMachineGunItemComponent::ServerStartInvoke_Implementation(const FCharacterInvokeInfo& InvokeInfo, FActivityStateChange ActivityStateChange) {
}
bool UHeavyMachineGunItemComponent::ServerStartInvoke_Validate(const FCharacterInvokeInfo& InvokeInfo, FActivityStateChange ActivityStateChange) {
    return true;
}

void UHeavyMachineGunItemComponent::OnRep_SimulatedHitNotify() {
}

void UHeavyMachineGunItemComponent::OnRep_IsEquipped() {
}

void UHeavyMachineGunItemComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UHeavyMachineGunItemComponent, bIsEquipped);
    DOREPLIFETIME(UHeavyMachineGunItemComponent, SimulatedHitNotify);
}


