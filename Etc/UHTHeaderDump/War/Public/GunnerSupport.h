#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "GunnerSupport.generated.h"

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UGunnerSupport : public UInterface {
    GENERATED_BODY()
};

class IGunnerSupport : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void UpdateGunnerYawAndPitch(int32 GunnerIndex, FVector2D YawAndPitch) PURE_VIRTUAL(UpdateGunnerYawAndPitch,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetStashedAmmo(int32 GunnerIndex, int32 AmmoAmount, FName AmmoName) PURE_VIRTUAL(SetStashedAmmo,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetIsFiring(int32 GunnerIndex, bool IsFiring) PURE_VIRTUAL(SetIsFiring,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetGunnerWorking(int32 GunnerIndex, bool IsWorking) PURE_VIRTUAL(SetGunnerWorking,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsGunnerWorking(int32 GunnerIndex) const PURE_VIRTUAL(IsGunnerWorking, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsGunnerDeployed(int32 GunnerIndex, bool bTestFullDeploy) const PURE_VIRTUAL(IsGunnerDeployed, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsFiring(int32 GunnerIndex) const PURE_VIRTUAL(IsFiring, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual float GetTrackingSpeedModifier(int32 GunnerIndex) const PURE_VIRTUAL(GetTrackingSpeedModifier, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual FName GetStashedAmmoType(int32 GunnerIndex) const PURE_VIRTUAL(GetStashedAmmoType, return NAME_None;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 GetStashedAmmo(int32 GunnerIndex) const PURE_VIRTUAL(GetStashedAmmo, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 GetNumMuzzleSockets(int32 GunnerIndex) const PURE_VIRTUAL(GetNumMuzzleSockets, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual FTransform GetMuzzleTransformFromIndex(int32 GunnerIndex, int32 MuzzleIndex) const PURE_VIRTUAL(GetMuzzleTransformFromIndex, return FTransform{};);
    
    UFUNCTION(BlueprintCallable)
    virtual FName GetMuzzleSocketName(int32 GunnerIndex, const int32 MuzzleIndex) const PURE_VIRTUAL(GetMuzzleSocketName, return NAME_None;);
    
    UFUNCTION(BlueprintCallable)
    virtual FVector GetLineOfSightLocation(int32 GunnerIndex, int32 MuzzleIndex) const PURE_VIRTUAL(GetLineOfSightLocation, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    virtual FVector2D GetGunnerYawAndPitch(int32 GunnerIndex) const PURE_VIRTUAL(GetGunnerYawAndPitch, return FVector2D{};);
    
    UFUNCTION(BlueprintCallable)
    virtual bool CanRotate(int32 GunnerIndex) const PURE_VIRTUAL(CanRotate, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool CanFire(int32 GunnerIndex) const PURE_VIRTUAL(CanFire, return false;);
    
};

