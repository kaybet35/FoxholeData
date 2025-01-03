#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CraterInfo.generated.h"

class ACrater;
class UPhysicalMaterial;

USTRUCT(BlueprintType)
struct FCraterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACrater> Crater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPhysicalMaterial*> BlockingPhysicalMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OuterRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnWeight;
    
    WAR_API FCraterInfo();
};

