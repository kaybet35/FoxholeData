#pragma once
#include "CoreMinimal.h"
#include "UserComponent.h"
#include "PipelineUserComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UPipelineUserComponent : public UUserComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CodeName, meta=(AllowPrivateAccess=true))
    FName CodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Amount, meta=(AllowPrivateAccess=true))
    float Amount;
    
public:
    UPipelineUserComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetLiquidType(const FName DesiredCodeName);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CodeName();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Amount();
    
};

