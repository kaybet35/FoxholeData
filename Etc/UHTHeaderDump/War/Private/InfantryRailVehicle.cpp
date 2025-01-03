#include "InfantryRailVehicle.h"
#include "Net/UnrealNetwork.h"

AInfantryRailVehicle::AInfantryRailVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StashedAmmo[0] = 0;
    this->StashedAmmo[1] = 0;
    this->StashedAmmo[2] = 0;
    this->RightGunnerIndex = 0;
    this->LeftGunnerIndex = 1;
    this->MainGunnerIndex = -1;
}

void AInfantryRailVehicle::OnRep_GunnerYawAndPitch() {
}

void AInfantryRailVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AInfantryRailVehicle, GunnerYawAndPitch);
    DOREPLIFETIME(AInfantryRailVehicle, StashedAmmoType);
}


