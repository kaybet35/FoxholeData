#pragma once
#include "CoreMinimal.h"
#include "WeatherStationID.h"
#include "RPCWeatherDisconnectEvent.generated.h"

USTRUCT(BlueprintType)
struct FRPCWeatherDisconnectEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeatherStationID SenderID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TargetLocalID;
    
    WAR_API FRPCWeatherDisconnectEvent();
};

