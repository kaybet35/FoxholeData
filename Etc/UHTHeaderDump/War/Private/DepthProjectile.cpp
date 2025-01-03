#include "DepthProjectile.h"
#include "DepthProjectileMovementComponent.h"

ADepthProjectile::ADepthProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UDepthProjectileMovementComponent>(TEXT("ProjectileComp"))) {
    this->bImpactsWater = true;
    this->WaterVelocityZ = -200.00f;
}


