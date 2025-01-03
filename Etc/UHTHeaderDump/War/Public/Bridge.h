#pragma once
#include "CoreMinimal.h"
#include "BuildableStructure.h"
#include "Bridge.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class WAR_API ABridge : public ABuildableStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BelowBlockingVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* AboveBlockingArea;
    
    ABridge(const FObjectInitializer& ObjectInitializer);

};

