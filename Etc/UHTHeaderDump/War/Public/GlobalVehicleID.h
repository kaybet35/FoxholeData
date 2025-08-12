#pragma once
#include "CoreMinimal.h"
#include "EWorldConquestMapId.h"
#include "GlobalVehicleID.generated.h"

USTRUCT(BlueprintType)
struct FGlobalVehicleID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EWorldConquestMapId MapId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    WAR_API FGlobalVehicleID();
};

