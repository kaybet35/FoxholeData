#include "SoldierItemPickUp.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

ASoldierItemPickUp::ASoldierItemPickUp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Torso = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Torso"));
    this->Legs = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Legs"));
    this->Head = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Head"));
    this->Hands = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Hands"));
    this->Helmet = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Helmet"));
    this->Legs->SetupAttachment(Torso);
    this->Head->SetupAttachment(Torso);
    this->Hands->SetupAttachment(Torso);
    this->Helmet->SetupAttachment(Torso);
    this->Torso->SetupAttachment(RootComponent);
}


