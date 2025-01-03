#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateWidgetStyleContainerBase -FallbackName=SlateWidgetStyleContainerBase
#include "BaseStyle.h"
#include "BaseWidgetStyle.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UBaseWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseStyle WidgetStyle;
    
    UBaseWidgetStyle();

};

