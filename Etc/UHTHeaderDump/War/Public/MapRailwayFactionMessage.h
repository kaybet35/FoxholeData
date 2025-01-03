#pragma once
#include "CoreMinimal.h"
#include "MapRailwayLine.h"
#include "MapRailwayFactionMessage.generated.h"

USTRUCT(BlueprintType)
struct FMapRailwayFactionMessage {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 FactionId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 MapId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapRailwayLine> Lines;
    
    WAR_API FMapRailwayFactionMessage();
};

