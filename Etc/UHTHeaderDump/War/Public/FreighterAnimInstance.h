#pragma once
#include "CoreMinimal.h"
#include "EFreighterState.h"
#include "SimVehicleAnimInstance.h"
#include "FreighterAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class WAR_API UFreighterAnimInstance : public USimVehicleAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFreighterState FreighterState;
    
    UFreighterAnimInstance();

};

