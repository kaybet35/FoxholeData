#include "WarExplosionEffect.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PointLightComponent -FallbackName=PointLightComponent
#include "Net/UnrealNetwork.h"

AWarExplosionEffect::AWarExplosionEffect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeDamaged = false;
    this->RootComponent = CreateDefaultSubobject<UPointLightComponent>(TEXT("ExplosionLight"));
    this->RadialHitImpact = NULL;
    this->ImpactEffectDamage = 1.00f;
    this->ExplosionLightFadeOut = 0.20f;
    this->ExplosionSound = NULL;
    this->CameraShake = NULL;
    this->CameraShakeOuterRadius = 0.00f;
    this->bDoNotOrientToImpactNormal = false;
    this->bOrientToDirectionOfTravel = false;
    this->bManualDestruction = false;
    this->bDestroyWhenParticleSystemCompletes = true;
    this->bParentToImpactSurface = false;
    this->ManualDeactivateTime = 14.00f;
    this->bFadeSoundOnDeactivate = false;
    this->SoundFadeDuration = -1.00f;
    this->PainVolume = NULL;
    this->PainVolumeDelay = 0.00f;
    this->bIsDelayed = false;
    this->bHasPersistentEffect = false;
    this->TankArmourEffectBehaviour = ETankArmourEffectBehaviour::Default;
    this->bHasManuallyDeactivated = false;
    this->SpawnedExplosionSound = NULL;
    this->DetonationDelay = 0.00f;
    this->TelegraphDelay = 0.00f;
    this->ExplosionLight = (UPointLightComponent*)RootComponent;
    this->ServerDetonationTime = -1.00f;
    this->ExplosionParticleSystem = NULL;
}

void AWarExplosionEffect::OnParticleSystemFinished(UParticleSystemComponent* PSystem) {
}

void AWarExplosionEffect::MulticastTelegraph_Implementation(float TimeUntilDetonation) {
}

void AWarExplosionEffect::MulticastDetonate_Implementation() {
}

float AWarExplosionEffect::GetTimeSinceDetonation() const {
    return 0.0f;
}




void AWarExplosionEffect::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWarExplosionEffect, SurfaceHit);
    DOREPLIFETIME(AWarExplosionEffect, ServerDetonationTime);
    DOREPLIFETIME(AWarExplosionEffect, ProjectileImpactVelocity);
}


