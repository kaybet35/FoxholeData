#pragma once
#include "CoreMinimal.h"
#include "Squad.h"
#include "GetSquadsResponse.generated.h"

USTRUCT(BlueprintType)
struct FGetSquadsResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSquad> Squads;
    
    WAR_API FGetSquadsResponse();
};

