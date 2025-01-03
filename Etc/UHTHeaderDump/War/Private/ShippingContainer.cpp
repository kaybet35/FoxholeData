#include "ShippingContainer.h"
#include "GenericCrateStockpileComponent.h"

AShippingContainer::AShippingContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericCrateStockpileComponent>(TEXT("GenericStockpileComponent"));
}


