#include "TimedProjectile.h"

ATimedProjectile::ATimedProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FuseTimer = 0.00f;
}


