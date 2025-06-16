#include "BuiltRoad.h"
#include "BuildSocketComponent.h"
#include "EStructureProfileType.h"
#include "SplineConnectorComponent.h"

ABuiltRoad::ABuiltRoad(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetDormancy = DORM_DormantAll;
    this->ProfileType = EStructureProfileType::FieldStructure;
    this->bIsConnector = true;
    this->bIsManualConnector = true;
    this->SplineConnector = CreateDefaultSubobject<USplineConnectorComponent>(TEXT("SplineConnector"));
    this->GrassCullRadius = 0.00f;
    this->BackSocket = CreateDefaultSubobject<UBuildSocketComponent>(TEXT("BackSocket"));
    this->FrontSocket = CreateDefaultSubobject<UBuildSocketComponent>(TEXT("FrontSocket"));
    this->BackSocket->SetupAttachment(RootComponent);
    this->FrontSocket->SetupAttachment(RootComponent);
    this->SplineConnector->SetupAttachment(RootComponent);
}


