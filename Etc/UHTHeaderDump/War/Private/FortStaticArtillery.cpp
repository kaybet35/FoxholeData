#include "FortStaticArtillery.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "EStructureProfileType.h"
#include "InfrastructureComponent.h"
#include "ModularMountsComponent.h"
#include "Net/UnrealNetwork.h"
#include "TeamFlagMeshComponent.h"

AFortStaticArtillery::AFortStaticArtillery(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProfileType = EStructureProfileType::FortRotatableUpgradeRestricted;
    this->KillVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("KillVolume"));
    this->ModularMountsComponent = CreateDefaultSubobject<UModularMountsComponent>(TEXT("ModularMountsComponent"));
    this->InfrastructureComponent = CreateDefaultSubobject<UInfrastructureComponent>(TEXT("InfrastructureComponent"));
    this->bProvidesBasedShelter = true;
    this->bHasMeshVisibilityComponent = true;
    this->bCanBlockAIUpgrade = true;
    this->bAggroSingleStructureOnDamage = true;
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->FlagMesh = CreateDefaultSubobject<UTeamFlagMeshComponent>(TEXT("FlagMesh"));
    this->FireShellParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FireShellParticleSystem"));
    this->MinDistance = 0.00f;
    this->MaxDistance = 0.00f;
    this->FiringAngle = 0.00f;
    this->FiringCooldown = 0.00f;
    this->MinVerticalAngle = 0.00f;
    this->MaxVerticalAngle = 0.00f;
    this->InitialDelay = 0.00f;
    this->ExplosionDelay = 0.00f;
    this->HorizontalAngle = 0.00f;
    this->VerticalAngle = 45.00f;
    this->bIsFiring = false;
    this->FireShellParticleSystem->SetupAttachment(SkeletalMesh);
    this->FlagMesh->SetupAttachment(RootComponent);
    this->KillVolume->SetupAttachment(RootComponent);
    this->SkeletalMesh->SetupAttachment(RootComponent);
}

void AFortStaticArtillery::OnRep_IsFiring() {
}

void AFortStaticArtillery::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortStaticArtillery, HorizontalAngle);
    DOREPLIFETIME(AFortStaticArtillery, VerticalAngle);
    DOREPLIFETIME(AFortStaticArtillery, bIsFiring);
}


