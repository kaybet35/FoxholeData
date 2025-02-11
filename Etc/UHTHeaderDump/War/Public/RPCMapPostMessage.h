#pragma once
#include "CoreMinimal.h"
#include "MapPostDetails.h"
#include "UObjectHandle.h"
#include "RPCMapPostMessage.generated.h"

USTRUCT(BlueprintType)
struct FRPCMapPostMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFoundMapPostDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MapPostID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapPostDetails MapPostDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUObjectHandle Requester;
    
    WAR_API FRPCMapPostMessage();
};

