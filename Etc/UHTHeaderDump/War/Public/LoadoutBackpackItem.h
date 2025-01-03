#pragma once
#include "CoreMinimal.h"
#include "LoadoutBackpackItem.generated.h"

USTRUCT(BlueprintType)
struct FLoadoutBackpackItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    WAR_API FLoadoutBackpackItem();
};

