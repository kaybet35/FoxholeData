#include "LargeShipStorage.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "CraneComponent.h"

ALargeShipStorage::ALargeShipStorage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAllowsDirectPackaging = true;
    this->CraneMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CraneMesh"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
    this->RopeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RopeMesh"));
    this->ShippableCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("ShippableCollision"));
    this->ArmMovementSFXLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("ArmMovementSFXLoop"));
    this->DeployingSFXLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("DeployingSFXLoop"));
    this->PulleyMovementSFXLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("PulleyMovementSFXLoop"));
    this->CraneComponent = CreateDefaultSubobject<UCraneComponent>(TEXT("CraneComponent"));
    this->DeployingSFXLoop->SetupAttachment(CraneMesh);
    this->PulleyMovementSFXLoop->SetupAttachment(CraneMesh);
    this->CraneMesh->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->BaseMesh->SetupAttachment(CraneMesh);
    this->RopeMesh->SetupAttachment(CraneMesh);
    this->ShippableCollision->SetupAttachment(CraneMesh);
    this->ArmMovementSFXLoop->SetupAttachment(CraneMesh);
}


