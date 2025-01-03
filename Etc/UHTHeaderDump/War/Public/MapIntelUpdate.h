#pragma once
#include "CoreMinimal.h"
#include "MapIntelUpdate.generated.h"

USTRUCT(BlueprintType)
struct FMapIntelUpdate {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 MapId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int64> PackedColonialIntelItems;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int64> PackedWardenIntelItems;
    
    WAR_API FMapIntelUpdate();
};

