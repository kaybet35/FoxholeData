#pragma once
#include "CoreMinimal.h"
#include "ActivityStateChange.h"
#include "ItemComponent.h"
#include "BandagesComponent.generated.h"

class USkeletalMesh;
class USoundCue;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UBandagesComponent : public UItemComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* BandagesMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* BanadagesSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsEquipped, meta=(AllowPrivateAccess=true))
    bool bIsEquipped;
    
public:
    UBandagesComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUseBandages(FActivityStateChange ActivityStateChange);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsEquipped();
    
};

