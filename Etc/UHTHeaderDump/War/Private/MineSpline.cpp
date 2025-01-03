#include "MineSpline.h"
#include "BuildSocketComponent.h"
#include "Net/UnrealNetwork.h"
#include "SplineConnectorComponent.h"

AMineSpline::AMineSpline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetDormancy = DORM_DormantAll;
    this->bApplyNoBuildPhysicalMaterialsToSurfaceSamples = true;
    this->bIsConnector = true;
    this->bIsManualConnector = true;
    this->bDropsLargeMaterialsWhenDestroyed = false;
    this->SplineConnector = CreateDefaultSubobject<USplineConnectorComponent>(TEXT("Spline"));
    this->BackSocket = CreateDefaultSubobject<UBuildSocketComponent>(TEXT("BackSocket"));
    this->FrontSocket = CreateDefaultSubobject<UBuildSocketComponent>(TEXT("FrontSocket"));
    this->ExplosionTemplate = NULL;
    this->DamageDelay = 0.00f;
    this->ArmingDelay = 3.00f;
    this->MineMask = 0;
    this->MaxMineCount = 16;
    this->bTriggeredByInfantry = false;
    this->bTriggeredByVehicles = false;
    this->SplineConnector->SetupAttachment(RootComponent);
    this->BackSocket->SetupAttachment(RootComponent);
    this->FrontSocket->SetupAttachment(RootComponent);
}

void AMineSpline::OnRep_MineMask(uint32 PrevMask) {
}

void AMineSpline::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AMineSpline::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMineSpline, MineMask);
}


