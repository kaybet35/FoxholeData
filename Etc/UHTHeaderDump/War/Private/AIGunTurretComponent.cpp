#include "AIGunTurretComponent.h"
#include "ETurretMuzzleType.h"
#include "ETurretTrackingMode.h"

UAIGunTurretComponent::UAIGunTurretComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MuzzleType = ETurretMuzzleType::GunnerSupport;
    this->TrackingMode = ETurretTrackingMode::GunnerSupportTracking;
    this->ExplosionRadius = 0.00f;
    this->FiringThreshold = 0.00f;
    this->DamageDelay = 0.00f;
    this->ExplosionTemplate = NULL;
}

void UAIGunTurretComponent::MulticastPlayFiringFX_Implementation(const FHitResult& HitResult) {
}


