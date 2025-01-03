#include "TravelBlockingArea.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

ATravelBlockingArea::ATravelBlockingArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TravelBlockingComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("TravelBlockingComponent"));
    this->bBlockOutgoing = false;
}


