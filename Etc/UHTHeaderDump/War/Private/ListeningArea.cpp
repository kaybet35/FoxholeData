#include "ListeningArea.h"
#include "ListeningAreaComponent.h"

AListeningArea::AListeningArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UListeningAreaComponent>(TEXT("ListeningComponent"));
    this->LifeSpanRemaining = 0.00f;
    this->ListeningComponent = (UListeningAreaComponent*)RootComponent;
}


