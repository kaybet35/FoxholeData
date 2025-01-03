#pragma once
#include "CoreMinimal.h"
#include "SquadInfo.h"
#include "GetSquadInfosResponse.generated.h"

USTRUCT(BlueprintType)
struct FGetSquadInfosResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSquadInfo> SquadInfos;
    
    WAR_API FGetSquadInfosResponse();
};

