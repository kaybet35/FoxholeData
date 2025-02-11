#pragma once
#include "CoreMinimal.h"
#include "GlobalLogPage.h"
#include "GlobalLogPageResponse.generated.h"

USTRUCT(BlueprintType)
struct FGlobalLogPageResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalLogPage LogPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PageCount;
    
    WAR_API FGlobalLogPageResponse();
};

