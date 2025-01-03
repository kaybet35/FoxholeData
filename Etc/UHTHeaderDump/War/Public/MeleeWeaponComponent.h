#pragma once
#include "CoreMinimal.h"
#include "ActivityStateChange.h"
#include "HitNotify.h"
#include "ItemComponent.h"
#include "Templates/SubclassOf.h"
#include "MeleeWeaponComponent.generated.h"

class AImpactEffect;
class USoundCue;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UMeleeWeaponComponent : public UItemComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeUpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QuickClickTime;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsBlocking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsSustainingCharge;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsEquipped, meta=(AllowPrivateAccess=true))
    bool bIsEquipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* QuickAttackSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* LongAttackSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ChargedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AImpactEffect> DefaultImpactEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AImpactEffect> ChargedImpactEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AImpactEffect> BlockedImpactEffectClass;
    
public:
    UMeleeWeaponComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStopInvoke();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStopCharging();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartInvoke();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartCharging(FActivityStateChange ActivityStateChange);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSimulateQuickAttack(FActivityStateChange ActivityStateChange);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSimulateLongAttack(FActivityStateChange ActivityStateChange);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetIsBlocking(const bool bInIsblocking);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsEquipped();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastSpawnImpactEffects(FHitNotify SimulatedHitNotify, const bool bWasBlocked, const bool bWasCharged);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetIsBlocking(const bool bInIsblocking);
    
};

