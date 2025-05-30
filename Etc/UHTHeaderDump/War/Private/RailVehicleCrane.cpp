#include "RailVehicleCrane.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "CraneComponent.h"

ARailVehicleCrane::ARailVehicleCrane(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsReserveStockpiled = true;
    this->BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->RopeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RopeMesh"));
    this->ShippableCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("ShippableCollision"));
    this->ArmMovementSFXLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("ArmMovementSFXLoop"));
    this->DeployingSFXLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("DeployingSFXLoop"));
    this->PulleyMovementSFXLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("PulleyMovementSFXLoop"));
    this->CraneComponent = CreateDefaultSubobject<UCraneComponent>(TEXT("CraneComponent"));
    this->PulleyMovementSFXLoop->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->BaseMesh->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->RopeMesh->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->ShippableCollision->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->ArmMovementSFXLoop->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->DeployingSFXLoop->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
}


