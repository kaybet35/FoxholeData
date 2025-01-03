#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateWidgetStyleContainerBase -FallbackName=SlateWidgetStyleContainerBase
#include "MapStyle.h"
#include "MapWidgetStyle.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMapWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapStyle WidgetStyle;
    
    UMapWidgetStyle();

};

