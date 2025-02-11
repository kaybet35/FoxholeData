#pragma once
#include "CoreMinimal.h"
#include "ItemSlotFilter.generated.h"

USTRUCT(BlueprintType)
struct FItemSlotFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> ExtraCodeNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StackLimit;
    
    WAR_API FItemSlotFilter();
};

