#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "EGateState.h"
#include "GateAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class WAR_API UGateAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGateState GateState;
    
    UGateAnimInstance();

};

