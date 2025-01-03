#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "EVehicleDeploymentState.h"
#include "SimVehicleAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class WAR_API USimVehicleAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float RotationInPlaceSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float TurnAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WheelRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float InertialRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float InertialPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bIsTopHatchOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDeployed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHitched;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EVehicleDeploymentState DeploymentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastAngularVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float TrackDisabledIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bHasDriver;
    
    USimVehicleAnimInstance();

};

