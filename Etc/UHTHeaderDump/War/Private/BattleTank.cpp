#include "BattleTank.h"
#include "Net/UnrealNetwork.h"

ABattleTank::ABattleTank(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAllowAnySeatSwitches = false;
    this->MainGunYaw = 0.00f;
    this->MainGunPitch = 0.00f;
    this->AlternateGunYaw = 0.00f;
    this->AlternateGunPitch = 0.00f;
    this->Alternate2GunYaw = 0.00f;
    this->Alternate2GunPitch = 0.00f;
    this->StashedAmmo = 0;
    this->AlternateStashedAmmo = 0;
    this->Alternate2StashedAmmo = 0;
}

void ABattleTank::OnRep_StashedAmmo() {
}

void ABattleTank::OnRep_MainGunYaw() {
}

void ABattleTank::OnRep_MainGunPitch() {
}

void ABattleTank::OnRep_AlternateStashedAmmo() {
}

void ABattleTank::OnRep_AlternateGunYaw() {
}

void ABattleTank::OnRep_AlternateGunPitch() {
}

void ABattleTank::OnRep_Alternate2GunYaw() {
}

void ABattleTank::OnRep_Alternate2GunPitch() {
}

bool ABattleTank::GetIsMainGunFiring() const {
    return false;
}

void ABattleTank::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABattleTank, MainGunYaw);
    DOREPLIFETIME(ABattleTank, MainGunPitch);
    DOREPLIFETIME(ABattleTank, AlternateGunYaw);
    DOREPLIFETIME(ABattleTank, AlternateGunPitch);
    DOREPLIFETIME(ABattleTank, Alternate2GunYaw);
    DOREPLIFETIME(ABattleTank, Alternate2GunPitch);
    DOREPLIFETIME(ABattleTank, StashedAmmoType);
    DOREPLIFETIME(ABattleTank, AlternateStashedAmmoType);
    DOREPLIFETIME(ABattleTank, Alternate2StashedAmmoType);
    DOREPLIFETIME(ABattleTank, StashedAmmo);
    DOREPLIFETIME(ABattleTank, AlternateStashedAmmo);
    DOREPLIFETIME(ABattleTank, Alternate2StashedAmmo);
}


