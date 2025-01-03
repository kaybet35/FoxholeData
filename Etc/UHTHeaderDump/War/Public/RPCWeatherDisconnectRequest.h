#pragma once
#include "CoreMinimal.h"
#include "EFactionId.h"
#include "WeatherStationID.h"
#include "RPCWeatherDisconnectRequest.generated.h"

USTRUCT(BlueprintType)
struct FRPCWeatherDisconnectRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeatherStationID SenderID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TargetLocalID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFactionId FactionId;
    
    WAR_API FRPCWeatherDisconnectRequest();
};

