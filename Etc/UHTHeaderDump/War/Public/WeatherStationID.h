#pragma once
#include "CoreMinimal.h"
#include "EWorldConquestMapId.h"
#include "WeatherStationID.generated.h"

USTRUCT(BlueprintType)
struct FWeatherStationID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EWorldConquestMapId MapId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 LocalID;
    
    WAR_API FWeatherStationID();
};

