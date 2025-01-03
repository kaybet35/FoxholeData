#include "TransportTruck.h"
#include "Net/UnrealNetwork.h"

ATransportTruck::ATransportTruck(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ChassisName = FText::FromString(TEXT("Truck"));
    this->bIsReserveStockpiled = true;
    this->StashedAmmo = 0;
}

void ATransportTruck::OnRep_StashedAmmo() {
}

void ATransportTruck::OnRep_GunnerYawAndPitch() {
}

void ATransportTruck::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATransportTruck, GunnerYawAndPitch);
    DOREPLIFETIME(ATransportTruck, StashedAmmo);
}


