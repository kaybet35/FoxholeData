#include "WarProjectile.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ProjectileMovementComponent -FallbackName=ProjectileMovementComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
#include "Net/UnrealNetwork.h"

AWarProjectile::AWarProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicateMovement = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
    this->MovementComp = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
    this->CollisionComp = (USphereComponent*)RootComponent;
    this->ParticleComp = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleComp"));
    this->LoopingAudio = CreateDefaultSubobject<UAudioComponent>(TEXT("LoopingAudio"));
    this->SkeletalMesh = NULL;
    this->ExplosionTemplate = NULL;
    this->ProjectileLife = 0.00f;
    this->AutoDetonateTime = 0.00f;
    this->ProjectileDeathDelay = 2.00f;
    this->ExplosionImpactBumpDistance = 8.00f;
    this->PenetrationBonusMaxRange = 0.00f;
    this->bUseAccurateHitReplication = false;
    this->bProjectImpactDownward = false;
    this->bHideMeshOnExplode = true;
    this->bSpawnExplosionOnServer = false;
    this->bImpactsWater = false;
    this->bDebugDraw = false;
    this->bExploded = false;
    this->bRotationRequiresVelocity = false;
    this->RotationVelocityRequirement = 0.00f;
    this->UnderWaterExplosionTemplate = NULL;
    this->WaterSurfaceExplosionTemplate = NULL;
    this->ParticleComp->SetupAttachment(RootComponent);
    this->LoopingAudio->SetupAttachment(RootComponent);
}

void AWarProjectile::SetHomingTarget(AActor* Target) {
}

void AWarProjectile::OnRep_Exploded() {
}

void AWarProjectile::OnProjectileStop(const FHitResult& HitResult) {
}

void AWarProjectile::OnPhysicsVolumeChanged(APhysicsVolume* NewVolume) {
}


void AWarProjectile::MulticastExplodeAll_Implementation(const FProjectileHitInfo_NetQuantize& Impact) {
}

void AWarProjectile::Detonate(const FProjectileHitInfo_NetQuantize& HitResult) {
}

void AWarProjectile::ApplyExplosiveDamageAndSpawnFx(const FProjectileHitInfo_NetQuantize& HitResult) {
}

void AWarProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWarProjectile, bExploded);
}


