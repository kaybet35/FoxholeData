#pragma once
#include "CoreMinimal.h"
#include "MapItemInfo.generated.h"

USTRUCT(BlueprintType)
struct FMapItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CodeName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 DetailValue;
    
    WAR_API FMapItemInfo();
};

