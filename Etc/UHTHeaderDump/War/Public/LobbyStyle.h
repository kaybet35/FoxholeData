#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ButtonStyle -FallbackName=ButtonStyle
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateColor -FallbackName=SlateColor
#include "LobbyStyle.generated.h"

USTRUCT(BlueprintType)
struct WAR_API FLobbyStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush ColonialImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush WardenImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor TitleTextColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle EditButton;
    
    FLobbyStyle();
};

