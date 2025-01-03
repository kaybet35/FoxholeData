#pragma once
#include "CoreMinimal.h"
#include "TripodMountedStructure.h"
#include "DeployedListeningKit.generated.h"

class UListeningAreaComponent;

UCLASS(Blueprintable)
class WAR_API ADeployedListeningKit : public ATripodMountedStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UListeningAreaComponent* ListeningAreaComponent;
    
    ADeployedListeningKit(const FObjectInitializer& ObjectInitializer);

};

