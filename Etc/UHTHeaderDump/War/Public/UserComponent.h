#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "UserComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UUserComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AssociatedActor, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> AssociatedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, ReplicatedUsing=OnRep_AssociatedComponent, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UActorComponent> AssociatedComponent;
    
public:
    UUserComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_AssociatedComponent();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AssociatedActor();
    
};

