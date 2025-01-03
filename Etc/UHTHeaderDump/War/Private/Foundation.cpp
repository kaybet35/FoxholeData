#include "Foundation.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

AFoundation::AFoundation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetDormancy = DORM_DormantAll;
    this->KillVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("KillVolume"));
    this->bIgnoreFriendlyFire = true;
    this->bUsesImpactsMaterial = true;
    this->bCanBeFlaggedForDisruptivePlacement = true;
    this->KillVolume->SetupAttachment(RootComponent);
}


