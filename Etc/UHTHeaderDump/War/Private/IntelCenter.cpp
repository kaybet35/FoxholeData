#include "IntelCenter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "EStructureProfileType.h"
#include "InfrastructureComponent.h"
#include "Net/UnrealNetwork.h"

AIntelCenter::AIntelCenter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProfileType = EStructureProfileType::FortRotatableUpgrade;
    this->KillVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("KillVolume"));
    this->InfrastructureComponent = CreateDefaultSubobject<UInfrastructureComponent>(TEXT("InfrastructureComponent"));
    this->bIgnoreFriendlyFire = true;
    this->bProvidesBasedShelter = true;
    this->bHasMeshVisibilityComponent = true;
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->BaseMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BaseMesh"));
    this->RotationSFXLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("RotationSFXLoop"));
    this->ListeningSFXLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("ListeningSFXLoop"));
    this->StartListeningSound = NULL;
    this->EndListeningSound = NULL;
    this->RequiredPowerForFiring = 10.00f;
    this->RequiredPowerForRotation = 1.00f;
    this->RequiredSquadMembers = 5;
    this->SquadId = 0;
    this->LastListenEndTime = 0.00f;
    this->ListenTimeRemaining = 0.00f;
    this->KillVolume->SetupAttachment(RootComponent);
    this->Mesh->SetupAttachment(RootComponent);
    this->BaseMesh->SetupAttachment(RootComponent);
    this->RotationSFXLoop->SetupAttachment(RootComponent);
    this->ListeningSFXLoop->SetupAttachment(RootComponent);
}

void AIntelCenter::OnRep_LastListenEndTime(const float Previous) {
}

void AIntelCenter::OnRep_GunnerYawAndPitch(const FVector2D PreviousGunnerYawAndPitch) {
}

void AIntelCenter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIntelCenter, RequiredSquadMembers);
    DOREPLIFETIME(AIntelCenter, SquadId);
    DOREPLIFETIME(AIntelCenter, GunnerYawAndPitch);
    DOREPLIFETIME(AIntelCenter, LastListenEndTime);
    DOREPLIFETIME(AIntelCenter, LaunchCodeInfo);
}


