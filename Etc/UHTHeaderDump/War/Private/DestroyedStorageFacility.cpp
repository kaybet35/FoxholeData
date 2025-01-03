#include "DestroyedStorageFacility.h"
#include "CraneSpawnLocationComponent.h"
#include "GenericStockpileComponent.h"
#include "ReserveStockpileComponent.h"

ADestroyedStorageFacility::ADestroyedStorageFacility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericStockpileComponent>(TEXT("GenericStockpileComponent"));
    this->ReserveStockpileComponent = CreateDefaultSubobject<UReserveStockpileComponent>(TEXT("ReserveStockpileComponent"));
    this->CraneSpawnLocationComponent = CreateDefaultSubobject<UCraneSpawnLocationComponent>(TEXT("CraneSpawnLocationComponent"));
    this->CraneSpawnLocationComponent->SetupAttachment(RootComponent);
}


