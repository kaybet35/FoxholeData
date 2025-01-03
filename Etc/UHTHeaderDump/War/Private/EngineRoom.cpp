#include "EngineRoom.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "EStructureProfileType.h"
#include "Net/UnrealNetwork.h"

AEngineRoom::AEngineRoom(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProfileType = EStructureProfileType::FortRotatableUpgrade;
    this->KillVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("KillVolume"));
    this->bIsTrackedClimbable = true;
    this->bProvidesBasedShelter = true;
    this->bHasMeshVisibilityComponent = true;
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->AnimMontage = NULL;
    this->KillVolume->SetupAttachment(RootComponent);
    this->SkeletalMesh->SetupAttachment(RootComponent);
}

void AEngineRoom::OnRep_FuelInfo() {
}

void AEngineRoom::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEngineRoom, FuelInfo);
}


