#include "BorderTravelGhost.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

ABorderTravelGhost::ABorderTravelGhost(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetDormancy = DORM_DormantAll;
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
    this->BoxCollision = (UBoxComponent*)RootComponent;
}


