#pragma once
#include "CoreMinimal.h"
#include "ControlsPageEntry.h"
#include "ControlsPageRow.generated.h"

USTRUCT(BlueprintType)
struct WAR_API FControlsPageRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FControlsPageEntry> Entries;
    
    FControlsPageRow();
};

