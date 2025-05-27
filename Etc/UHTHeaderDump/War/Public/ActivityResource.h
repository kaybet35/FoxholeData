#pragma once
#include "CoreMinimal.h"
#include "ActivityResource.generated.h"

USTRUCT(BlueprintType)
struct FActivityResource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmountC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmountW;
    
    WAR_API FActivityResource();
};

