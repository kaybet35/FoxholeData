#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "ControlsPageEntryHotkey.h"
#include "ControlsPageEntry.generated.h"

USTRUCT(BlueprintType)
struct WAR_API FControlsPageEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FControlsPageEntryHotkey> Hotkeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush OptionalImage;
    
    FControlsPageEntry();
};

