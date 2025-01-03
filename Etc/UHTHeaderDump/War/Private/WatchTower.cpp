#include "WatchTower.h"
#include "EArmourType.h"
#include "EStructureNetRelevancySize.h"
#include "EStructureProfileType.h"
#include "MapIntelligenceSourceComponent.h"
#include "Net/UnrealNetwork.h"
#include "TeamFlagMeshComponent.h"

AWatchTower::AWatchTower(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetDormancy = DORM_DormantAll;
    this->ProfileType = EStructureProfileType::FieldDefenseStructure;
    this->ArmourType = EArmourType::Tier1Structure;
    this->StructureNetRelevancySize = EStructureNetRelevancySize::Small;
    this->MapIntelligenceSourceComponent = CreateDefaultSubobject<UMapIntelligenceSourceComponent>(TEXT("MapIntelligenceSource"));
    this->TeamFlagMeshComponent = CreateDefaultSubobject<UTeamFlagMeshComponent>(TEXT("TeamFlagMesh"));
    this->GunnerYaw = 0.00f;
    this->TeamFlagMeshComponent->SetupAttachment(RootComponent);
}

void AWatchTower::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWatchTower, GunnerYaw);
}


