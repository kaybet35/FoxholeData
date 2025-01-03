#pragma once
#include "CoreMinimal.h"
#include "DestroyedTeamStructure.h"
#include "DestroyedHospital.generated.h"

class UGenericStockpileComponent;

UCLASS(Blueprintable)
class WAR_API ADestroyedHospital : public ADestroyedTeamStructure {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint32 LastSpawnPointID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* GenericStockpileComponent;
    
public:
    ADestroyedHospital(const FObjectInitializer& ObjectInitializer);

};

