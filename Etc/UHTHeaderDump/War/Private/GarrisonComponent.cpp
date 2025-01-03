#include "GarrisonComponent.h"

UGarrisonComponent::UGarrisonComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GarrisonSize = 0.00f;
    this->bIsGarrisonEnabled = true;
    this->bIsToggledDynamically = false;
}


