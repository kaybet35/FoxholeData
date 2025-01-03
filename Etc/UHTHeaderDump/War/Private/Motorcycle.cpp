#include "Motorcycle.h"

AMotorcycle::AMotorcycle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ChassisName = FText::FromString(TEXT("Motorcycle"));
    this->StashedAmmo = 0;
}


