#include "TownHall.h"
#include "MapIntelligenceSourceComponent.h"

ATownHall::ATownHall(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIgnoreFriendlyFire = true;
    this->bIsFort = false;
    this->MapIntelligenceSourceComponent = CreateDefaultSubobject<UMapIntelligenceSourceComponent>(TEXT("MapIntelligenceSource"));
}


