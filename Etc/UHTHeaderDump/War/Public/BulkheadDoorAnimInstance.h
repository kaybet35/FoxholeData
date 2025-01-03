#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "EDynamicState.h"
#include "BulkheadDoorAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class WAR_API UBulkheadDoorAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDynamicState DoorState;
    
    UBulkheadDoorAnimInstance();

};

