#include "ArmoredCar.h"
#include "EServerAnimTickMode.h"
#include "Net/UnrealNetwork.h"

AArmoredCar::AArmoredCar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ServerAnimTickMode = EServerAnimTickMode::TickWhenOccupied;
    this->StashedAmmo = 0;
}

void AArmoredCar::OnRep_StashedAmmo() {
}

void AArmoredCar::OnRep_GunnerYawAndPitch() {
}

void AArmoredCar::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AArmoredCar, GunnerYawAndPitch);
    DOREPLIFETIME(AArmoredCar, StashedAmmoType);
    DOREPLIFETIME(AArmoredCar, StashedAmmo);
}


