#include "ScoutVehicle.h"

AScoutVehicle::AScoutVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ChassisName = FText::FromString(TEXT("Light Utility Vehicle"));
    this->bIsReserveStockpiled = true;
    this->GunMuzzleLocation = NULL;
    this->StashedAmmo = 0;
}


