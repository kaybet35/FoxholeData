#pragma once
#include "CoreMinimal.h"
#include "RefinementOrderInfo.h"
#include "StructureBuildSite.h"
#include "RefineryBuildSite.generated.h"

class UCraneSpawnLocationComponent;
class UGenericStockpileComponent;

UCLASS(Blueprintable)
class WAR_API ARefineryBuildSite : public AStructureBuildSite {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* GenericStockpileComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UCraneSpawnLocationComponent* CraneSpawnLocationComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FString, FRefinementOrderInfo> RefinementOrderMap;
    
    ARefineryBuildSite(const FObjectInitializer& ObjectInitializer);

};

