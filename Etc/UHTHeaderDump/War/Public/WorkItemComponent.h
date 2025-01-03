#pragma once
#include "CoreMinimal.h"
#include "ActivityStateChange.h"
#include "ItemComponent.h"
#include "Templates/SubclassOf.h"
#include "WorkItemComponent.generated.h"

class AActor;
class AImpactEffect;
class USceneComponent;
class USkeletalMesh;
class USoundCue;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UWorkItemComponent : public UItemComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AImpactEffect> ImpactEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* WorkSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QueryOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsEquipped, meta=(AllowPrivateAccess=true))
    bool bIsEquipped;
    
public:
    UWorkItemComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPerformWork(AActor* InTargetActor, USceneComponent* InTargetActorComponent, FActivityStateChange ActivityStateChange);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsEquipped();
    
};

