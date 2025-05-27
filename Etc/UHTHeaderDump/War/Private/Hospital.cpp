#include "Hospital.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "EArmourType.h"
#include "EStructureProfileType.h"
#include "GenericStockpileComponent.h"
#include "HospitalComponent.h"

AHospital::AHospital(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProfileType = EStructureProfileType::LogiStructureWithValuableStorage;
    this->ArmourType = EArmourType::Tier3Structure;
    this->KillVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("KillVolume"));
    this->bIsBuildSiteMapIconVisible = true;
    this->bIsBlankFortPiece = true;
    this->HospitalComponent = CreateDefaultSubobject<UHospitalComponent>(TEXT("HospitalComponent"));
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericStockpileComponent>(TEXT("GenericStockpileComponent"));
    this->KillVolume->SetupAttachment(RootComponent);
}


