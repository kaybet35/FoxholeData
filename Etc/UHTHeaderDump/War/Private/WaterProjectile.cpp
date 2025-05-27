#include "WaterProjectile.h"
#include "WaterProjectileMovementComponent.h"

AWaterProjectile::AWaterProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UWaterProjectileMovementComponent>(TEXT("ProjectileComp"))) {
    this->InstigatorRoom = NULL;
    this->LastRoom = NULL;
}


