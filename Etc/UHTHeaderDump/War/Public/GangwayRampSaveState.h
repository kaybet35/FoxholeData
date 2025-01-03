#pragma once
#include "CoreMinimal.h"
#include "ERampState.h"
#include "GangwayRampSaveState.generated.h"

USTRUCT(BlueprintType)
struct FGangwayRampSaveState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    ERampState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float RampAngle;
    
    WAR_API FGangwayRampSaveState();
};

