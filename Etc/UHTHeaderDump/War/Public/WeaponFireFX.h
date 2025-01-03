#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "WeaponFireFX.generated.h"

class UProjectileMovementComponent;
class USphereComponent;

UCLASS(Abstract, Blueprintable)
class WAR_API AWeaponFireFX : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProjectileMovementComponent* MovementComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* CollisionComp;
    
public:
    AWeaponFireFX(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnProjectileStop(const FHitResult& HitResult);
    
};

