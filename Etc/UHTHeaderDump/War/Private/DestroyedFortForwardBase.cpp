#include "DestroyedFortForwardBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "EStructureProfileType.h"

ADestroyedFortForwardBase::ADestroyedFortForwardBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProfileType = EStructureProfileType::DestroyedFortBase;
    this->KillVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("KillVolume"));
    this->KillVolume->SetupAttachment(RootComponent);
}


