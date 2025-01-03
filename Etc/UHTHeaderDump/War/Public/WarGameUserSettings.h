#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameUserSettings -FallbackName=GameUserSettings
#include "WarGameUserSettings.generated.h"

UCLASS(Blueprintable)
class WAR_API UWarGameUserSettings : public UGameUserSettings {
    GENERATED_BODY()
public:
    UWarGameUserSettings();

};

