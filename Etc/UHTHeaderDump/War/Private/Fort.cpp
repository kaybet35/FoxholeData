#include "Fort.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

AFort::AFort(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetDormancy = DORM_DormantAll;
    this->KillVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("KillVolume"));
    this->bIsTrackedClimbable = true;
    this->bProvidesBasedShelter = true;
    this->bHasMeshVisibilityComponent = true;
    this->bSupportsEmplacedStructures = false;
    this->EmplacementLocation = CreateDefaultSubobject<UBoxComponent>(TEXT("EmplacementLocation"));
    this->MinUpgradeTargetDistance = 0.00f;
    this->KillVolume->SetupAttachment(RootComponent);
    this->EmplacementLocation->SetupAttachment(RootComponent);
}


