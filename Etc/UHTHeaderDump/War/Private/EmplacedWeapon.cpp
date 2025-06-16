#include "EmplacedWeapon.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "EArmourType.h"
#include "EStructureProfileType.h"
#include "Net/UnrealNetwork.h"

AEmplacedWeapon::AEmplacedWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProfileType = EStructureProfileType::EmplacedWeapon;
    this->ArmourType = EArmourType::Tier1Structure;
    this->EmplacedTrackingModifier = 0.00f;
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->FoundationMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FoundationMesh"));
    this->StashedAmmo = 0;
    this->FoundationMesh->SetupAttachment(RootComponent);
    this->Mesh->SetupAttachment(RootComponent);
}

void AEmplacedWeapon::OnRep_StashedAmmo() {
}

void AEmplacedWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEmplacedWeapon, GunnerYawAndPitch);
    DOREPLIFETIME(AEmplacedWeapon, StashedAmmo);
}


