#pragma once
#include "CoreMinimal.h"
#include "StockpileAccessEvent.h"
#include "StockpileEvents.generated.h"

USTRUCT(BlueprintType)
struct FStockpileEvents {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FStockpileAccessEvent> ItemEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FStockpileAccessEvent> VehicleEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FStockpileAccessEvent> StructureEvents;
    
    WAR_API FStockpileEvents();
};

