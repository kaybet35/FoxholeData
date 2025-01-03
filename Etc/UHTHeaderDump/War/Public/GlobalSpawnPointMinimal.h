#pragma once
#include "CoreMinimal.h"
#include "EWorldConquestMapId.h"
#include "GlobalSpawnPointMinimal.generated.h"

USTRUCT(BlueprintType)
struct FGlobalSpawnPointMinimal {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldConquestMapId MapId;
    
    WAR_API FGlobalSpawnPointMinimal();
};

