#pragma once
#include "CoreMinimal.h"
#include "MapRailwayMessage.h"
#include "MapRailwayResponse.generated.h"

USTRUCT(BlueprintType)
struct FMapRailwayResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapRailwayMessage> Messages;
    
    WAR_API FMapRailwayResponse();
};

