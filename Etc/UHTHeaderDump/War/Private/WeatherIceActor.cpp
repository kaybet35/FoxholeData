#include "WeatherIceActor.h"
#include "Net/UnrealNetwork.h"

AWeatherIceActor::AWeatherIceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_DormantAll;
    this->MeshGridSize = 1;
    this->MeshSize = 100.00f;
    this->MeshHeight = 100.00f;
    this->MeshHealth = 1000;
    this->HeightAboveWaterLevel = 10.00f;
    this->MeshSetsAmount = 0;
    this->AnimationDuration = 5.00f;
    this->DefaultMaterial = NULL;
    this->DamagedMaterial = NULL;
    this->CriticalMaterial = NULL;
    this->DamageStateSFX = NULL;
    this->DamageStateVFX = NULL;
    this->DestroyedSFX = NULL;
    this->DestroyedVFX = NULL;
    this->IceActorDataIndex = -1;
    this->WeatherIceMapData = NULL;
}

void AWeatherIceActor::OnRep_ReplicatedStates(const TArray<uint32>& PreviousReplicatedStates) {
}

void AWeatherIceActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWeatherIceActor, ReplicatedStates);
    DOREPLIFETIME(AWeatherIceActor, IceActorDataIndex);
}


