#include "ResourceGroupRenderComponent.h"

UResourceGroupRenderComponent::UResourceGroupRenderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DataClass = NULL;
    this->bSetItemHolderAllowedItems = true;
    this->ItemHolderIndex = 0;
    this->StockpileIndex = 0;
    this->LinkedItemHolder = NULL;
    this->LinkedGenericStockpile = NULL;
    this->CurrentMaterial = NULL;
}


