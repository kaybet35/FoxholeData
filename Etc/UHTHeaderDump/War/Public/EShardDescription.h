#pragma once
#include "CoreMinimal.h"
#include "EShardDescription.generated.h"

UENUM(BlueprintType)
enum class EShardDescription : uint8 {
    None,
    TestingFeatures,
    LiveRegularPlayers,
    LiveReturningPlayers,
};

