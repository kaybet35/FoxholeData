#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "EmplacedFoundationAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class WAR_API UEmplacedFoundationAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Yaw;
    
    UEmplacedFoundationAnimInstance();

};

