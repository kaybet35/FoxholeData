#pragma once
#include "CoreMinimal.h"
#include "BuildableStructure.h"
#include "MaterialPlatform.generated.h"

class UBoxComponent;
class UGenericStockpileComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class WAR_API AMaterialPlatform : public ABuildableStructure {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* GenericStockpileComponent;
    
public:
    AMaterialPlatform(const FObjectInitializer& ObjectInitializer);

};

