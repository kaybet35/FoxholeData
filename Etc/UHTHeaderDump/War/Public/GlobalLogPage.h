#pragma once
#include "CoreMinimal.h"
#include "GlobalLogEntry.h"
#include "GlobalLogPage.generated.h"

USTRUCT(BlueprintType)
struct FGlobalLogPage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGlobalLogEntry> Entries;
    
    WAR_API FGlobalLogPage();
};

