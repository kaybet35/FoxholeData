#include "Mech.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "Net/UnrealNetwork.h"

AMech::AMech(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MainGunMuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("MainGunMuzzleLocation"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->LeftGunMuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("LeftGunMuzzleLocation"));
    this->RightGunMuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("RightGunMuzzleLocation"));
    this->StashedMainGunAmmo = 0;
    this->StashedLeftGunAmmo = 0;
    this->StashedRightGunAmmo = 0;
    this->MainGunMuzzleLocation->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->LeftGunMuzzleLocation->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->RightGunMuzzleLocation->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
}

void AMech::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMech, MainGunYawAndPitch);
    DOREPLIFETIME(AMech, LeftGunYawAndPitch);
    DOREPLIFETIME(AMech, RightGunYawAndPitch);
}


