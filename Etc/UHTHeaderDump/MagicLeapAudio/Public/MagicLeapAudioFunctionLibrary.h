#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "MagicLeapAudioJackPluggedDelegateDelegate.h"
#include "MagicLeapAudioJackUnpluggedDelegateDelegate.h"
#include "MagicLeapAudioFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class MAGICLEAPAUDIO_API UMagicLeapAudioFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMagicLeapAudioFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static bool SetOnAudioJackUnpluggedDelegate(const FMagicLeapAudioJackUnpluggedDelegate& ResultDelegate);
    
    UFUNCTION(BlueprintCallable)
    static bool SetOnAudioJackPluggedDelegate(const FMagicLeapAudioJackPluggedDelegate& ResultDelegate);
    
};

