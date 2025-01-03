#include "DestroyedAssemblyStation.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "GenericStockpileComponent.h"

ADestroyedAssemblyStation::ADestroyedAssemblyStation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->KillVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("KillVolume"));
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericStockpileComponent>(TEXT("GenericStockpileComponent"));
    this->ModificationMask = 0;
    this->KillVolume->SetupAttachment(RootComponent);
}


