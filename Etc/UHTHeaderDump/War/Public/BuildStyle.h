#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "BuildStyle.generated.h"

USTRUCT(BlueprintType)
struct WAR_API FBuildStyle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Categories[8];
    
public:
    FBuildStyle();
};

