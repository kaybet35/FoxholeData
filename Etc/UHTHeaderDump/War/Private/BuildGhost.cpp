#include "BuildGhost.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

ABuildGhost::ABuildGhost(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("StructureArrow"));
    this->ManualConnectorSocket = NULL;
    this->MainSplineConnector = NULL;
    this->ArrowComponent = (UArrowComponent*)RootComponent;
    this->BuildFootprintComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BuildFootprint"));
    this->CDO = NULL;
    this->LineOfSightVisualizationActor = NULL;
    this->UpgradeStructure = NULL;
    this->BuildFootprintComponent->SetupAttachment(RootComponent);
}


