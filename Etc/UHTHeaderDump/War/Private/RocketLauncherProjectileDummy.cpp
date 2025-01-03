#include "RocketLauncherProjectileDummy.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

ARocketLauncherProjectileDummy::ARocketLauncherProjectileDummy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->SkeletalMesh = (USkeletalMeshComponent*)RootComponent;
}

void ARocketLauncherProjectileDummy::SpoolupFinished() {
}



