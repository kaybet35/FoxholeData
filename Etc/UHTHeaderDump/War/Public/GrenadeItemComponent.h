#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ActivityStateChange.h"
#include "CharacterInvokeInfo.h"
#include "ItemComponent.h"
#include "Templates/SubclassOf.h"
#include "ThrowingStabilityInfo.h"
#include "GrenadeItemComponent.generated.h"

class AWarProjectile;
class USoundCue;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UGrenadeItemComponent : public UItemComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWarProjectile> GrenadeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostTossDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimLineThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanCook;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FThrowingStabilityInfo ThrowingStabilityInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* PinPullSound;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsEquipped, meta=(AllowPrivateAccess=true))
    bool bIsEquipped;
    
public:
    UGrenadeItemComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerThrowGrenade(const FCharacterInvokeInfo WeaponInvokeInfo, float SecondsOnFuse, FActivityStateChange ActivityStateChange, const FVector& Target);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerPullPin(FActivityStateChange ActivityStateChange);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerOnFuseExpired(const FCharacterInvokeInfo WeaponInvokeInfo, const FVector& Target);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsEquipped();
    
};

