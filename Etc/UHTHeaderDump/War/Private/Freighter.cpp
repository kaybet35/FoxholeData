#include "Freighter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "Net/UnrealNetwork.h"

AFreighter::AFreighter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ChassisName = FText::FromString(TEXT("Freighter"));
    this->bIsReserveStockpiled = true;
    this->BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->RopeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RopeMesh"));
    this->TransferLocation = CreateDefaultSubobject<USceneComponent>(TEXT("TransferLocation"));
    this->FrontLeftWaterEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FrontLeftWaterEmitter"));
    this->FrontRightWaterEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FrontRightWaterEmitter"));
    this->BackRightWaterEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BackRightWaterEmitter"));
    this->BackLeftWaterEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BackLeftWaterEmitter"));
    this->WakeWaterEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("WakeWaterEmitter"));
    this->WaterDriveLoop = NULL;
    this->DeployingSFXLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("DeployingSFXLoop"));
    this->GlobalShippableInfo = NULL;
    this->MaxShippableCount = 5;
    this->State = 0;
    this->DynamicMeshComponent = NULL;
    this->TransferLocation->SetupAttachment(RootComponent);
    this->FrontLeftWaterEmitter->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->FrontRightWaterEmitter->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->BackRightWaterEmitter->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->BackLeftWaterEmitter->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->WakeWaterEmitter->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->DeployingSFXLoop->SetupAttachment(RootComponent);
    this->BaseMesh->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->RopeMesh->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
}

void AFreighter::ServerToggleMode_Implementation(const bool bIsDeploy) {
}
bool AFreighter::ServerToggleMode_Validate(const bool bIsDeploy) {
    return true;
}

void AFreighter::OnRep_State(const uint8 PreviousState) {
}

void AFreighter::OnRep_ShippableData() {
}

void AFreighter::OnRep_CurrentShippables() {
}

void AFreighter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFreighter, CurrentShippables);
    DOREPLIFETIME(AFreighter, ShippableData);
    DOREPLIFETIME(AFreighter, State);
}


