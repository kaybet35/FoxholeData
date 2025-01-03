#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ActivityStateChange.h"
#include "SubmarineMountComponent.h"
#include "Templates/SubclassOf.h"
#include "TorpedoGunnerMountComponent.generated.h"

class AWarProjectile;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UTorpedoGunnerMountComponent : public USubmarineMountComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWarProjectile> ProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RangeIncrement;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int8 Ammo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 RangeIndex;
    
public:
    UTorpedoGunnerMountComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartInvoke(FActivityStateChange ActivityStateChange, FVector2D TargetDirection, float TargetDepth);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCycleRange();
    
};

