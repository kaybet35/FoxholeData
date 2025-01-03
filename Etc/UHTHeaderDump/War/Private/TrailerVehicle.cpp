#include "TrailerVehicle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

ATrailerVehicle::ATrailerVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UseAreaBox = CreateDefaultSubobject<UBoxComponent>(TEXT("UseAreaBox"));
    this->UseAreaBox->SetupAttachment(RootComponent);
}


