#pragma once
#include "CoreMinimal.h"
#include "DeleteMapPostRequest.generated.h"

USTRUCT(BlueprintType)
struct FDeleteMapPostRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OriginalPosterOnlineId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RequesterOnlineID;
    
    WAR_API FDeleteMapPostRequest();
};

