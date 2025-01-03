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
    this->ShouldAggroOnDamage = false;
    this->MuzzleFlashLocationComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("MuzzleFxLocationComponent"));
    this->bLimitOccupantFiringArc = false;
    this->MaxOccupantFiringArcDeviation = 0.00f;
    this->bUseSquareMuzzleBounds = false;
    this->bIsTutorialTurret = false;
    this->FlagMesh = CreateDefaultSubobject<UTeamFlagMeshComponent>(TEXT("FlagMesh"));
    this->KillVolume->SetupAttachment(RootComponent);
    this->AITurretComponent->SetupAttachment(RootComponent);
    this->MuzzleFlashLocationComponent->SetupAttachment(RootComponent);
    this->FlagMesh->SetupAttachment(RootComponent);
}


