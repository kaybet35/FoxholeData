#include "FortGarrisonStation.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "BoatHullComponent.h"
#include "GarrisonComponent.h"
#include "GenericStockpileComponent.h"
#include "SafeHouseVisibilityToggleComponent.h"

AFortGarrisonStation::AFortGarrisonStation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GarrisonComponent = CreateDefaultSubobject<UGarrisonComponent>(TEXT("GarrisonComponent"));
    this->RoofMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RoofMesh"));
    this->BasementMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BasementMesh"));
    this->GroundStaircaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GroundStaircaseMesh"));
    this->BoatHullComponent = CreateDefaultSubobject<UBoatHullComponent>(TEXT("BoatHullComponent"));
    this->VisibilityToggleComponent = CreateDefaultSubobject<USafeHouseVisibilityToggleComponent>(TEXT("VisibilityToggleComponent"));
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericStockpileComponent>(TEXT("GenericStockpileComponent"));
    this->BasementMesh->SetupAttachment(RootComponent);
    this->BoatHullComponent->SetupAttachment(RootComponent);
    this->GroundStaircaseMesh->SetupAttachment(RootComponent);
    this->RoofMesh->SetupAttachment(RootComponent);
    this->VisibilityToggleComponent->SetupAttachment(RootComponent);
}


