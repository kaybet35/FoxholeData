#include "StickyBombExplosive.h"
#include "Net/UnrealNetwork.h"

AStickyBombExplosive::AStickyBombExplosive(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TotalFuseTime = 5.00f;
    this->FuseTime = 0.00f;
}

void AStickyBombExplosive::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AStickyBombExplosive, FuseTime);
}


