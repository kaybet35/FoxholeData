#pragma once
#include "CoreMinimal.h"
#include "MountComponent.h"
#include "TrainPassengerMountComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UTrainPassengerMountComponent : public UMountComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowItemSubmission;
    
public:
    UTrainPassengerMountComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSubmitItems(AActor* TargetActor);
    
};

