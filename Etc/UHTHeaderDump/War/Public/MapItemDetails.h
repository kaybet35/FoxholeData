#pragma once
#include "CoreMinimal.h"
#include "MapDetailStockpileInfo.h"
#include "ReserveStockpileMapDetailInfo.h"
#include "MapItemDetails.generated.h"

USTRUCT(BlueprintType)
struct FMapItemDetails {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Flags;
    
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 DetailValue;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 AltDetailValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapDetailStockpileInfo StockpileInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReserveStockpileMapDetailInfo> ReserveStockpileInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Values;
    
    WAR_API FMapItemDetails();
};

