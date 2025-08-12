#include "LongRangeArtillery.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "EStructureProfileType.h"
#include "InfrastructureComponent.h"
#include "Net/UnrealNetwork.h"

ALongRangeArtillery::ALongRangeArtillery(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProfileType = EStructureProfileType::FortRotatableUpgrade;
    this->KillVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("KillVolume"));
    this->InfrastructureComponent = CreateDefaultSubobject<UInfrastructureComponent>(TEXT("InfrastructureComponent"));
    this->bIgnoreFriendlyFire = true;
    this->bProvidesBasedShelter = true;
    this->bHasMeshVisibilityComponent = true;
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->BaseMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BaseMesh"));
    this->RotationSFXLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("RotationSFXLoop"));
    this->FireShellParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FireShellParticleSystem"));
    this->EjectShellParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("EjectShellParticleSystem"));
    this->InitialDelay = 0.00f;
    this->ExplosionDelay = 0.00f;
    this->MaxPower = 100.00f;
    this->RequiredPowerForFiring = 10.00f;
    this->RequiredPowerForRotation = 1.00f;
    this->HeatForFiring = 5;
    this->RequiredSquadMembers = 5;
    this->Heat = 0;
    this->SquadId = 0;
    this->StashedAmmo = 0;
    this->BaseMesh->SetupAttachment(RootComponent);
    this->EjectShellParticleSystem->SetupAttachment(Mesh);
    this->FireShellParticleSystem->SetupAttachment(Mesh);
    this->KillVolume->SetupAttachment(RootComponent);
    this->Mesh->SetupAttachment(RootComponent);
    this->RotationSFXLoop->SetupAttachment(RootComponent);
}

void ALongRangeArtillery::OnRep_GunnerYawAndPitch(const FVector2D PreviousGunnerYawAndPitch) {
}

void ALongRangeArtillery::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ALongRangeArtillery, RequiredSquadMembers);
    DOREPLIFETIME(ALongRangeArtillery, Heat);
    DOREPLIFETIME(ALongRangeArtillery, SquadId);
    DOREPLIFETIME(ALongRangeArtillery, GunnerYawAndPitch);
}


