#include "TargetPoint.h"
#include "SceneComponent.h"

ATargetPoint::ATargetPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHidden = true;
    this->bCanBeDamaged = false;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
}


