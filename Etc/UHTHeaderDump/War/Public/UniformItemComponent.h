#pragma once
#include "CoreMinimal.h"
#include "EUniformType.h"
#include "ItemComponent.h"
#include "UniformItemComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UUniformItemComponent : public UItemComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UniformType, meta=(AllowPrivateAccess=true))
    EUniformType UniformType;
    
public:
    UUniformItemComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_UniformType();
    
};

