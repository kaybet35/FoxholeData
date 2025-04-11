#include "ScreenshotCharacter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

AScreenshotCharacter::AScreenshotCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh0"));
    this->Mesh = (USkeletalMeshComponent*)RootComponent;
    this->Head = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Head"));
    this->Hands = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Hands"));
    this->Legs = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Legs"));
    this->Back = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Back"));
    this->Helmet = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Helmet"));
    this->EquippedItemMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMesh"));
    this->bSetMeshesDynamically = false;
    this->bAlwaysResetEquippedItemMesh = false;
    this->FactionId = EFactionId::Colonials;
    this->OutfitType = EOutfitType::Default;
    this->UniformType = EUniformType::Default;
    this->ZombieType = EZombieType::None;
    this->bIsFemale = false;
    this->SkinTone = 0;
    this->OverrideMaterial = NULL;
    this->Helmet->SetupAttachment(RootComponent);
    this->EquippedItemMesh->SetupAttachment(RootComponent);
    this->Head->SetupAttachment(RootComponent);
    this->Hands->SetupAttachment(RootComponent);
    this->Legs->SetupAttachment(RootComponent);
    this->Back->SetupAttachment(RootComponent);
}


