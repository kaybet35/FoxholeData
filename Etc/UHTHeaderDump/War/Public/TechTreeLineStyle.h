#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "TechTreeLineStyle.generated.h"

USTRUCT(BlueprintType)
struct WAR_API FTechTreeLineStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush SolidColour;
    
    FTechTreeLineStyle();
};

