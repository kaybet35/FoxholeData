#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "WatchTowerAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class WAR_API UWatchTowerAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ViewDirection;
    
public:
    UWatchTowerAnimInstance();

};

