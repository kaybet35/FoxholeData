#include "MagicLeapPlanesComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

UMagicLeapPlanesComponent::UMagicLeapPlanesComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->QueryFlags.AddDefaulted(4);
    this->SearchVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("SearchVolume"));
    this->MaxResults = 10;
    this->MinHolePerimeter = 50.00f;
    this->MinPlaneArea = 400.00f;
}

bool UMagicLeapPlanesComponent::RequestPlanesAsync() {
    return false;
}


