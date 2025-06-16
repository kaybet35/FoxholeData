#include "RWDSimVehicle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent
#include "Net/UnrealNetwork.h"
#include "RWDVehicleMovementComponent.h"

ARWDSimVehicle::ARWDSimVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<URWDVehicleMovementComponent>(TEXT("CharMoveComp"))) {
    this->bUseControllerRotationYaw = false;
    this->Trailer = NULL;
    this->Tractor = NULL;
    this->IdleLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("IdleLoop"));
    this->DriveLoopPitchCurve = NULL;
    this->RearLeftTireDirtLowSpeedPS = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("RearLeftTireDirtLowSpeedPS"));
    this->RearLeftTireDirtHighSpeedPS = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("RearLeftTireDirtHighSpeedPS"));
    this->RearRightTireDirtLowSpeedPS = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("RearRightTireDirtLowSpeedPS"));
    this->RearRightTireDirtHighSpeedPS = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("RearRightTireDirtHighSpeedPS"));
    this->MainDirtLowSpeedPS = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MainDirtLowSpeedPS"));
    this->MainDirtHighSpeedPS = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MainDirtHighSpeedPS"));
    this->SkiddingDirtPS = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SkiddingDirtPS"));
    this->TireFXLowSpeedThreshold = 10.00f;
    this->TireFXHighSpeedThreshold = 15.00f;
    this->MainFXLowSpeedThreshold = 10.00f;
    this->MainFXHighSpeedThreshold = 17.00f;
    this->SkiddingFXSpeedThreshold = 4.00f;
    this->GearShiftUpSoundCue = NULL;
    this->GearShiftDownSoundCue = NULL;
    this->TowHitch = NULL;
    this->SkiddingDirtPS->SetupAttachment(RootComponent);
    this->IdleLoop->SetupAttachment(RootComponent);
    this->RearLeftTireDirtLowSpeedPS->SetupAttachment(RootComponent);
    this->RearLeftTireDirtHighSpeedPS->SetupAttachment(RootComponent);
    this->RearRightTireDirtLowSpeedPS->SetupAttachment(RootComponent);
    this->RearRightTireDirtHighSpeedPS->SetupAttachment(RootComponent);
    this->MainDirtLowSpeedPS->SetupAttachment(RootComponent);
    this->MainDirtHighSpeedPS->SetupAttachment(RootComponent);
}

void ARWDSimVehicle::ServerMoveRwdTowing_Implementation(const FRWDMove& Move, const FRWDMoveBase& Base, const FRWDMoveTrailer& TrailerMove) {
}
bool ARWDSimVehicle::ServerMoveRwdTowing_Validate(const FRWDMove& Move, const FRWDMoveBase& Base, const FRWDMoveTrailer& TrailerMove) {
    return true;
}

void ARWDSimVehicle::ServerMoveRwd_Implementation(const FRWDMove& Move, const FRWDMoveBase& Base) {
}
bool ARWDSimVehicle::ServerMoveRwd_Validate(const FRWDMove& Move, const FRWDMoveBase& Base) {
    return true;
}

void ARWDSimVehicle::ServerMoveNoBaseRwdTowing_Implementation(const FRWDMove& Move, const FRWDMoveTrailer& TrailerMove) {
}
bool ARWDSimVehicle::ServerMoveNoBaseRwdTowing_Validate(const FRWDMove& Move, const FRWDMoveTrailer& TrailerMove) {
    return true;
}

void ARWDSimVehicle::ServerMoveNoBaseRwd_Implementation(const FRWDMove& Move) {
}
bool ARWDSimVehicle::ServerMoveNoBaseRwd_Validate(const FRWDMove& Move) {
    return true;
}

void ARWDSimVehicle::ServerMoveDualRwd_Implementation(const FRWDMoveDual& Dual, const FRWDMove& Move, const FRWDMoveBase& Base) {
}
bool ARWDSimVehicle::ServerMoveDualRwd_Validate(const FRWDMoveDual& Dual, const FRWDMove& Move, const FRWDMoveBase& Base) {
    return true;
}

void ARWDSimVehicle::ServerMoveDualNoBaseRwd_Implementation(const FRWDMoveDual& Dual, const FRWDMove& Move) {
}
bool ARWDSimVehicle::ServerMoveDualNoBaseRwd_Validate(const FRWDMoveDual& Dual, const FRWDMove& Move) {
    return true;
}

void ARWDSimVehicle::OnRep_Tractor() {
}

void ARWDSimVehicle::OnRep_RepRWDMovement() {
}

void ARWDSimVehicle::MulticastPlayHitchFX_Implementation(bool bHitched) {
}

void ARWDSimVehicle::ClientVeryShortAdjustPositionRwdTowing_Implementation(float Timestamp, const FRWDVeryShortAdjustment& Adjustment, const FRWDVeryShortAdjustment& TrailerAdjustment) {
}

void ARWDSimVehicle::ClientVeryShortAdjustPositionRwd_Implementation(float Timestamp, const FRWDVeryShortAdjustment& Adjustment) {
}

void ARWDSimVehicle::ClientUpdateTrailer_Implementation(bool bHasTrailer, ARWDSimVehicle* NewTrailer) {
}

void ARWDSimVehicle::ClientAdjustPositionRwdTowing_Implementation(float Timestamp, const FRWDAdjustment& Adjustment, const FRWDAdjustment& TrailerAdjustment, float SteeringAngle) {
}

void ARWDSimVehicle::ClientAdjustPositionRwd_Implementation(float Timestamp, const FRWDAdjustment& Adjustment, float SteeringAngle) {
}

void ARWDSimVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARWDSimVehicle, RepRWDMovement);
    DOREPLIFETIME(ARWDSimVehicle, Tractor);
}


