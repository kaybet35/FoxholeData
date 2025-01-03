#pragma once
#include "CoreMinimal.h"
#include "EnvironmentModificationKey.generated.h"

USTRUCT(BlueprintType)
struct FEnvironmentModificationKey {
    GENERATED_BODY()
public:
    WAR_API FEnvironmentModificationKey();
};
FORCEINLINE uint32 GetTypeHash(const FEnvironmentModificationKey) { return 0; }

