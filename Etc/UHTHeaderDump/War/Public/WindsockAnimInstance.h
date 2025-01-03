#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "WindsockAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class WAR_API UWindsockAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WindSpeedNormalized;
    
    UWindsockAnimInstance();

};

