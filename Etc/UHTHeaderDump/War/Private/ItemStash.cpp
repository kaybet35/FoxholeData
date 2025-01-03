#include "ItemStash.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "EStructureProfileType.h"

AItemStash::AItemStash(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetDormancy = DORM_DormantAll;
    this->ProfileType = EStructureProfileType::ItemStash;
    this->bAllowUseByEnemy = true;
    this->DecayTime = 600.00f;
    this->DespawnIfEmptyTime = 5.00f;
    this->CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
    this->CollisionBox->SetupAttachment(RootComponent);
}


