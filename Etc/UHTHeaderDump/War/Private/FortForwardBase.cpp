#include "FortForwardBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "EStructureProfileType.h"
#include "InfrastructureComponent.h"

AFortForwardBase::AFortForwardBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProfileType = EStructureProfileType::FortForwardBase;
    this->KillVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("KillVolume"));
    this->InfrastructureComponent = CreateDefaultSubobject<UInfrastructureComponent>(TEXT("InfrastructureComponent"));
    this->bIgnoreFriendlyFire = true;
    this->bProvidesBasedShelter = true;
    this->bHasMeshVisibilityComponent = true;
    this->LadderLocation = CreateDefaultSubobject<USceneComponent>(TEXT("LadderLocation"));
    this->LadderType = NULL;
    this->Ladder = NULL;
    this->KillVolume->SetupAttachment(RootComponent);
    this->LadderLocation->SetupAttachment(RootComponent);
}


