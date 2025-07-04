#include "SplineMeshActor.h"
#include "SplineMeshComponent.h"

ASplineMeshActor::ASplineMeshActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeDamaged = false;
    this->RootComponent = CreateDefaultSubobject<USplineMeshComponent>(TEXT("SplineMeshComponent0"));
    this->SplineMeshComponent = (USplineMeshComponent*)RootComponent;
}


