#pragma once
#include "CoreMinimal.h"
#include "EFactionId.h"
#include "MapPostQueryData.h"
#include "UObjectHandle.h"
#include "MapPostResponse.generated.h"

USTRUCT(BlueprintType)
struct FMapPostResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapPostQueryData QueryData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 OriginMapID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFactionId RequesterFactionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RequesterOnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUObjectHandle Requester;
    
    WAR_API FMapPostResponse();
};

