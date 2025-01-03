#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "GeneralPurposeIcons.generated.h"

USTRUCT(BlueprintType)
struct FGeneralPurposeIcons {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush DownwardTriangle;
    
    WAR_API FGeneralPurposeIcons();
};

