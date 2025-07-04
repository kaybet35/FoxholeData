#include "TriggerBase.h"

ATriggerBase::ATriggerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHidden = true;
    this->bCanBeDamaged = false;
    this->CollisionComponent = NULL;
}


