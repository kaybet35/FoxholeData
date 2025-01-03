#pragma once
#include "CoreMinimal.h"
#include "SquadErrorResponse.generated.h"

USTRUCT(BlueprintType)
struct FSquadErrorResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSquadFull;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTooManySquads;
    
    WAR_API FSquadErrorResponse();
};

