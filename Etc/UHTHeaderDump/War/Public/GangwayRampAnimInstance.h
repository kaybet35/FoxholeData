#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "ERampState.h"
#include "GangwayRampAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class WAR_API UGangwayRampAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERampState RampState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RampAngle;
    
    UGangwayRampAnimInstance();

};

