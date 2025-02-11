#pragma once
#include "CoreMinimal.h"
#include "CreateMapPostRequest.h"
#include "CreateDebugMapPostRequest.generated.h"

USTRUCT(BlueprintType)
struct FCreateDebugMapPostRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreateMapPostRequest Request;
    
    WAR_API FCreateDebugMapPostRequest();
};

