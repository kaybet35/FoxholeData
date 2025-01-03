#include "Artillery.h"
#include "Net/UnrealNetwork.h"

AArtillery::AArtillery(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StashedAmmo = 0;
}

void AArtillery::OnRep_StashedAmmo() {
}

void AArtillery::OnRep_GunnerYawAndPitch() {
}

void AArtillery::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AArtillery, GunnerYawAndPitch);
    DOREPLIFETIME(AArtillery, StashedAmmo);
}


