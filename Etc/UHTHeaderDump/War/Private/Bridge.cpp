#include "Bridge.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "EStructureProfileType.h"

ABridge::ABridge(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProfileType = EStructureProfileType::Bridge;
    this->BelowBlockingVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("BelowBlockingVolume"));
    this->AboveBlockingArea = CreateDefaultSubobject<UBoxComponent>(TEXT("AboveBlockingArea"));
    this->AboveBlockingArea->SetupAttachment(RootComponent);
    this->BelowBlockingVolume->SetupAttachment(RootComponent);
}


