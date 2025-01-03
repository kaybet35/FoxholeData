#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "RocketLauncherProjectileDummy.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class WAR_API ARocketLauncherProjectileDummy : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh;
    
    ARocketLauncherProjectileDummy(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpoolupFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPBeginLaunch();
    
};

