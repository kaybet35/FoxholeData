#pragma once
#include "CoreMinimal.h"
#include "DestroyedTeamStructure.h"
#include "DestroyedBase.generated.h"

class UGenericStockpileComponent;
class UTechTreeComponent;

UCLASS(Blueprintable)
class WAR_API ADestroyedBase : public ADestroyedTeamStructure {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint32 LastSpawnPointID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStaticBase;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* GenericStockpileComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UTechTreeComponent* TechTreeComponent;
    
public:
    ADestroyedBase(const FObjectInitializer& ObjectInitializer);

};

