#pragma once
#include "CoreMinimal.h"
#include "WeatherStationIDValues.h"
#include "WeatherStationGlobalState.generated.h"

USTRUCT(BlueprintType)
struct FWeatherStationGlobalState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeatherStationIDValues GlobalID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeatherStationIDValues ConnectionTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    WAR_API FWeatherStationGlobalState();
};

