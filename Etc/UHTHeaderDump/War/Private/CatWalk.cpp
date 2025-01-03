#include "CatWalk.h"

ACatWalk::ACatWalk(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIgnoreFriendlyFire = true;
    this->bCanBeFlaggedForDisruptivePlacement = true;
}


