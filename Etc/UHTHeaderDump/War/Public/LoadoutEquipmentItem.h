#pragma once
#include "CoreMinimal.h"
#include "EEquipmentSlot.h"
#include "LoadoutEquipmentItem.generated.h"

USTRUCT(BlueprintType)
struct FLoadoutEquipmentItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Quantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEquipmentSlot EquipmentSlot;
    
    WAR_API FLoadoutEquipmentItem();
};

