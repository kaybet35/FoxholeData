#include "RefineryBuildSite.h"
#include "CraneSpawnLocationComponent.h"
#include "GenericItemStockpileComponent.h"

ARefineryBuildSite::ARefineryBuildSite(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsBuildSiteMapIconVisible = true;
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericItemStockpileComponent>(TEXT("GenericStockpileComponent"));
    this->CraneSpawnLocationComponent = CreateDefaultSubobject<UCraneSpawnLocationComponent>(TEXT("CraneSpawnLocationComponent"));
    this->CraneSpawnLocationComponent->SetupAttachment(RootComponent);
}


