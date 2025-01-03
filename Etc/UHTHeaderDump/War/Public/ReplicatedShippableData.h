#pragma once
#include "CoreMinimal.h"
#include "StockpileEntry.h"
#include "ReplicatedShippableData.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedShippableData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Payload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AltPayload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Temperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStockpileEntry> Items;
    
    WAR_API FReplicatedShippableData();
};

