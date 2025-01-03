#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ActivityStateChange.h"
#include "LargeItemComponent.h"
#include "Templates/SubclassOf.h"
#include "WaterMineItemComponent.generated.h"

class AWaterMine;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UWaterMineItemComponent : public ULargeItemComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWaterMine> WaterMineClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetonationDepthToggleIncrement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDeploymentDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDeploymentDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistanceBetweenMines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDeploymentRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeployDuration;
    
public:
    UWaterMineItemComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartInvoke(FActivityStateChange ActivityStateChange, const FVector MouseTraceStart, const FVector MouseTraceEnd, const float InDetonationDepth);
    
};

