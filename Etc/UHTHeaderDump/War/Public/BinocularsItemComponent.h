#pragma once
#include "CoreMinimal.h"
#include "ActivityStateChange.h"
#include "ItemComponent.h"
#include "BinocularsItemComponent.generated.h"

class UCurveFloat;
class USkeletalMesh;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UBinocularsItemComponent : public UItemComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CameraArmLengthCurve;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsEquipped, meta=(AllowPrivateAccess=true))
    bool bIsEquipped;
    
public:
    UBinocularsItemComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartStopScope(bool IsStartScope, FActivityStateChange ActivityStateChange);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsEquipped();
    
};

