#include "TorpedoProjectile.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent
#include "Net/UnrealNetwork.h"
#include "TorpedoMovementComponent.h"

ATorpedoProjectile::ATorpedoProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UTorpedoMovementComponent>(TEXT("ProjectileComp"))) {
    this->bImpactsWater = true;
    this->WaterSurfaceDirectHitExplosionTemplate = NULL;
    this->LaunchSoundCue = NULL;
    this->WaterSurfacePS = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("WaterSurfacePS"));
    this->WaterSurfaceVFXVisibilityDepth = 700.00f;
    this->WaterSurfaceVFXOffset = 100.00f;
    this->ImpactInducedVelocity = 0.00f;
    this->ConeStartRadius = 0.00f;
    this->ConeEndRadius = 0.00f;
    this->ConeLength = 0.00f;
    this->WaterSurfacePS->SetupAttachment(RootComponent);
}

void ATorpedoProjectile::OnRep_SiblingProjectiles() {
}

void ATorpedoProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATorpedoProjectile, Target);
    DOREPLIFETIME(ATorpedoProjectile, SiblingProjectiles);
}


