#include "VehicleSeatComponent.h"

UVehicleSeatComponent::UVehicleSeatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Direction = ESeatDirection::None;
    this->bIsSwitchable = true;
    this->bCanFireWeapon = false;
    this->bCanUseBinoculars = false;
    this->bIsWoundable = false;
    this->bOverrideAsPassenger = false;
    this->EnterSFX = NULL;
}


