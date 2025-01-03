#pragma once
#include "CoreMinimal.h"
#include "SpawnPointInfo.h"
#include "PlayerSpawnPointsInfo.generated.h"

USTRUCT(BlueprintType)
struct FPlayerSpawnPointsInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnPointInfo StaticBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnPointInfo ForwardBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnPointInfo MedicalBase;
    
    WAR_API FPlayerSpawnPointsInfo();
};

