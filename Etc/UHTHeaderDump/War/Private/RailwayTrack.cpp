#include "RailwayTrack.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "BuildSocketComponent.h"
#include "EMapBoundaryBuildRule.h"
#include "EStructureProfileType.h"
#include "Net/UnrealNetwork.h"
#include "RailSwitchUseComponent.h"
#include "SplineConnectorComponent.h"

ARailwayTrack::ARailwayTrack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetDormancy = DORM_DormantAll;
    this->ProfileType = EStructureProfileType::FieldStructure;
    this->bIgnoreFriendlyFire = true;
    this->MapBoundaryBuildRule = EMapBoundaryBuildRule::OptionallyBuildableNearBorder;
    this->bIsConnector = true;
    this->bIsManualConnector = true;
    this->bCanBeFlaggedForDisruptivePlacement = true;
    this->SplineConnector = CreateDefaultSubobject<USplineConnectorComponent>(TEXT("SplineConnector"));
    this->GrassCullRadius = 0.00f;
    this->BackSocket = CreateDefaultSubobject<UBuildSocketComponent>(TEXT("BackSocket"));
    this->FrontSocket = CreateDefaultSubobject<UBuildSocketComponent>(TEXT("FrontSocket"));
    this->BackSwitch = CreateDefaultSubobject<URailSwitchUseComponent>(TEXT("BackSwitch"));
    this->FrontSwitch = CreateDefaultSubobject<URailSwitchUseComponent>(TEXT("FrontSwitch"));
    this->BackSwitchMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BackSwitchMesh"));
    this->FrontSwitchMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FrontSwitchMesh"));
    this->TrackGauge = ETrackGauge::Large;
    this->MaxHeightAboveRoad = 0.00f;
    this->MaxHeightForPathConnection = 0.00f;
    this->RailZOffset = 0.00f;
    this->bIsNoVis = false;
    this->bIsDisabled = false;
    this->bIsShownOnMap = false;
    this->RoadCheckPhysMaterials.AddDefaulted(3);
    this->bHasIncomingTravel = false;
    this->BackSwitchMesh->SetupAttachment(RootComponent);
    this->FrontSwitchMesh->SetupAttachment(RootComponent);
    this->SplineConnector->SetupAttachment(RootComponent);
    this->BackSocket->SetupAttachment(RootComponent);
    this->FrontSocket->SetupAttachment(RootComponent);
    this->BackSwitch->SetupAttachment(RootComponent);
    this->FrontSwitch->SetupAttachment(RootComponent);
}

void ARailwayTrack::OnRep_SwitchStates() {
}

void ARailwayTrack::OnRep_IsDisabled() {
}

void ARailwayTrack::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARailwayTrack, bIsDisabled);
    DOREPLIFETIME(ARailwayTrack, SwitchStates);
}


