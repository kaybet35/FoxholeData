#include "ShootingRangeArea.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

AShootingRangeArea::AShootingRangeArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShootingRangeComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("ShootingRangeComponent"));
}

void AShootingRangeArea::OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor) {
}

void AShootingRangeArea::OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor) {
}


