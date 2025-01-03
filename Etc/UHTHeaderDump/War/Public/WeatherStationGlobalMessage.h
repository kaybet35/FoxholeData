#pragma once
#include "CoreMinimal.h"
#include "WeatherStationGlobalState.h"
#include "WeatherStationGlobalMessage.generated.h"

USTRUCT(BlueprintType)
struct FWeatherStationGlobalMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeatherStationGlobalState> Entries;
    
    WAR_API FWeatherStationGlobalMessage();
};

