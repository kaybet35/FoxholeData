#pragma once
#include "CoreMinimal.h"
#include "Pipeline.h"
#include "PipelineSilo.generated.h"

UCLASS(Blueprintable)
class WAR_API APipelineSilo : public APipeline {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_VisibleMeshes, meta=(AllowPrivateAccess=true))
    uint8 VisibleMeshes;
    
public:
    APipelineSilo(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_VisibleMeshes();
    
};

