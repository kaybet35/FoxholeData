#include "LevelBounds.h"
#include "BoxComponent.h"

ALevelBounds::ALevelBounds(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeDamaged = false;
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent0"));
    this->bAutoUpdateBounds = true;
}


