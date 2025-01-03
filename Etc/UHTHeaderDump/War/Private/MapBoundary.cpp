#include "MapBoundary.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

AMapBoundary::AMapBoundary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("BoundaryArrow"));
    this->ArrowComponent = (UArrowComponent*)RootComponent;
    this->MarkerArea = CreateDefaultSubobject<UBoxComponent>(TEXT("BoundaryArea"));
    this->NoBuildArea = CreateDefaultSubobject<UBoxComponent>(TEXT("NoBuildArea"));
    this->MarkerArea->SetupAttachment(RootComponent);
    this->NoBuildArea->SetupAttachment(RootComponent);
}


