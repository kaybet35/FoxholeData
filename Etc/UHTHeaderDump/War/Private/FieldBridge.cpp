#include "FieldBridge.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

AFieldBridge::AFieldBridge(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FrontRamp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FrontRamp"));
    this->BackRamp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BackRamp"));
    this->FrontKillVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("FrontKillVolume"));
    this->BackKillVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("BackKillVolume"));
    this->FrontRamp->SetupAttachment(RootComponent);
    this->BackRamp->SetupAttachment(RootComponent);
    this->FrontKillVolume->SetupAttachment(FrontRamp);
    this->BackKillVolume->SetupAttachment(BackRamp);
}


