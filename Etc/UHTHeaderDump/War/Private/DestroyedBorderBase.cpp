#include "DestroyedBorderBase.h"

ADestroyedBorderBase::ADestroyedBorderBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsBuiltNearBorder = true;
    this->bIsActive = false;
}


