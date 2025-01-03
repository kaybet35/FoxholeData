#include "WoundedCarriedItemPickup.h"
#include "EEquipmentSlot.h"
#include "EItemProfileType.h"

AWoundedCarriedItemPickup::AWoundedCarriedItemPickup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EquipmentSlot = EEquipmentSlot::Large;
    this->ItemProfileType = EItemProfileType::UniqueItem;
    this->bIsLarge = true;
}


