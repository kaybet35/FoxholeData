#include "PowerLine.h"
#include "BuildSocketComponent.h"
#include "SplineConnectorComponent.h"

APowerLine::APowerLine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SplineConnector = CreateDefaultSubobject<USplineConnectorComponent>(TEXT("SplineConnector"));
    this->BackSocket = CreateDefaultSubobject<UBuildSocketComponent>(TEXT("BackSocket"));
    this->FrontSocket = CreateDefaultSubobject<UBuildSocketComponent>(TEXT("FrontSocket"));
    this->BuildGhostOffsetZ = 0.00f;
    this->FrontSocket->SetupAttachment(RootComponent);
    this->SplineConnector->SetupAttachment(RootComponent);
    this->BackSocket->SetupAttachment(RootComponent);
}


