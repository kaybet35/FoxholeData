#include "WeaponFireFX.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ProjectileMovementComponent -FallbackName=ProjectileMovementComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent

AWeaponFireFX::AWeaponFireFX(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeDamaged = false;
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
    this->MovementComp = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
    this->CollisionComp = (USphereComponent*)RootComponent;
}

void AWeaponFireFX::OnProjectileStop(const FHitResult& HitResult) {
}


