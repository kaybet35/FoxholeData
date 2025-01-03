#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "CursorWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class WAR_API UCursorWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UCursorWidget();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateBrush GetCursorBrush() const;
    
};

