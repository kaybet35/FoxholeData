#pragma once
#include "CoreMinimal.h"
#include "StructureBuildSite.h"
#include "ResourceMineBuildSite.generated.h"

class UGenericStockpileComponent;

UCLASS(Blueprintable)
class WAR_API AResourceMineBuildSite : public AStructureBuildSite {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* GenericStockpileComponent;
    
public:
    AResourceMineBuildSite(const FObjectInitializer& ObjectInitializer);

};

