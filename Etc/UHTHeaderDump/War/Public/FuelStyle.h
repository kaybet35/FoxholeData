#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ButtonStyle -FallbackName=ButtonStyle
#include "FuelStyle.generated.h"

USTRUCT(BlueprintType)
struct WAR_API FFuelStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle Button;
    
    FFuelStyle();
};

