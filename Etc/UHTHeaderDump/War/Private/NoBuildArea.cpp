#include "NoBuildArea.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

ANoBuildArea::ANoBuildArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NoBuildComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("NoBuildComponent"));
    this->PlacementStatus = EPlacementStatus::IsObstructed;
}


