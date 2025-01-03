#include "SimPlayerCameraManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PostProcessComponent -FallbackName=PostProcessComponent

ASimPlayerCameraManager::ASimPlayerCameraManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultModifiers.AddDefaulted(1);
    this->PostProcessComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("PostProcess"));
    this->FogMaterialDynamic = NULL;
    this->PostProcessComponent->SetupAttachment(RootComponent);
}


