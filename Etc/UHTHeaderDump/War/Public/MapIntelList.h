#pragma once
#include "CoreMinimal.h"
#include "MapIntelList.generated.h"

USTRUCT(BlueprintType)
struct FMapIntelList {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 MapId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int64> PackedIntelItems;
    
    WAR_API FMapIntelList();
};

