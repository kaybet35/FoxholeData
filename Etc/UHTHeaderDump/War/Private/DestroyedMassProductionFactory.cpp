#include "DestroyedMassProductionFactory.h"
#include "CraneSpawnLocationComponent.h"

ADestroyedMassProductionFactory::ADestroyedMassProductionFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CraneSpawnLocationComponent = CreateDefaultSubobject<UCraneSpawnLocationComponent>(TEXT("CraneSpawnLocationComponent"));
    this->CraneSpawnLocationComponent->SetupAttachment(RootComponent);
}


