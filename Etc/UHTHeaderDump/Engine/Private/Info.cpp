#include "Info.h"

AInfo::AInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHidden = true;
    this->bAllowTickBeforeBeginPlay = true;
    this->bCanBeDamaged = false;
}


