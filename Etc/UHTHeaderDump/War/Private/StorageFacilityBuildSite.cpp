#include "StorageFacilityBuildSite.h"
#include "CraneSpawnLocationComponent.h"
#include "GenericStockpileComponent.h"
#include "ReserveStockpileComponent.h"

AStorageFacilityBuildSite::AStorageFacilityBuildSite(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsBuildSiteMapIconVisible = true;
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericStockpileComponent>(TEXT("GenericStockpileComponent"));
    this->ReserveStockpileComponent = CreateDefaultSubobject<UReserveStockpileComponent>(TEXT("ReserveStockpileComponent"));
    this->CraneSpawnLocationComponent = CreateDefaultSubobject<UCraneSpawnLocationComponent>(TEXT("CraneSpawnLocationComponent"));
    this->CraneSpawnLocationComponent->SetupAttachment(RootComponent);
}


