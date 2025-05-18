#include "MassProductionFactory.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "CraneSpawnLocationComponent.h"

AMassProductionFactory::AMassProductionFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CraneSpawnLocationComponent = CreateDefaultSubobject<UCraneSpawnLocationComponent>(TEXT("CraneSpawnLocationComponent"));
    this->TransferLocation = CreateDefaultSubobject<USceneComponent>(TEXT("TransferLocation"));
    this->TransferLocationFootprint = CreateDefaultSubobject<UBoxComponent>(TEXT("TransferLocationFootprint"));
    this->ShippableCrateSound = NULL;
    this->ShippableCratePS = NULL;
    this->CraneSpawnLocationComponent->SetupAttachment(RootComponent);
    this->TransferLocation->SetupAttachment(RootComponent);
    this->TransferLocationFootprint->SetupAttachment(RootComponent);
}

void AMassProductionFactory::MulticastPlayShippableCrateFX_Implementation() {
}


