#pragma once
#include "CoreMinimal.h"
#include "EFactionId.h"
#include "UObjectHandle.h"
#include "MapPostRequest.generated.h"

USTRUCT(BlueprintType)
struct FMapPostRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MapPostID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 OriginMapID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFactionId RequesterFactionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RequesterOnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUObjectHandle Requester;
    
    WAR_API FMapPostRequest();
};

