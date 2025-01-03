#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetManager -FallbackName=AssetManager
#include "WarAssetManager.generated.h"

UCLASS(Blueprintable)
class WAR_API UWarAssetManager : public UAssetManager {
    GENERATED_BODY()
public:
    UWarAssetManager();

};

