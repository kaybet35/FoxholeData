#include "Barge.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "Net/UnrealNetwork.h"

ABarge::ABarge(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ChassisName = FText::FromString(TEXT("Barge"));
    this->bCanCarryVehicles = true;
    this->bIsReserveStockpiled = true;
    this->bRestrictMovementFromItems = true;
    this->bCargoSealed = false;
    this->bIsVisibleOnSonar = true;
    this->RampDriveVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("RampDriveVolume"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->FrontLeftWaterEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FrontLeftWaterEmitter"));
    this->FrontRightWaterEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FrontRightWaterEmitter"));
    this->BackRightWaterEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BackRightWaterEmitter"));
    this->BackLeftWaterEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BackLeftWaterEmitter"));
    this->WakeWaterEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("WakeWaterEmitter"));
    this->WaterDriveLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("WaterDriveLoop"));
    this->KillVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("KillVolume"));
    this->WorkVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("WorkVolume"));
    this->DockedState = EDockedState::Docked;
    this->RampAngle = 0.00f;
    this->BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
    this->RopeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RopeMesh"));
    this->DynamicMeshComponent = NULL;
    this->TransferLocation = CreateDefaultSubobject<USceneComponent>(TEXT("TransferLocation"));
    this->GlobalShippableInfo = NULL;
    this->ShippableUseComponent = NULL;
    this->BackLeftWaterEmitter->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->WakeWaterEmitter->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->WaterDriveLoop->SetupAttachment(RootComponent);
    this->KillVolume->SetupAttachment(RootComponent);
    this->WorkVolume->SetupAttachment(RootComponent);
    this->BaseMesh->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->RopeMesh->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->TransferLocation->SetupAttachment(RootComponent);
    this->RampDriveVolume->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->FrontLeftWaterEmitter->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->FrontRightWaterEmitter->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->BackRightWaterEmitter->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
}

void ABarge::ServerToggleRamp_Implementation() {
}
bool ABarge::ServerToggleRamp_Validate() {
    return true;
}

void ABarge::OnRep_ShippableData() {
}

void ABarge::OnRep_DockedState() {
}

void ABarge::OnRep_CurrentShippable() {
}

void ABarge::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABarge, DockedState);
    DOREPLIFETIME(ABarge, RampAngle);
    DOREPLIFETIME(ABarge, CurrentShippable);
    DOREPLIFETIME(ABarge, ShippableData);
}


