#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ActivityStateChange.h"
#include "CharacterInvokeInfo.h"
#include "MultiAmmoVehicleMountComponent.h"
#include "TankGunnerMountComponent.generated.h"

class UParticleSystem;
class USoundCue;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UTankGunnerMountComponent : public UMultiAmmoVehicleMountComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ShotSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* MuzzleFlashPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePerBarrelFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AimOffsetEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimOffsetStartRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimRightOffsetAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimDistanceOffsetAmount;
    
public:
    UTankGunnerMountComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerFireShell(FActivityStateChange ActivityStateChange, const FCharacterInvokeInfo InvokeInfo);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayFiringFX();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayDebugTrace(FVector TraceStart, FVector TraceEnd, FVector HitLocation, float HitAngle, FVector HitNormal, float DamageInnerRadius, float DamageOuterRadius);
    
};

