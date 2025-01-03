#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "WeatherIceActorData.generated.h"

USTRUCT(BlueprintType)
struct FWeatherIceActorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WorldLocation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 GridX;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 GridY;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 EnabledFlags[13];
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> WorldLocationsZ;
    
    WAR_API FWeatherIceActorData();
};

