#include "MGPillbox.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

AMGPillbox::AMGPillbox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->SkeletalMesh->SetupAttachment(RootComponent);
}


