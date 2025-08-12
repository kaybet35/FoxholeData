#pragma once
#include "CoreMinimal.h"
#include "SpoolingHandler.generated.h"

USTRUCT(BlueprintType)
struct FSpoolingHandler {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
public:
    WAR_API FSpoolingHandler();
};

