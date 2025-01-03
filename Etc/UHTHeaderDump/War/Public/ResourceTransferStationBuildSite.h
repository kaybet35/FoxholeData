#pragma once
#include "CoreMinimal.h"
#include "StructureBuildSite.h"
#include "ResourceTransferStationBuildSite.generated.h"

class UGenericStockpileComponent;

UCLASS(Blueprintable)
class WAR_API AResourceTransferStationBuildSite : public AStructureBuildSite {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* GenericStockpileComponent;
    
public:
    AResourceTransferStationBuildSite(const FObjectInitializer& ObjectInitializer);

};

