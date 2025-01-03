#pragma once
#include "CoreMinimal.h"
#include "DestroyedTeamStructure.h"
#include "DestroyedAssemblyStation.generated.h"

class UGenericStockpileComponent;

UCLASS(Blueprintable)
class WAR_API ADestroyedAssemblyStation : public ADestroyedTeamStructure {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* GenericStockpileComponent;
    
public:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint32 ModificationMask;
    
    ADestroyedAssemblyStation(const FObjectInitializer& ObjectInitializer);

};

