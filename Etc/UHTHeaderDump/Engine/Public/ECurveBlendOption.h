#pragma once
#include "CoreMinimal.h"
#include "ECurveBlendOption.generated.h"

UENUM(BlueprintType)
namespace ECurveBlendOption {
    enum Type {
        MaxWeight,
        NormalizeByWeight,
        BlendByWeight,
    };
}

