#pragma once
#include "CoreMinimal.h"
#include "DynamicTierInfo.h"
#include "TunnelNode.h"
#include "GarrisonHouse.generated.h"

class UAITurretsControllerComponent;

UCLASS(Blueprintable)
class WAR_API AGarrisonHouse : public ATunnelNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToStarvation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynamicTierInfo DynamicTierInfo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAITurretsControllerComponent* AITurretsController;
    
public:
    AGarrisonHouse(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNeutralHouse() const;
    
};

