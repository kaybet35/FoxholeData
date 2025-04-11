#include "BargeShip.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "Net/UnrealNetwork.h"

ABargeShip::ABargeShip(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ChassisName = FText::FromString(TEXT("Barge"));
    this->bIsReserveStockpiled = true;
    this->bRestrictMovementFromItems = true;
    this->RampDriveVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("RampDriveVolume"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
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
    this->DockingObstructionCheckVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("DockingObstructionCheck"));
    this->UndockingObstructionCheckVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("UndockingObstructionCheck"));
    this->ShippableUseComponent = NULL;
    this->StarterFuelNormalizedOverride = 0.00f;
    this->DockingObstructionCheckVolume->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->UndockingObstructionCheckVolume->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->RampDriveVolume->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->WaterDriveLoop->SetupAttachment(RootComponent);
    this->KillVolume->SetupAttachment(RootComponent);
    this->WorkVolume->SetupAttachment(RootComponent);
    this->BaseMesh->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->RopeMesh->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->TransferLocation->SetupAttachment(RootComponent);
}

void ABargeShip::ServerToggleRamp_Implementation() {
}
bool ABargeShip::ServerToggleRamp_Validate() {
    return true;
}

void ABargeShip::OnRep_ShippableData() {
}

void ABargeShip::OnRep_DockedState() {
}

void ABargeShip::OnRep_CurrentShippable() {
}

void ABargeShip::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABargeShip, DockedState);
    DOREPLIFETIME(ABargeShip, RampAngle);
    DOREPLIFETIME(ABargeShip, CurrentShippable);
    DOREPLIFETIME(ABargeShip, ShippableData);
}


