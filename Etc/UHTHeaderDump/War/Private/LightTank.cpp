#include "LightTank.h"
#include "Net/UnrealNetwork.h"

ALightTank::ALightTank(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StashedAmmo = 0;
}

void ALightTank::OnRep_StashedAmmo() {
}

void ALightTank::OnRep_GunnerYawAndPitch() {
}

bool ALightTank::GetIsShooting() const {
    return false;
}

float ALightTank::GetGunYaw() const {
    return 0.0f;
}

float ALightTank::GetGunPitch() const {
    return 0.0f;
}

void ALightTank::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ALightTank, GunnerYawAndPitch);
    DOREPLIFETIME(ALightTank, StashedAmmo);
    DOREPLIFETIME(ALightTank, StashedAmmoType);
}


