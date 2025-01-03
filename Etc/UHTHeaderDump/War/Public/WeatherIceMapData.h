#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "Templates/SubclassOf.h"
#include "WeatherIceActorData.h"
#include "WeatherIceMapData.generated.h"

class AWeatherIceActor;

UCLASS(Blueprintable)
class WAR_API AWeatherIceMapData : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWeatherIceActor> IceActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeatherIceActorData> AllIceActorData;
    
    AWeatherIceMapData(const FObjectInitializer& ObjectInitializer);

};

