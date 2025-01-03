#include "FacilityRefineryBuildSite.h"
#include "CraneSpawnLocationComponent.h"
#include "GenericStockpileComponent.h"

AFacilityRefineryBuildSite::AFacilityRefineryBuildSite(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericStockpileComponent>(TEXT("GenericStockpileComponent"));
    this->CrateGenericStockpileComponent = CreateDefaultSubobject<UGenericStockpileComponent>(TEXT("CrateGenericStockpileComponent"));
    this->CraneSpawnLocationComponent = CreateDefaultSubobject<UCraneSpawnLocationComponent>(TEXT("CraneSpawnLocationComponent"));
    this->ItemInputBuffer = 0;
    this->CraneSpawnLocationComponent->SetupAttachment(RootComponent);
}


