#pragma once
#include "CoreMinimal.h"
#include "FactoryQueue.h"
#include "UserComponent.h"
#include "SpecializedFactoryUserComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API USpecializedFactoryUserComponent : public UUserComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FFactoryQueue> Queues;
    
    USpecializedFactoryUserComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

