#pragma once
#include "CoreMinimal.h"
#include "ControlsPageRow.h"
#include "ControlsPage.generated.h"

USTRUCT(BlueprintType)
struct WAR_API FControlsPage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FControlsPageRow> MainColumn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FControlsPageRow> AltColumn;
    
    FControlsPage();
};

