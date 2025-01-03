#pragma once
#include "CoreMinimal.h"
#include "ConversionItem.generated.h"

USTRUCT(BlueprintType)
struct FConversionItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Limit;
    
    WAR_API FConversionItem();
};

