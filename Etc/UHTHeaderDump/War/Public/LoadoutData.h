#pragma once
#include "CoreMinimal.h"
#include "LoadoutBackpackItem.h"
#include "LoadoutEquipmentItem.h"
#include "LoadoutData.generated.h"

USTRUCT(BlueprintType)
struct FLoadoutData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LoadoutName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLoadoutEquipmentItem> EquipmentItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLoadoutBackpackItem> BackpackItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NumBackpackSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasUniform: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowPartialAssembly: 1;
    
    WAR_API FLoadoutData();
};

