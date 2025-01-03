#include "WeatherActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

AWeatherActor::AWeatherActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
    this->ArrowComponent = (UArrowComponent*)RootComponent;
    this->FreezeBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("FreezeBox"));
    this->WeatherType = EWeatherType::None;
    this->ParameterCurve = NULL;
    this->TransitionDuration = 0.00f;
    this->FreezeBoxComponent->SetupAttachment(RootComponent);
}


