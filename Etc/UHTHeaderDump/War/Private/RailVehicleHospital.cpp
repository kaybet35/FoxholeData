#include "RailVehicleHospital.h"
#include "EServerAnimTickMode.h"
#include "GenericStockpileComponent.h"
#include "HospitalComponent.h"
#include "Net/UnrealNetwork.h"

ARailVehicleHospital::ARailVehicleHospital(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ServerAnimTickMode = EServerAnimTickMode::Custom;
    this->HospitalComponent = CreateDefaultSubobject<UHospitalComponent>(TEXT("HospitalComponent"));
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericStockpileComponent>(TEXT("GenericStockpileComponent"));
    this->StashedAmmo = 0;
}

void ARailVehicleHospital::OnRep_GunnerYawAndPitch() {
}

void ARailVehicleHospital::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARailVehicleHospital, DeployState);
    DOREPLIFETIME(ARailVehicleHospital, GunnerYawAndPitch);
    DOREPLIFETIME(ARailVehicleHospital, StashedAmmoType);
}


