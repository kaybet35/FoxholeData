#pragma once
#include "CoreMinimal.h"
#include "RailSwitchState.generated.h"

USTRUCT(BlueprintType)
struct FRailSwitchState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    WAR_API FRailSwitchState();
};

