#include "PlayerImposter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "Net/UnrealNetwork.h"

APlayerImposter::APlayerImposter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Head = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Head"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->Hands = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Hands"));
    this->Legs = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Legs"));
    this->Back = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Back"));
    this->Helmet = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Helmet"));
    this->EquippedItemMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMesh"));
    this->FactionId = EFactionId::Colonials;
    this->OutfitType = EOutfitType::Invalid;
    this->UniformType = EUniformType::Default;
    this->bIsFemale = false;
    this->SkinTone = 0;
    this->CustomizationVersion = 0;
    this->EquippedItemMesh->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->Head->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->Hands->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->Legs->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->Back->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->Helmet->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
}

void APlayerImposter::OnRep_CustomizationVersion() {
}

void APlayerImposter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APlayerImposter, FactionId);
    DOREPLIFETIME(APlayerImposter, OutfitType);
    DOREPLIFETIME(APlayerImposter, UniformType);
    DOREPLIFETIME(APlayerImposter, bIsFemale);
    DOREPLIFETIME(APlayerImposter, SkinTone);
    DOREPLIFETIME(APlayerImposter, EquippedItemCodeName);
    DOREPLIFETIME(APlayerImposter, CustomizationVersion);
}


