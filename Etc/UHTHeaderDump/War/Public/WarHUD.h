#pragma once
#include "CoreMinimal.h"
#include "EHUDMode.h"
#include "WarBaseHUD.h"
#include "WarHUD.generated.h"

class APostProcessVolume;
class UFont;
class UTexture2D;

UCLASS(Blueprintable, NonTransient, Config=Engine)
class WAR_API AWarHUD : public AWarBaseHUD {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHUDMode HudMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APostProcessVolume* LevelPostVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* LocalMapImage;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFont* OtherPlayerNamesFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFont* WarTimerFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFont* ReticleFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFont* MapGridFont;
    
    AWarHUD(const FObjectInitializer& ObjectInitializer);

};

