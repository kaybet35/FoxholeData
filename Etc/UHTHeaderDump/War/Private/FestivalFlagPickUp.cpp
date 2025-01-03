#include "FestivalFlagPickUp.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

AFestivalFlagPickUp::AFestivalFlagPickUp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FlagMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Flag Mesh"));
    this->ColonialMaterial = NULL;
    this->WardenMaterial = NULL;
    this->FlagMesh->SetupAttachment(RootComponent);
}


