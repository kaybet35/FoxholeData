#include "FestivalFlagHolder.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent

AFestivalFlagHolder::AFestivalFlagHolder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DropOffLocation = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Drop Off Location"));
    this->DropOffLocation->SetupAttachment(RootComponent);
}

void AFestivalFlagHolder::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


