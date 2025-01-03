#pragma once
#include "CoreMinimal.h"
#include "DeployedStructure.h"
#include "DeployedTripod.generated.h"

UCLASS(Blueprintable)
class WAR_API ADeployedTripod : public ADeployedStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BaseItemCodeName;
    
    ADeployedTripod(const FObjectInitializer& ObjectInitializer);

};

