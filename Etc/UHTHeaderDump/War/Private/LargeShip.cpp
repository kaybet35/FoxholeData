#include "LargeShip.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PostProcessComponent -FallbackName=PostProcessComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "AnchorUseComponent.h"
#include "DockComponent.h"
#include "GarrisonComponent.h"
#include "GenericStockpileComponent.h"
#include "Net/UnrealNetwork.h"

ALargeShip::ALargeShip(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsReserveStockpiled = true;
    this->bCanBeDisabled = false;
    this->bAllowItemDrop = true;
    this->bCheckPassengerEncumbrance = false;
    this->bDestroysIceWhenWaterTravelling = true;
    this->KillVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("KillVolume"));
    this->AnchorVolume = CreateDefaultSubobject<UAnchorUseComponent>(TEXT("AnchorVolume"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->GarrisonComponent = CreateDefaultSubobject<UGarrisonComponent>(TEXT("GarrisonComponent"));
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericStockpileComponent>(TEXT("GenericStockpileComponent"));
    this->GenericStockpileComponent1 = CreateDefaultSubobject<UGenericStockpileComponent>(TEXT("GenericStockpileComponent1"));
    this->GenericStockpileComponent2 = CreateDefaultSubobject<UGenericStockpileComponent>(TEXT("GenericStockpileComponent2"));
    this->AnchorState = EAnchorState::Raised;
    this->DockedState = EDockedState::Undocked;
    this->SavedDoors = 0;
    this->DeployedRampAngle = 0.00f;
    this->OutgoingPingSoundCue = NULL;
    this->CargoCheckVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("CargoCheckVolume"));
    this->DockingObstructionCheckVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("DockingObstructionCheck"));
    this->UndockingObstructionCheckVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("UndockingObstructionCheck"));
    this->DockComponent = CreateDefaultSubobject<UDockComponent>(TEXT("DockComponent"));
    this->BuildSiteVehicleType = EVehicleBuildType::NotBuildable;
    this->AnchorComponent = NULL;
    this->VeryMajorDamagePS = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("VeryMajorDamagePS"));
    const FProperty* p_CapsuleComponent_Parent = GetClass()->FindPropertyByName("CapsuleComponent");
    this->MediumDamagePS = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MediumDamagePS"));
    this->VeryMinorDamagePS = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("VeryMinorDamagePS"));
    this->SupportStaticMesh = NULL;
    this->PostProcessComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("PostProcessComponent"));
    this->PostProcessCapsuleHalfHeight = 0.00f;
    this->PostProcessCapsuleRadius = 0.00f;
    this->PostProcessCapsuleZOffset = 0.00f;
    this->PostProcessMaterial = NULL;
    this->PostProcessMaterialInstance = NULL;
    this->bRainStormsCauseFlooding = true;
    this->VeryMajorDamagePS->SetupAttachment(p_CapsuleComponent_Parent->ContainerPtrToValuePtr<UCapsuleComponent>(this));
    this->MediumDamagePS->SetupAttachment(p_CapsuleComponent_Parent->ContainerPtrToValuePtr<UCapsuleComponent>(this));
    this->VeryMinorDamagePS->SetupAttachment(p_CapsuleComponent_Parent->ContainerPtrToValuePtr<UCapsuleComponent>(this));
    this->CargoCheckVolume->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->DockingObstructionCheckVolume->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->UndockingObstructionCheckVolume->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->DockComponent->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->KillVolume->SetupAttachment(RootComponent);
    this->AnchorVolume->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
}

void ALargeShip::OnRep_Leaks() {
}

void ALargeShip::OnRep_GunnerInfos(const TArray<FLargeShipGunnerInfo>& LastGunnerInfos) {
}

void ALargeShip::OnRep_ExtraItemHolders() {
}

void ALargeShip::OnRep_DockedState() {
}

void ALargeShip::OnRep_AnchorState() {
}


void ALargeShip::AddLightComponents(TArray<USceneComponent*> InLightComponents) {
}

void ALargeShip::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ALargeShip, GunnerInfos);
    DOREPLIFETIME(ALargeShip, ExtraItemHolders);
    DOREPLIFETIME(ALargeShip, AnchorState);
    DOREPLIFETIME(ALargeShip, DockedState);
    DOREPLIFETIME(ALargeShip, DeployedRampAngle);
    DOREPLIFETIME(ALargeShip, Leaks);
}


