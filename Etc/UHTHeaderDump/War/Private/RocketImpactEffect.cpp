#include "RocketImpactEffect.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent

ARocketImpactEffect::ARocketImpactEffect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_DormantAll;
    this->RootComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
    this->ArrowComponent = (UArrowComponent*)RootComponent;
}


