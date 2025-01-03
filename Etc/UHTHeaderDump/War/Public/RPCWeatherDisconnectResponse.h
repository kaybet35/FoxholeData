#pragma once
#include "CoreMinimal.h"
#include "EWeatherStationResult.h"
#include "WeatherStationID.h"
#include "RPCWeatherDisconnectResponse.generated.h"

USTRUCT(BlueprintType)
struct FRPCWeatherDisconnectResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeatherStationID SenderID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TargetLocalID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeatherStationResult Result;
    
    WAR_API FRPCWeatherDisconnectResponse();
};

