#pragma once
#include "CoreMinimal.h"
#include "ActivityStateChange.h"
#include "ItemComponent.h"
#include "Templates/SubclassOf.h"
#include "SoulstoneComponent.generated.h"

class AWarExplosionEffect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API USoulstoneComponent : public UItemComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWarExplosionEffect> TransformExplosionEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsEquipped, meta=(AllowPrivateAccess=true))
    bool bIsEquipped;
    
public:
    USoulstoneComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUseSoulstone(FActivityStateChange ActivityStateChange);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsEquipped();
    
};

