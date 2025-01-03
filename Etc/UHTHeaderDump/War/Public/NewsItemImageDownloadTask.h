#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NewsItemInfo.h"
#include "NewsItemImageDownloadTask.generated.h"

class AMainMenuPlayerController;
class UTexture2DDynamic;

UCLASS(Blueprintable)
class UNewsItemImageDownloadTask : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMainMenuPlayerController* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNewsItemInfo NewsItemInfo;
    
    UNewsItemImageDownloadTask();

    UFUNCTION(BlueprintCallable)
    void OnImageDownloadSuccess(UTexture2DDynamic* Texture);
    
    UFUNCTION(BlueprintCallable)
    void OnImageDownloadFailed(UTexture2DDynamic* Texture);
    
};

