#include "ItemHolderComponent.h"

UItemHolderComponent::UItemHolderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InventoryType = EInventoryType::Default;
    this->NextHolderId = 1;
    this->bForceAllItemsAreStackable = false;
}

void UItemHolderComponent::ClientImportItem_Implementation(const AItemPickup* ItemCDO) {
}

void UItemHolderComponent::ClientExportItem_Implementation(const int32 SlotIndex) {
}


