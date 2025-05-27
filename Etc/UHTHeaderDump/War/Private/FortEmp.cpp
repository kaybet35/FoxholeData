#include "FortEmp.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "Net/UnrealNetwork.h"

AFortEmp::AFortEmp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FirstSegmentMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FirstSegmentMesh"));
    this->SecondSegmentMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SecondSegmentMesh"));
    this->BuildLocation = CreateDefaultSubobject<UBoxComponent>(TEXT("Build Location"));
    this->LRArtilleryObstructionShape = CreateDefaultSubobject<UBoxComponent>(TEXT("ArtilleryObstructionShape"));
    this->IntelCenterObstructionShape = CreateDefaultSubobject<UBoxComponent>(TEXT("IntelCenterObstructionShape"));
    this->WeatherStationObstructionShape = CreateDefaultSubobject<UBoxComponent>(TEXT("WeatherStationObstructionShape"));
    this->FortGarrisonStationObstructionShape = CreateDefaultSubobject<UBoxComponent>(TEXT("FortGarrisonStationObstructionShape"));
    this->FortEmpSelectedStructure = EFortEmpStructure::None;
    this->RequiredSquadMembers = 5;
    this->SquadId = 0;
    this->FirstSegmentMesh->SetupAttachment(RootComponent);
    this->SecondSegmentMesh->SetupAttachment(RootComponent);
    this->BuildLocation->SetupAttachment(RootComponent);
    this->LRArtilleryObstructionShape->SetupAttachment(RootComponent);
    this->IntelCenterObstructionShape->SetupAttachment(RootComponent);
    this->WeatherStationObstructionShape->SetupAttachment(RootComponent);
    this->FortGarrisonStationObstructionShape->SetupAttachment(RootComponent);
}

void AFortEmp::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortEmp, FortEmpSelectedStructure);
    DOREPLIFETIME(AFortEmp, RequiredSquadMembers);
    DOREPLIFETIME(AFortEmp, SquadId);
}


