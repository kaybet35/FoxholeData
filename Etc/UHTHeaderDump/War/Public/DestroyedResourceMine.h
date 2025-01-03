#pragma once
#include "CoreMinimal.h"
#include "DestroyedStructure.h"
#include "DestroyedResourceMine.generated.h"

class UGenericStockpileComponent;

UCLASS(Blueprintable)
class WAR_API ADestroyedResourceMine : public ADestroyedStructure {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* GenericStockpileComponent;
    
public:
    ADestroyedResourceMine(const FObjectInitializer& ObjectInitializer);

};

