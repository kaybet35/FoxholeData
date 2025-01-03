#include "Mine.h"

AMine::AMine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetDormancy = DORM_DormantAll;
    this->ActivationDelay = 5.00f;
    this->bTriggeredByInfantry = false;
    this->bTriggeredByVehicles = false;
    this->Health = 0;
    this->ArmourType = EArmourType::NoArmour;
}

void AMine::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


