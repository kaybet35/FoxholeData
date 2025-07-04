#include "Fort.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "ModularMountsComponent.h"

AFort::AFort(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetDormancy = DORM_DormantAll;
    this->KillVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("KillVolume"));
    this->ModularMountsComponent = CreateDefaultSubobject<UModularMountsComponent>(TEXT("ModularMountsComponent"));
    this->bIsTrackedClimbable = true;
    this->bProvidesBasedShelter = true;
    this->bHasMeshVisibilityComponent = true;
    this->bIsBlankFortPiece = true;
    this->bSupportsEmplacedStructures = false;
    this->EmplacementLocation = CreateDefaultSubobject<UBoxComponent>(TEXT("EmplacementLocation"));
    this->MinUpgradeTargetDistance = 0.00f;
    this->EmplacementLocation->SetupAttachment(RootComponent);
    this->KillVolume->SetupAttachment(RootComponent);
}


