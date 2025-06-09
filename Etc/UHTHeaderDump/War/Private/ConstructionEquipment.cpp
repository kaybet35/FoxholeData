#include "ConstructionEquipment.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "GenericStockpileComponent.h"
#include "Net/UnrealNetwork.h"
#include "ReplicatedGenericStockpileComponent.h"

AConstructionEquipment::AConstructionEquipment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeFlaggedForDisruptivePlacement = true;
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->ScoopMaterialMesh = NULL;
    this->MaterialGenericStockpileComponent = CreateDefaultSubobject<UGenericStockpileComponent>(TEXT("MaterialsGenericStockpileComponent"));
    this->FuelGenericStockpileComponent = CreateDefaultSubobject<UReplicatedGenericStockpileComponent>(TEXT("FuelGenericStockpileComponent"));
    this->CollisionQueryLocation = CreateDefaultSubobject<USceneComponent>(TEXT("CollisionQueryLocation"));
    this->ActiveLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("ActiveLoopAudioComponent"));
    this->TurningLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("TurningLoopAudioComponent"));
    this->ImpactEffectClass = NULL;
    this->MaterialDropSoundCue = NULL;
    this->MaterialSubmissionDistance = 500.00f;
    this->RecheckBlockedSiteTime = 3.00f;
    this->FuelConsumptionPerCycle = 10;
    this->SkeletalMesh->SetupAttachment(RootComponent);
    this->CollisionQueryLocation->SetupAttachment(RootComponent);
    this->ActiveLoop->SetupAttachment(RootComponent);
    this->TurningLoop->SetupAttachment(RootComponent);
}

void AConstructionEquipment::OnRep_ConstructionEquipmentServerState() {
}

void AConstructionEquipment::MulticastPlayMaterialDropFX_Implementation() {
}

void AConstructionEquipment::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AConstructionEquipment, ServerState);
}


