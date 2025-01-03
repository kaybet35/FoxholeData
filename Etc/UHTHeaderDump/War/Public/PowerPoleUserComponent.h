#pragma once
#include "CoreMinimal.h"
#include "UserComponent.h"
#include "PowerPoleUserComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UPowerPoleUserComponent : public UUserComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsDisabled, meta=(AllowPrivateAccess=true))
    bool bIsDisabled;
    
public:
    UPowerPoleUserComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetIsDisabled(const bool bInIsDisabled);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsDisabled();
    
};

