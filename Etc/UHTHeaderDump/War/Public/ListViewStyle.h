#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=HeaderRowStyle -FallbackName=HeaderRowStyle
#include "ListViewStyle.generated.h"

USTRUCT(BlueprintType)
struct WAR_API FListViewStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHeaderRowStyle ListHeaderRowStyle;
    
    FListViewStyle();
};

