#include "MassProductionFactoryBuildSite.h"
#include "CraneSpawnLocationComponent.h"

AMassProductionFactoryBuildSite::AMassProductionFactoryBuildSite(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CraneSpawnLocationComponent = CreateDefaultSubobject<UCraneSpawnLocationComponent>(TEXT("CraneSpawnLocationComponent"));
    this->CraneSpawnLocationComponent->SetupAttachment(RootComponent);
}


