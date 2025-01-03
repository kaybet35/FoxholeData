#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EditableTextBoxStyle -FallbackName=EditableTextBoxStyle
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateColor -FallbackName=SlateColor
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=TextBlockStyle -FallbackName=TextBlockStyle
#include "DialogBoxStyle.generated.h"

USTRUCT(BlueprintType)
struct WAR_API FDialogBoxStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush BackgroundImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBlockStyle MessageTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditableTextBoxStyle TextInputBoxStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBlockStyle ButtonTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor BackgroundFillColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackgroundBlurStrength;
    
    FDialogBoxStyle();
};

