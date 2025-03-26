#include "EnvironmentSFX.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent

AEnvironmentSFX::AEnvironmentSFX(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
    this->ArrowComponent = (UArrowComponent*)RootComponent;
    this->DayTimeSFX = CreateDefaultSubobject<UAudioComponent>(TEXT("DayTimeSFX"));
    this->NightTimeSFX = CreateDefaultSubobject<UAudioComponent>(TEXT("NightTimeSFX"));
    this->NightTimeSFX->SetupAttachment(RootComponent);
    this->DayTimeSFX->SetupAttachment(RootComponent);
}


