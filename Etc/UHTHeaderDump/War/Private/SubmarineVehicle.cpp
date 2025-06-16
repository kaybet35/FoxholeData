#include "SubmarineVehicle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "Net/UnrealNetwork.h"
#include "SubmarineVisibilityToggleComponent.h"

ASubmarineVehicle::ASubmarineVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxDepthForMapIntel = 675.00f;
    this->MinDepthForStealth = 675.00f;
    this->MinDepthForAlternateDamageRules = 675.00f;
    this->SubmergedViewableDistance = 1700.00f;
    this->SubmergedSurfaceAreaPct = 0.90f;
    this->SubmergedViewRadiusCurve = NULL;
    this->SubmarineVisibilityToggleComponent = CreateDefaultSubobject<USubmarineVisibilityToggleComponent>(TEXT("SubmarineVisibilityToggleComponent"));
    this->SeaFloorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SeaFloorMesh"));
    this->MaxElectricity = 150.00f;
    this->SubmergedElectricityPerSecond = 0.10f;
    this->ElectricityRechargePerSecond = 0.50f;
    this->ZeroElectricityEngineThrustMultiplier = 0.50f;
    this->Electricity = -1.00f;
    this->ReplicatedElectricity = 0;
    this->TorpedoRangeIndex = 0;
    this->TorpedoStaticMesh = NULL;
    this->MinDamageDepth = 2000.00f;
    this->MaxDamageDepth = 3000.00f;
    this->MinCrushDamageInterval = 10.00f;
    this->MaxCrushDamageInterval = 5.00f;
    this->CrushDamageIntervalVariance = 2.00f;
    this->CrushDamage = 500.00f;
    this->CrushSoundCue = NULL;
    this->TorpedoTubeStates[0] = EDynamicState::Open;
    this->TorpedoTubeStates[1] = EDynamicState::Open;
    this->LeftTorpedoMesh = NULL;
    this->RightTorpedoMesh = NULL;
    this->VeryMajorDamageUnderWaterPS = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("VeryMajorDamageUnderWaterPS"));
    const FProperty* p_CapsuleComponent_Parent = GetClass()->FindPropertyByName("CapsuleComponent");
    this->MajorDamageUnderWaterPS = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MajorDamageUnderWaterPS"));
    this->MediumDamageUnderWaterPS = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MediumDamageUnderWaterPS"));
    this->MinorDamageUnderWaterPS = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MinorDamageUnderWaterPS"));
    this->VeryMinorDamageUnderWaterPS = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("VeryMinorDamageUnderWaterPS"));
    this->UnderWaterDamagePSDepth = 1000.00f;
    this->VeryMajorDamageUnderWaterPS->SetupAttachment(p_CapsuleComponent_Parent->ContainerPtrToValuePtr<UCapsuleComponent>(this));
    this->MajorDamageUnderWaterPS->SetupAttachment(p_CapsuleComponent_Parent->ContainerPtrToValuePtr<UCapsuleComponent>(this));
    this->MediumDamageUnderWaterPS->SetupAttachment(p_CapsuleComponent_Parent->ContainerPtrToValuePtr<UCapsuleComponent>(this));
    this->MinorDamageUnderWaterPS->SetupAttachment(p_CapsuleComponent_Parent->ContainerPtrToValuePtr<UCapsuleComponent>(this));
    this->VeryMinorDamageUnderWaterPS->SetupAttachment(p_CapsuleComponent_Parent->ContainerPtrToValuePtr<UCapsuleComponent>(this));
    this->SubmarineVisibilityToggleComponent->SetupAttachment(RootComponent);
    this->SeaFloorMesh->SetupAttachment(RootComponent);
}

void ASubmarineVehicle::ShowDamageDepthWarning() {
}

void ASubmarineVehicle::OnRep_TorpedoTubeStates() {
}

void ASubmarineVehicle::OnRep_ReplicatedElectricity(uint8 PrevReplicatedElectricity) {
}

void ASubmarineVehicle::OnRep_Ballasts(const TArray<FBallastInfo>& PrevBallastsInfo) {
}

void ASubmarineVehicle::MulticastPlayCrushFX_Implementation(FVector Location) {
}

void ASubmarineVehicle::CheckDamageDepthWarning() {
}

void ASubmarineVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASubmarineVehicle, Ballasts);
    DOREPLIFETIME(ASubmarineVehicle, HatchState);
    DOREPLIFETIME(ASubmarineVehicle, ReplicatedElectricity);
    DOREPLIFETIME(ASubmarineVehicle, TorpedoTubeStates);
}


