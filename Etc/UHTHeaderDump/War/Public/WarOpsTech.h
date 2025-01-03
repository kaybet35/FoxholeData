#pragma once
#include "CoreMinimal.h"
#include "ETechID.h"
#include "WarOpsTech.generated.h"

USTRUCT(BlueprintType)
struct FWarOpsTech {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ETechID TechID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CodeNames;
    
    WAR_API FWarOpsTech();
};

