#pragma once
#include "CoreMinimal.h"
#include "EInventoryType.generated.h"

UENUM(BlueprintType)
enum class EInventoryType : uint8 {
    Default,
    Player,
    Ambulance,
    Hospital,
    Misc,
};

