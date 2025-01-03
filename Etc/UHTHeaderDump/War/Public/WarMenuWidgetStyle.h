#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateWidgetStyleContainerBase -FallbackName=SlateWidgetStyleContainerBase
#include "WarMenuStyle.h"
#include "WarMenuWidgetStyle.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UWarMenuWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWarMenuStyle WidgetStyle;
    
    UWarMenuWidgetStyle();

};

