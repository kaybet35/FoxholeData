#include "RailVehicle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
#include "Net/UnrealNetwork.h"
#include "RailCouplerUseComponent.h"
#include "RailVehicleMovementComponent.h"

ARailVehicle::ARailVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<URailVehicleMovementComponent>(TEXT("CharMoveComp"))) {
    this->bReplicateMovement = false;
    this->bNetUseOwnerRelevancy = true;
    this->bUseControllerRotationYaw = false;
    this->bSimGravityDisabled = true;
    this->bUsesTraces = false;
    this->bIncludeInRecoverySaves = false;
    this->bNeedsSkelmeshTickForMovement = false;
    this->WheelBase = 0.00f;
    this->bIsPowered = false;
    this->TrackGauge = ETrackGauge::Large;
    this->FrontCoupler = CreateDefaultSubobject<URailCouplerUseComponent>(TEXT("FrontCoupler"));
    this->RearCoupler = CreateDefaultSubobject<URailCouplerUseComponent>(TEXT("RearCoupler"));
    this->FrontCableComponent = NULL;
    this->IdleLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("IdleLoop"));
    this->BrakeLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("BrakeLoop"));
    this->FrontClacks = CreateDefaultSubobject<UAudioComponent>(TEXT("FrontClacks"));
    this->RearClacks = CreateDefaultSubobject<UAudioComponent>(TEXT("RearClacks"));
    this->SavedFrontTrackAlpha = 0.00f;
    this->LastFrontBogieTrack = NULL;
    this->LastRearBogieTrack = NULL;
    this->bIsBoosting = false;
    this->BorderTravelOverrideExtent = 0.00f;
    this->BrakeLoop->SetupAttachment(RootComponent);
    this->FrontClacks->SetupAttachment(RootComponent);
    this->FrontCoupler->SetupAttachment(RootComponent);
    this->IdleLoop->SetupAttachment(RootComponent);
    this->RearClacks->SetupAttachment(RootComponent);
    this->RearCoupler->SetupAttachment(RootComponent);
}

void ARailVehicle::ServerRequestTrainInfo_Implementation() {
}
bool ARailVehicle::ServerRequestTrainInfo_Validate() {
    return true;
}

void ARailVehicle::ServerRailMoveDual_Implementation(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector_NetQuantize10 InAccel, uint8 NewFlags, uint8 ClientRoll, uint32 View, ARailwayTrack* ClientTrack, bool bClientTrackIsFront, float PackedClientDistance, uint8 ServerMovementMode) {
}
bool ARailVehicle::ServerRailMoveDual_Validate(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector_NetQuantize10 InAccel, uint8 NewFlags, uint8 ClientRoll, uint32 View, ARailwayTrack* ClientTrack, bool bClientTrackIsFront, float PackedClientDistance, uint8 ServerMovementMode) {
    return true;
}

void ARailVehicle::ServerRailMove_Implementation(float Timestamp, FVector_NetQuantize10 InAccel, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, ARailwayTrack* ClientTrack, bool bClientTrackIsFront, float PackedClientDistance, uint8 ClientMovementMode) {
}
bool ARailVehicle::ServerRailMove_Validate(float Timestamp, FVector_NetQuantize10 InAccel, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, ARailwayTrack* ClientTrack, bool bClientTrackIsFront, float PackedClientDistance, uint8 ClientMovementMode) {
    return true;
}

void ARailVehicle::OnRep_RailwayMovement() {
}

void ARailVehicle::ClientUpdateTrainInfo_Implementation(const TArray<ARailVehicle*>& RailVehicles) {
}

void ARailVehicle::ClientRailAdjustPosition_Implementation(float Timestamp, uint8 ServerMovementMode, const TArray<FRepRailwayMovement>& NewReplicatedMovement) {
}

void ARailVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARailVehicle, RepTrainMovement);
}


