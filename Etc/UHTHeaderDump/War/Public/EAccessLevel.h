#pragma once
#include "CoreMinimal.h"
#include "EAccessLevel.generated.h"

UENUM(BlueprintType)
enum class EAccessLevel : uint8 {
    Personal,
    Public,
    Count,
};

