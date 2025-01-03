#pragma once
#include "CoreMinimal.h"
#include "RWDAdjustment.h"
#include "RWDMove.h"
#include "RWDMoveBase.h"
#include "RWDMoveDual.h"
#include "RWDMoveTrailer.h"
#include "RWDVeryShortAdjustment.h"
#include "RepRWDMovement.h"
#include "SimVehicle.h"
#include "RWDSimVehicle.generated.h"

class ARWDSimVehicle;
class UAudioComponent;
class UCurveFloat;
class UParticleSystem;
class UParticleSystemComponent;
class USoundCue;
class UTowHitchUseComponent;

UCLASS(Blueprintable)
class WAR_API ARWDSimVehicle : public ASimVehicle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RepRWDMovement, meta=(AllowPrivateAccess=true))
    FRepRWDMovement RepRWDMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARWDSimVehicle* Trailer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Tractor, meta=(AllowPrivateAccess=true))
    ARWDSimVehicle* Tractor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* IdleLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DriveLoopPitchCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* RearLeftTireDirtLowSpeedPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* RearLeftTireDirtHighSpeedPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* RearRightTireDirtLowSpeedPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* RearRightTireDirtHighSpeedPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* MainDirtLowSpeedPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* MainDirtHighSpeedPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* SkiddingDirtPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* TireDirtLowSpeedTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TireFXLowSpeedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* TireDirtHighSpeedTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TireFXHighSpeedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* MainDirtLowSpeedTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MainFXLowSpeedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* MainDirtHighSpeedTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MainFXHighSpeedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* SkiddingDirtTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SkiddingFXSpeedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* GearShiftUpSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* GearShiftDownSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTowHitchUseComponent* TowHitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString SavedLinkedTrailerName;
    
    ARWDSimVehicle(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerMoveRwdTowing(const FRWDMove& Move, const FRWDMoveBase& Base, const FRWDMoveTrailer& TrailerMove);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerMoveRwd(const FRWDMove& Move, const FRWDMoveBase& Base);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerMoveNoBaseRwdTowing(const FRWDMove& Move, const FRWDMoveTrailer& TrailerMove);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerMoveNoBaseRwd(const FRWDMove& Move);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerMoveDualRwd(const FRWDMoveDual& Dual, const FRWDMove& Move, const FRWDMoveBase& Base);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerMoveDualNoBaseRwd(const FRWDMoveDual& Dual, const FRWDMove& Move);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Tractor();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RepRWDMovement();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayHitchFX(bool bHitched);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientVeryShortAdjustPositionRwdTowing(float Timestamp, const FRWDVeryShortAdjustment& Adjustment, const FRWDVeryShortAdjustment& TrailerAdjustment);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientVeryShortAdjustPositionRwd(float Timestamp, const FRWDVeryShortAdjustment& Adjustment);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientUpdateTrailer(bool bHasTrailer, ARWDSimVehicle* NewTrailer);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientAdjustPositionRwdTowing(float Timestamp, const FRWDAdjustment& Adjustment, const FRWDAdjustment& TrailerAdjustment, float SteeringAngle);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientAdjustPositionRwd(float Timestamp, const FRWDAdjustment& Adjustment, float SteeringAngle);
    
};

