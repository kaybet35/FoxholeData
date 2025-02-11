#pragma once
#include "CoreMinimal.h"
#include "MapItemInfo.h"
#include "MapPostItemEntry.h"
#include "MapPostDetails.generated.h"

USTRUCT(BlueprintType)
struct FMapPostDetails {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Flags;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapPostItemEntry> SummedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapItemInfo> MapItemInfos;
    
    WAR_API FMapPostDetails();
};

