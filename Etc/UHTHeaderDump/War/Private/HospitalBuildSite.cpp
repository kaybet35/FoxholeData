#include "HospitalBuildSite.h"
#include "GenericStockpileComponent.h"
#include "HospitalComponent.h"

AHospitalBuildSite::AHospitalBuildSite(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HospitalComponent = CreateDefaultSubobject<UHospitalComponent>(TEXT("HospitalComponent"));
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericStockpileComponent>(TEXT("GenericStockpileComponent"));
}


