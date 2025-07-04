#include "Rocket.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "EArmourType.h"
#include "Net/UnrealNetwork.h"

ARocket::ARocket(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ArmourType = EArmourType::Tier2Structure;
    this->bIgnoreFriendlyFire = true;
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Rocket Mesh"));
    this->FuelingParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Fueling Particle System"));
    this->GroundParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Ground Particle System"));
    this->LaunchParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Launch Particle System"));
    this->InFlightParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("In Flight Particle System"));
    this->LaunchSoundCue = NULL;
    this->ImpactSoundCue = NULL;
    this->InFlightCameraShake = NULL;
    this->LaunchAnimationTime = 8.00f;
    this->FlightAnimationTime = 6.00f;
    this->RocketTargetClass = NULL;
    this->ImpactEffectClass = NULL;
    this->GroundZeroClass = NULL;
    this->LaunchAudioComponent = NULL;
    this->State = ERocketLaunchSequence::Idle;
    this->OriginMapID = EWorldConquestMapId::Invalid;
    this->FuelingParticleSystem->SetupAttachment(RootComponent);
    this->GroundParticleSystem->SetupAttachment(RootComponent);
    this->InFlightParticleSystem->SetupAttachment(SkeletalMesh);
    this->LaunchParticleSystem->SetupAttachment(SkeletalMesh);
    this->SkeletalMesh->SetupAttachment(RootComponent);
}

void ARocket::OnRep_State() {
}

void ARocket::OnRep_LiquidTank() {
}


void ARocket::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARocket, State);
    DOREPLIFETIME(ARocket, LiquidTank);
    DOREPLIFETIME(ARocket, SelectedStrikeLocation);
}


