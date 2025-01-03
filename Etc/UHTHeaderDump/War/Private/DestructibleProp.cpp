#include "DestructibleProp.h"

ADestructibleProp::ADestructibleProp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_Initial;
    this->DestroyedFX = NULL;
    this->DestroyedSoundCue = NULL;
}

void ADestructibleProp::MulticastApplyFatalHit_Implementation() {
}


