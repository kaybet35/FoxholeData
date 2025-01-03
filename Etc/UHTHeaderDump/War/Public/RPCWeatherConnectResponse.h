#pragma once
#include "CoreMinimal.h"
#include "EWeatherStationResult.h"
#include "WarGridCoordinate.h"
#include "WeatherStationID.h"
#include "RPCWeatherConnectResponse.generated.h"

USTRUCT(BlueprintType)
struct FRPCWeatherConnectResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeatherStationID SenderID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWarGridCoordinate SenderCoordinate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TargetLocalID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeatherStationResult Result;
    
    WAR_API FRPCWeatherConnectResponse();
};

