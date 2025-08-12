#include "Pipeline.h"
#include "BuildSocketComponent.h"
#include "EStructureProfileType.h"
#include "ModificationSlotComponent.h"
#include "SplineConnectorComponent.h"

APipeline::APipeline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetDormancy = DORM_DormantAll;
    this->ProfileType = EStructureProfileType::FieldStructure;
    this->bIgnoreFriendlyFire = true;
    this->bIsConnector = true;
    this->bIsManualConnector = true;
    this->bUsesImpactsMaterial = true;
    this->bCanBeFlaggedForDisruptivePlacement = true;
    this->SplineConnector = CreateDefaultSubobject<USplineConnectorComponent>(TEXT("SplineConnector"));
    this->UpgradeSlotComponent = CreateDefaultSubobject<UModificationSlotComponent>(TEXT("UpgradeSlotComponent"));
    this->BackSocket = CreateDefaultSubobject<UBuildSocketComponent>(TEXT("BackSocket"));
    this->FrontSocket = CreateDefaultSubobject<UBuildSocketComponent>(TEXT("FrontSocket"));
    this->LeftSocket = CreateDefaultSubobject<UBuildSocketComponent>(TEXT("LeftSocket"));
    this->RightSocket = CreateDefaultSubobject<UBuildSocketComponent>(TEXT("RightSocket"));
    this->MaxLiquidAmount = 0.00f;
    this->SystemIndex = -1;
    this->GroundedPipeLength = 0.00f;
    this->BackSocket->SetupAttachment(RootComponent);
    this->FrontSocket->SetupAttachment(RootComponent);
    this->LeftSocket->SetupAttachment(RootComponent);
    this->RightSocket->SetupAttachment(RootComponent);
    this->SplineConnector->SetupAttachment(RootComponent);
    this->UpgradeSlotComponent->SetupAttachment(RootComponent);
}


