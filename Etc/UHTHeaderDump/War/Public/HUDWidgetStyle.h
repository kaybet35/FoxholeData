#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateWidgetStyleContainerBase -FallbackName=SlateWidgetStyleContainerBase
#include "HUDStyle.h"
#include "HUDWidgetStyle.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UHUDWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHUDStyle WidgetStyle;
    
    UHUDWidgetStyle();

};

