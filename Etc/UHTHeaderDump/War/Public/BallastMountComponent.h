#pragma once
#include "CoreMinimal.h"
#include "EBallastType.h"
#include "MountComponent.h"
#include "BallastMountComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UBallastMountComponent : public UMountComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBallastType BallastType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float TargetFloodPercent;
    
public:
    UBallastMountComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetTargetFloodPercent(float InTargetFloodPercent);
    
};

