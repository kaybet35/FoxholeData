#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HUD -FallbackName=HUD
#include "WarBaseHUD.generated.h"

UCLASS(Blueprintable, NonTransient)
class WAR_API AWarBaseHUD : public AHUD {
    GENERATED_BODY()
public:
    AWarBaseHUD(const FObjectInitializer& ObjectInitializer);

};

