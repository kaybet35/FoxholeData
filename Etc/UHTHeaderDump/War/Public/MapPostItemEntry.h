#pragma once
#include "CoreMinimal.h"
#include "MapPostItemEntry.generated.h"

USTRUCT(BlueprintType)
struct FMapPostItemEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    WAR_API FMapPostItemEntry();
};

