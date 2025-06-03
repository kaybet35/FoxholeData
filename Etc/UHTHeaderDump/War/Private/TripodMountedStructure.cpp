#include "TripodMountedStructure.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

ATripodMountedStructure::ATripodMountedStructure(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeBuiltIndoors = true;
    this->TripodMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("TripodMesh"));
    this->GunMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("GunMesh"));
    this->BaseItemCodeName = TEXT("Tripod");
    this->GunMesh->SetupAttachment(TripodMesh);
    this->TripodMesh->SetupAttachment(RootComponent);
}


