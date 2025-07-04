#include "OfflineCharacter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "Net/UnrealNetwork.h"
#include "StealthComponent.h"

AOfflineCharacter::AOfflineCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_DormantAll;
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCylinder"));
    this->CapsuleComponent = (UCapsuleComponent*)RootComponent;
    this->CharacterMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("OfflineCharacterMesh"));
    this->Head = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Head"));
    this->Hands = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Hands"));
    this->Legs = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Legs"));
    this->Back = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Back"));
    this->Helmet = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Helmet"));
    this->StealthComponent = CreateDefaultSubobject<UStealthComponent>(TEXT("StealthComponent"));
    this->TeamId = 255;
    this->VisualCustomizationMask = 255;
    this->ZombieType = EZombieType::None;
    this->Temperature = 100;
    this->Muddyness = 0;
    this->CurrentHealth = 0.00f;
    this->MaxHealth = 100.00f;
    this->DeathDuration = 0.00f;
    this->Back->SetupAttachment(CharacterMesh);
    this->CharacterMesh->SetupAttachment(RootComponent);
    this->Hands->SetupAttachment(CharacterMesh);
    this->Head->SetupAttachment(CharacterMesh);
    this->Helmet->SetupAttachment(CharacterMesh);
    this->Legs->SetupAttachment(CharacterMesh);
}

void AOfflineCharacter::MulticastApplyFatalHit_Implementation() {
}


void AOfflineCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOfflineCharacter, TeamId);
    DOREPLIFETIME(AOfflineCharacter, VisualCustomizationMask);
    DOREPLIFETIME(AOfflineCharacter, ZombieType);
    DOREPLIFETIME(AOfflineCharacter, Temperature);
    DOREPLIFETIME(AOfflineCharacter, Muddyness);
}


