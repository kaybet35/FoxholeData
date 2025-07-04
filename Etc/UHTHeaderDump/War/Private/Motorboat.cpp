#include "Motorboat.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

AMotorboat::AMotorboat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bInterpolatePitch = true;
    this->bIsVisibleOnSonar = true;
    this->FrontWaterEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FrontWaterEmitter"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->BackWaterEmitter = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BackWaterEmitter"));
    this->BackWaterEmitter->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->FrontWaterEmitter->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
}


