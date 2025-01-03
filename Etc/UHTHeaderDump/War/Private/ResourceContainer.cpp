#include "ResourceContainer.h"
#include "ReplicatedGenericStockpileComponent.h"

AResourceContainer::AResourceContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GenericStockpileComponent = CreateDefaultSubobject<UReplicatedGenericStockpileComponent>(TEXT("GenericStockpileComponent"));
}


