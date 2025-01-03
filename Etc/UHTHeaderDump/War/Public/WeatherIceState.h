#pragma once
#include "CoreMinimal.h"
#include "WeatherIceState.generated.h"

USTRUCT(BlueprintType)
struct FWeatherIceState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint16 Health;
    
    WAR_API FWeatherIceState();
};

