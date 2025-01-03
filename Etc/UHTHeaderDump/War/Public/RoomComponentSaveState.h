#pragma once
#include "CoreMinimal.h"
#include "RoomComponentSaveState.generated.h"

USTRUCT(BlueprintType)
struct FRoomComponentSaveState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float WaterLevel;
    
    WAR_API FRoomComponentSaveState();
};

