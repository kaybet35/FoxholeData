#pragma once
#include "CoreMinimal.h"
#include "FortBuildSite.h"
#include "AmmoRoomBuildSite.generated.h"

class UGenericStockpileComponent;

UCLASS(Blueprintable)
class WAR_API AAmmoRoomBuildSite : public AFortBuildSite {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* GenericStockpileComponent;
    
    AAmmoRoomBuildSite(const FObjectInitializer& ObjectInitializer);

};

