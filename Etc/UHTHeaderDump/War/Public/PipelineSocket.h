#pragma once
#include "CoreMinimal.h"
#include "EPipeType.h"
#include "PipelineSocket.generated.h"

USTRUCT(BlueprintType)
struct FPipelineSocket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPipeType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Index;
    
    WAR_API FPipelineSocket();
};

