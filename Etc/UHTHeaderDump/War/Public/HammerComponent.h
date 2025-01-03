#pragma once
#include "CoreMinimal.h"
#include "GatherResult.h"
#include "TaskItemComponent.h"
#include "Templates/SubclassOf.h"
#include "HammerComponent.generated.h"

class AImpactEffect;
class AResource;
class UDamageType;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UHammerComponent : public UTaskItemComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AImpactEffect> ImpactEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HammerHeadSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBuild;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResourceLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GatherXPMultiplier;
    
public:
    UHammerComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayImpactFX();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastOnGather(AResource* Resource, TSubclassOf<AImpactEffect> ImpactEffect, const FGatherResult& GatherResult);
    
};

