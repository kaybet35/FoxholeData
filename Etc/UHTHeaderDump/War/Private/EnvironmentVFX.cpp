#include "EnvironmentVFX.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent

AEnvironmentVFX::AEnvironmentVFX(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
    this->ArrowComponent = (UArrowComponent*)RootComponent;
}


