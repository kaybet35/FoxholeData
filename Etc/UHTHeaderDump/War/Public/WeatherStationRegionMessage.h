#pragma once
#include "CoreMinimal.h"
#include "WeatherStationGlobalState.h"
#include "WeatherStationRegionMessage.generated.h"

USTRUCT(BlueprintType)
struct FWeatherStationRegionMessage {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 MapId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeatherStationGlobalState> Entries;
    
    WAR_API FWeatherStationRegionMessage();
};

