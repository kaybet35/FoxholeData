#pragma once
#include "CoreMinimal.h"
#include "EPermissionLevel.generated.h"

UENUM(BlueprintType)
enum class EPermissionLevel : uint8 {
    None,
    Mod,
    Admin,
};

