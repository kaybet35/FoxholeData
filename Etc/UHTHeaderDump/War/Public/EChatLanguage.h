#pragma once
#include "CoreMinimal.h"
#include "EChatLanguage.generated.h"

UENUM(BlueprintType)
enum class EChatLanguage : uint8 {
    English = 1,
    Russian,
    Korean = 4,
    Chinese = 8,
};

