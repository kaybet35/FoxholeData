#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "ListeningAreaStyle.generated.h"

USTRUCT(BlueprintType)
struct FListeningAreaStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush RadiusBrush;
    
    WAR_API FListeningAreaStyle();
};

