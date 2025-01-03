#pragma once
#include "CoreMinimal.h"
#include "SpawnPoint.generated.h"

USTRUCT(BlueprintType)
struct FSpawnPoint {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint32 ID;
    
    WAR_API FSpawnPoint();
};

