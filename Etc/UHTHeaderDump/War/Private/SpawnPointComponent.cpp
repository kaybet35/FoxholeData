#include "SpawnPointComponent.h"

USpawnPointComponent::USpawnPointComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Priority = ESpawnPointPriority::High;
}


