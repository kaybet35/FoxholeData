#pragma once
#include "CoreMinimal.h"
#include "MapRailwayLine.h"
#include "MapRailwayMessage.generated.h"

USTRUCT(BlueprintType)
struct FMapRailwayMessage {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 MapId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapRailwayLine> Lines;
    
    WAR_API FMapRailwayMessage();
};

