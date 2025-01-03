#pragma once
#include "CoreMinimal.h"
#include "NamedParameterRange.h"
#include "WeatherEffectsActorTrigger.h"
#include "WeatherEffects.generated.h"

USTRUCT(BlueprintType)
struct FWeatherEffects {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeatherEffectsActorTrigger> EffectsActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNamedParameterRange MaterialParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntensityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffroadPenalty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxVisibility;
    
    WAR_API FWeatherEffects();
};

