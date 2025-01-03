#include "ItemGroupRenderComponent.h"

UItemGroupRenderComponent::UItemGroupRenderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DataClass = NULL;
    this->StockpileIndex = 0;
    this->CurrentMaterial = NULL;
}


