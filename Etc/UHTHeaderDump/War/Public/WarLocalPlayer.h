#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LocalPlayer -FallbackName=LocalPlayer
#include "WarLocalPlayer.generated.h"

class UPlayerSaveGame;

UCLASS(Blueprintable, NonTransient)
class WAR_API UWarLocalPlayer : public ULocalPlayer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerSaveGame* PlayerSaveGame;
    
public:
    UWarLocalPlayer();

};

