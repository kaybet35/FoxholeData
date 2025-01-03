#pragma once
#include "CoreMinimal.h"
#include "EAnchorState.h"
#include "EDockedState.h"
#include "SimVehicleGunnerSupportAnimInstance.h"
#include "LargeShipAnimInstance.generated.h"

class UAnimNotify;

UCLASS(Blueprintable, NonTransient)
class WAR_API ULargeShipAnimInstance : public USimVehicleGunnerSupportAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnchorState AnchorState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDockedState DockedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float RampExtension;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float RampAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bIsRampOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float AltGunner05Yaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float AltGunner05Pitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float AltGunner06Yaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float AltGunner06Pitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float AltGunner07Yaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float AltGunner07Pitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float AltGunner08Yaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float AltGunner08Pitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float AltGunner09Yaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float AltGunner09Pitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float AltGunner10Yaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float AltGunner10Pitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float AltGunner11Yaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float AltGunner11Pitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float AltGunner12Yaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float AltGunner12Pitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bIsAlt05Firing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bIsAlt06Firing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bIsAlt07Firing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bIsAlt08Firing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bIsAlt09Firing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bIsAlt10Firing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bIsAlt11Firing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bIsAlt12Firing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bIsAltGunner05Reloading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bIsAltGunner06Reloading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bIsAltGunner07Reloading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bIsAltGunner08Reloading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bIsAltGunner09Reloading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bIsAltGunner10Reloading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bIsAltGunner11Reloading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bIsAltGunner12Reloading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bIsAltGunner05Working;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bIsAltGunner06Working;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bIsAltGunner07Working;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bIsAltGunner08Working;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bIsAltGunner09Working;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bIsAltGunner10Working;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bIsAltGunner11Working;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bIsAltGunner12Working;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float NormalizedRPM0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float NormalizedRPM1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bIsThrustReversed0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bIsThrustReversed1;
    
    ULargeShipAnimInstance();

    UFUNCTION(BlueprintCallable)
    void AnimNotify_OnAlt12FiringOver(const UAnimNotify* Notify);
    
    UFUNCTION(BlueprintCallable)
    void AnimNotify_OnAlt11FiringOver(const UAnimNotify* Notify);
    
    UFUNCTION(BlueprintCallable)
    void AnimNotify_OnAlt10FiringOver(const UAnimNotify* Notify);
    
    UFUNCTION(BlueprintCallable)
    void AnimNotify_OnAlt09FiringOver(const UAnimNotify* Notify);
    
    UFUNCTION(BlueprintCallable)
    void AnimNotify_OnAlt08FiringOver(const UAnimNotify* Notify);
    
    UFUNCTION(BlueprintCallable)
    void AnimNotify_OnAlt07FiringOver(const UAnimNotify* Notify);
    
    UFUNCTION(BlueprintCallable)
    void AnimNotify_OnAlt06FiringOver(const UAnimNotify* Notify);
    
    UFUNCTION(BlueprintCallable)
    void AnimNotify_OnAlt05FiringOver(const UAnimNotify* Notify);
    
};

