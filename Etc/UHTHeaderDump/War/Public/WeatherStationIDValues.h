#pragma once
#include "CoreMinimal.h"
#include "WeatherStationIDValues.generated.h"

USTRUCT(BlueprintType)
struct FWeatherStationIDValues {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 MapId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 LocalID;
    
    WAR_API FWeatherStationIDValues();
};

