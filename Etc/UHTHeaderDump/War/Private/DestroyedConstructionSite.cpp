#include "DestroyedConstructionSite.h"
#include "CraneSpawnLocationComponent.h"

ADestroyedConstructionSite::ADestroyedConstructionSite(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CraneSpawnLocationComponent = CreateDefaultSubobject<UCraneSpawnLocationComponent>(TEXT("CraneSpawnLocationComponent"));
    this->CraneSpawnLocationComponent->SetupAttachment(RootComponent);
}


