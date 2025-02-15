#include "FirePit.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "EMapBoundaryBuildRule.h"
#include "EStructureProfileType.h"
#include "Net/UnrealNetwork.h"
#include "TemperatureModifierSphereComponent.h"

AFirePit::AFirePit(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProfileType = EStructureProfileType::FieldStructure;
    this->MapBoundaryBuildRule = EMapBoundaryBuildRule::OptionallyBuildableNearBorder;
    this->TemperatureModifierComponent = CreateDefaultSubobject<UTemperatureModifierSphereComponent>(TEXT("TemperatureModifierComponent"));
    this->FireMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FireMesh"));
    this->Fire1ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Fire1ParticleSystem"));
    this->Fire2ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Fire2ParticleSystem"));
    this->Fire3ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Fire3ParticleSystem"));
    this->FireSFXLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("FireSFXLoop"));
    this->DieselConsumptionRate = 0.00f;
    this->Fire1ParticleSystem->SetupAttachment(RootComponent);
    this->Fire2ParticleSystem->SetupAttachment(RootComponent);
    this->Fire3ParticleSystem->SetupAttachment(RootComponent);
    this->FireSFXLoop->SetupAttachment(RootComponent);
    this->TemperatureModifierComponent->SetupAttachment(RootComponent);
    this->FireMesh->SetupAttachment(RootComponent);
}

void AFirePit::OnRep_FuelTankDiesel() {
}

void AFirePit::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFirePit, FuelTankDiesel);
}


