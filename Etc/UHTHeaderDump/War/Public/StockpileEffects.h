#pragma once
#include "CoreMinimal.h"
#include "StockpileEffects.generated.h"

USTRUCT(BlueprintType)
struct FStockpileEffects {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DebuffPercent;
    
    WAR_API FStockpileEffects();
};

