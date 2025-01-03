#pragma once
#include "CoreMinimal.h"
#include "BuildableStructure.h"
#include "DeployedStructure.generated.h"

UCLASS(Blueprintable)
class WAR_API ADeployedStructure : public ABuildableStructure {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 TeamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableFriendlyFireTrackingOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> IgnoreDamageFromStructures;
    
public:
    ADeployedStructure(const FObjectInitializer& ObjectInitializer);

};

