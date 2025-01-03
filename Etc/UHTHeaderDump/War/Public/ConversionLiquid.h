#pragma once
#include "CoreMinimal.h"
#include "ConversionLiquid.generated.h"

USTRUCT(BlueprintType)
struct FConversionLiquid {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Quantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Limit;
    
    WAR_API FConversionLiquid();
};

