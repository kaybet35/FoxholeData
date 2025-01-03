#include "DrawStructureLayerComponent.h"

UDrawStructureLayerComponent::UDrawStructureLayerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHiddenInGame = true;
    this->bUseEditorCompositing = true;
}


