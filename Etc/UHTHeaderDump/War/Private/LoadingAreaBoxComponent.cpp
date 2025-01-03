#include "LoadingAreaBoxComponent.h"

ULoadingAreaBoxComponent::ULoadingAreaBoxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StorageType = EStorageType::Default;
    this->bFlipSpawnOffsetY = false;
}


