#include "EnvironmentModification.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Net/UnrealNetwork.h"

AEnvironmentModification::AEnvironmentModification(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_DormantAll;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->ImpactMap.AddDefaulted(1024);
    this->Seed = 0;
    this->DevastationHeatmap.AddDefaulted(512);
    this->bFirstReplicationOfDevastationHeatmap = true;
    this->CreationTime = 0.00f;
}

void AEnvironmentModification::ProcessDevastationHeatmapReplication(const TArray<uint8>& OldDevastationHeatmap) {
}

void AEnvironmentModification::OnRep_Seed() {
}

void AEnvironmentModification::OnRep_QuantizedPuddleRainfall(const TArray<uint8>& Prev) {
}

void AEnvironmentModification::OnRep_EncodedRemovedFoliageInstances() {
}

void AEnvironmentModification::OnRep_DevastationHeatmap(const TArray<uint8>& OldDevastationHeatmap) {
}

void AEnvironmentModification::OnRep_CreationTime(const float& OldCreationTime) {
}

void AEnvironmentModification::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEnvironmentModification, Seed);
    DOREPLIFETIME(AEnvironmentModification, DevastationHeatmap);
    DOREPLIFETIME(AEnvironmentModification, QuantizedPuddleRainfall);
    DOREPLIFETIME(AEnvironmentModification, CreationTime);
    DOREPLIFETIME(AEnvironmentModification, EncodedRemovedFoliageInstances);
}


