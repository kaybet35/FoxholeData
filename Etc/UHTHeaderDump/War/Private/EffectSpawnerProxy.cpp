#include "EffectSpawnerProxy.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Net/UnrealNetwork.h"

AEffectSpawnerProxy::AEffectSpawnerProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("EffectSpawner"));
    this->DestroyedVFX = NULL;
    this->DestroyedSoundCue = NULL;
}

void AEffectSpawnerProxy::OnRep_DestroyedVFX() {
}

void AEffectSpawnerProxy::OnRep_DestroyedSoundCue() {
}

void AEffectSpawnerProxy::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEffectSpawnerProxy, DestroyedVFX);
    DOREPLIFETIME(AEffectSpawnerProxy, DestroyedSoundCue);
}


