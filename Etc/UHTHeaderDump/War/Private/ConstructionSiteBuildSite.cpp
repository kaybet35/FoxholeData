#include "ConstructionSiteBuildSite.h"
#include "CraneSpawnLocationComponent.h"

AConstructionSiteBuildSite::AConstructionSiteBuildSite(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsBuildSiteMapIconVisible = true;
    this->CraneSpawnLocationComponent = CreateDefaultSubobject<UCraneSpawnLocationComponent>(TEXT("CraneSpawnLocationComponent"));
    this->CraneSpawnLocationComponent->SetupAttachment(RootComponent);
}


