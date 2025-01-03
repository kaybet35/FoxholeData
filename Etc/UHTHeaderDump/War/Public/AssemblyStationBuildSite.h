#pragma once
#include "CoreMinimal.h"
#include "StructureBuildSite.h"
#include "AssemblyStationBuildSite.generated.h"

class UGenericStockpileComponent;

UCLASS(Blueprintable)
class WAR_API AAssemblyStationBuildSite : public AStructureBuildSite {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* GenericStockpileComponent;
    
public:
    AAssemblyStationBuildSite(const FObjectInitializer& ObjectInitializer);

};

