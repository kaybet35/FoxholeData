#include "CraneSpawnLocationComponent.h"

UCraneSpawnLocationComponent::UCraneSpawnLocationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CraneClass = NULL;
    this->Crane = NULL;
    this->UseAreaBox = NULL;
    this->bIsSpawned = false;
}


