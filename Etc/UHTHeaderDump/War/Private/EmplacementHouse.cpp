#include "EmplacementHouse.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "EArmourType.h"
#include "EStructureNetRelevancySize.h"
#include "EStructureProfileType.h"
#include "Net/UnrealNetwork.h"

AEmplacementHouse::AEmplacementHouse(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProfileType = EStructureProfileType::EmplacementHouse;
    this->ArmourType = EArmourType::Tier3Structure;
    this->bIgnoreFriendlyFire = true;
    this->StructureNetRelevancySize = EStructureNetRelevancySize::Custom;
    this->EmplacementGunMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("EmplacementGunMesh"));
    this->EmplacementGunMuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("EmplacementGunMuzzleLocation"));
    this->LadderType = NULL;
    this->LadderLocation = CreateDefaultSubobject<USceneComponent>(TEXT("LadderLocation"));
    this->TimeToStarvation = 0.00f;
    this->AnimationHysteresisTime = 0.00f;
    this->StashedAmmo = 0;
    this->Ladder = NULL;
    this->EmplacementGunMuzzleLocation->SetupAttachment(EmplacementGunMesh);
    this->LadderLocation->SetupAttachment(RootComponent);
    this->EmplacementGunMesh->SetupAttachment(RootComponent);
}

void AEmplacementHouse::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEmplacementHouse, GunnerYawAndPitch);
}


