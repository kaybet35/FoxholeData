#pragma once
#include "CoreMinimal.h"
#include "WeatherIceMeshData.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FWeatherIceMeshData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Mesh;
    
    WAR_API FWeatherIceMeshData();
};

