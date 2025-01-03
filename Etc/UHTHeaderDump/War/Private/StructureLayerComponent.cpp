#include "StructureLayerComponent.h"

UStructureLayerComponent::UStructureLayerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IncludedInLayers = 0;
    this->ExcludedByLayers = 0;
}


