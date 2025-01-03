#include "AccessBoxComponent.h"

UAccessBoxComponent::UAccessBoxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Priority = 0;
    this->ItemHolderIndex = -1;
    this->StockpileIndex = -1;
}


