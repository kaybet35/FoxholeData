#pragma once
#include "CoreMinimal.h"
#include "ECopyType.generated.h"

UENUM(BlueprintType)
enum class ECopyType : uint8 {
    MemCopy,
    BoolProperty,
    StructProperty,
    ObjectProperty,
};

