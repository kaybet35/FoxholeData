#pragma once
#include "CoreMinimal.h"
#include "ActivityStateChange.h"
#include "MountComponent.h"
#include "LongRangeArtilleryMountComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API ULongRangeArtilleryMountComponent : public UMountComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtendedMaxDistance;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int8 Ammo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanDeploySelf;
    
public:
    ULongRangeArtilleryMountComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetDesiredPitch(const float Pitch);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerFireShell(FActivityStateChange ActivityStateChange);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDeploySelf();
    
};

