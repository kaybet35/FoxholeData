#include "HalfTrack.h"
#include "EServerAnimTickMode.h"
#include "Net/UnrealNetwork.h"

AHalfTrack::AHalfTrack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAllowAnySeatSwitches = false;
    this->ServerAnimTickMode = EServerAnimTickMode::TickWhenOccupied;
    this->StashedAmmo = 0;
    this->AltStashedAmmo = 0;
    this->MainGunnerIndex = 2;
    this->TowingRearAxleOffest = -200.00f;
}

void AHalfTrack::OnRep_StashedAmmo() {
}

void AHalfTrack::OnRep_GunnerYawAndPitch() {
}

void AHalfTrack::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHalfTrack, GunnerYawAndPitch);
    DOREPLIFETIME(AHalfTrack, StashedAmmoType);
    DOREPLIFETIME(AHalfTrack, StashedAmmo);
    DOREPLIFETIME(AHalfTrack, AltGunnerYawAndPitch);
    DOREPLIFETIME(AHalfTrack, AltStashedAmmoType);
}


