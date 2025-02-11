#pragma once
#include "CoreMinimal.h"
#include "GlobalLogPageRequest.generated.h"

USTRUCT(BlueprintType)
struct FGlobalLogPageRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LogPageIndex;
    
    WAR_API FGlobalLogPageRequest();
};

