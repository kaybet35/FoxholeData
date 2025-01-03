#pragma once
#include "CoreMinimal.h"
#include "ESpawnPointCategory.h"
#include "ESpawnPointType.h"
#include "SpawnPoint.h"
#include "SpawnPoints.generated.h"

class USpawnPointComponent;

USTRUCT(BlueprintType)
struct FSpawnPoints {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnPointType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnPointCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSpawnPoint SpawnPointID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USpawnPointComponent*> HighPrioritySpawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USpawnPointComponent*> LowPrioritySpawn;
    
    WAR_API FSpawnPoints();
};

