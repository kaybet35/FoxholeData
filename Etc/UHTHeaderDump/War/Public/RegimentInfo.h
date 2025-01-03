#pragma once
#include "CoreMinimal.h"
#include "RegimentInfo.generated.h"

USTRUCT(BlueprintType)
struct FRegimentInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Tag;
    
    WAR_API FRegimentInfo();
};

