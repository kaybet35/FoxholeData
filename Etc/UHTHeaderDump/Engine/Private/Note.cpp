#include "Note.h"
#include "SceneComponent.h"

ANote::ANote(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHidden = true;
    this->bCanBeDamaged = false;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
}


