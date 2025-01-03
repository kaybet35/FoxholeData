#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "WeatherStationBaseAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class WAR_API UWeatherStationBaseAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
public:
    UWeatherStationBaseAnimInstance();

};

