#include "PersistentProxyComponent.h"

UPersistentProxyComponent::UPersistentProxyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProxyLoadingDock = NULL;
    this->bIsSpawned = false;
    this->SpawnedLoadingDock = NULL;
}


