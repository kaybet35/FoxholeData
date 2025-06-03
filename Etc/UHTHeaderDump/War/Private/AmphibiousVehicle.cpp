#include "AmphibiousVehicle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

AAmphibiousVehicle::AAmphibiousVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanMoveUnderBridges = true;
    this->bIsVisibleOnSonar = true;
    this->FrontLeftWaterEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FrontLeftWaterEmitter"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->FrontRightWaterEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FrontRightWaterEmitter"));
    this->BackRightWaterEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BackRightWaterEmitter"));
    this->BackLeftWaterEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BackLeftWaterEmitter"));
    this->WakeWaterEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("WakeWaterEmitter"));
    this->WaterDriveLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("WaterDriveLoop"));
    this->WaterDriveLoop->SetupAttachment(RootComponent);
    this->FrontLeftWaterEmitter->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->FrontRightWaterEmitter->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->BackRightWaterEmitter->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->BackLeftWaterEmitter->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->WakeWaterEmitter->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
}


