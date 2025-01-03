#pragma once
#include "CoreMinimal.h"
#include "PayloadMeshes.generated.h"

USTRUCT(BlueprintType)
struct FPayloadMeshes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GunnerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseForMuzzleTransform;
    
    WAR_API FPayloadMeshes();
};

