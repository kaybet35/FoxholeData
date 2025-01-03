#pragma once
#include "CoreMinimal.h"
#include "ERegimentQueryType.h"
#include "UObjectHandle.h"
#include "CheatGetRegimentInfoRequest.generated.h"

USTRUCT(BlueprintType)
struct FCheatGetRegimentInfoRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUObjectHandle Admin;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ERegimentQueryType QueryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString QueryValue;
    
    WAR_API FCheatGetRegimentInfoRequest();
};

