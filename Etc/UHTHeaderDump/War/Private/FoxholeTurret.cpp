#include "FoxholeTurret.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "AITurretComponent.h"
#include "AITurretsControllerComponent.h"
#include "EStructureNetRelevancySize.h"
#include "EStructureProfileType.h"
#include "TeamFlagMeshComponent.h"

AFoxholeTurret::AFoxholeTurret(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProfileType = EStructureProfileType::FieldDefenseStructure;
    this->KillVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("KillVolume"));
    this->StructureNetRelevancySize = EStructureNetRelevancySize::Small;
    this->AITurretComponent = CreateDefaultSubobject<UAITurretComponent>(TEXT("AITurretComponent"));
    this->AITurretsController = CreateDefaultSubobject<UAITurretsControllerComponent>(TEXT("AITurretsControllerComponent"));
    this->MuzzleFlashLocationComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("MuzzleFxLocationComponent"));
    this->ShouldAggroOnDamage = false;
    this->bUseSquareMuzzleBounds = false;
    this->bIsTutorialTurret = false;
    this->bDisallowForwardUpgradeInIsland = false;
    this->bLimitOccupantFiringArc = false;
    this->MaxOccupantFiringArcDeviation = 0.00f;
    this->FlagMesh = CreateDefaultSubobject<UTeamFlagMeshComponent>(TEXT("FlagMesh"));
    this->AITurretComponent->SetupAttachment(RootComponent);
    this->FlagMesh->SetupAttachment(RootComponent);
    this->KillVolume->SetupAttachment(RootComponent);
    this->MuzzleFlashLocationComponent->SetupAttachment(RootComponent);
}


