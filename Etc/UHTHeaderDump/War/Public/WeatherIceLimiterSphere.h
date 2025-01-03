#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
#include "EWeatherIceLimiterType.h"
#include "WeatherIceLimiterSphere.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UWeatherIceLimiterSphere : public USphereComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeatherIceLimiterType Type;
    
    UWeatherIceLimiterSphere(const FObjectInitializer& ObjectInitializer);

};

