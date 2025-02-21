#include "RelicAPC.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "Net/UnrealNetwork.h"

ARelicAPC::ARelicAPC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LeftGunMuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("LeftGunMuzzleLocation"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->RightGunMuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("RightGunMuzzleLocation"));
    this->StashedLeftGunAmmo = 0;
    this->StashedRightGunAmmo = 0;
    this->LeftGunMuzzleLocation->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->RightGunMuzzleLocation->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
}

void ARelicAPC::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARelicAPC, LeftGunYawAndPitch);
    DOREPLIFETIME(ARelicAPC, RightGunYawAndPitch);
}


