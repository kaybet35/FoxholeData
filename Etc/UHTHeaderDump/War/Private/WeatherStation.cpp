#include "WeatherStation.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "EStructureProfileType.h"
#include "FacilityLightComponent.h"
#include "InfrastructureComponent.h"
#include "Net/UnrealNetwork.h"
#include "WarAudioComponent.h"

AWeatherStation::AWeatherStation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProfileType = EStructureProfileType::FortRotatableUpgrade;
    this->KillVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("KillVolume"));
    this->InfrastructureComponent = CreateDefaultSubobject<UInfrastructureComponent>(TEXT("InfrastructureComponent"));
    this->bIgnoreFriendlyFire = true;
    this->bProvidesBasedShelter = true;
    this->bHasMeshVisibilityComponent = true;
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->BaseMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BaseMesh"));
    this->ActiveSFXLoop = CreateDefaultSubobject<UWarAudioComponent>(TEXT("ActiveSFXLoop"));
    this->RotationSFXLoop = CreateDefaultSubobject<UWarAudioComponent>(TEXT("RotationSFXLoop"));
    this->LightComponent = CreateDefaultSubobject<UFacilityLightComponent>(TEXT("LightComponent"));
    this->ActivateSFX = NULL;
    this->DeactivateSFX = NULL;
    this->MaxPower = 100.00f;
    this->RequiredPowerForFiring = 10.00f;
    this->RequiredPowerForRotation = 1.00f;
    this->ActiveDuration = 7200.00f;
    this->MaxTargetAngle = 20.00f;
    this->ConnectionDistance = 125000.00f;
    this->State = EWeatherStationState::Idle;
    this->NetworkedStations = 0;
    this->PredictionOffset = 0;
    this->RequiredSquadMembers = 5;
    this->SquadId = 0;
    this->Yaw = 0.00f;
    this->RemainingActiveTime = 0.00f;
    this->KillVolume->SetupAttachment(RootComponent);
    this->Mesh->SetupAttachment(RootComponent);
    this->BaseMesh->SetupAttachment(RootComponent);
    this->ActiveSFXLoop->SetupAttachment(RootComponent);
    this->RotationSFXLoop->SetupAttachment(RootComponent);
}

void AWeatherStation::OnRep_Yaw(const float PreviousYaw) {
}

void AWeatherStation::OnRep_State() {
}

void AWeatherStation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWeatherStation, State);
    DOREPLIFETIME(AWeatherStation, NetworkedStations);
    DOREPLIFETIME(AWeatherStation, PredictionOffset);
    DOREPLIFETIME(AWeatherStation, RequiredSquadMembers);
    DOREPLIFETIME(AWeatherStation, SquadId);
    DOREPLIFETIME(AWeatherStation, Yaw);
    DOREPLIFETIME(AWeatherStation, GlobalID);
    DOREPLIFETIME(AWeatherStation, ConnectionTo);
    DOREPLIFETIME(AWeatherStation, CoordConnectionTo);
    DOREPLIFETIME(AWeatherStation, ConnectionFrom);
    DOREPLIFETIME(AWeatherStation, CoordConnectionFrom);
}


