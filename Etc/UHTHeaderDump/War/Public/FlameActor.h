#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "FlameActor.generated.h"

class UParticleSystemComponent;

UCLASS(Blueprintable)
class WAR_API AFlameActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* WaterFireVFXComponent;
    
public:
    AFlameActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPUpdateWindDirection(FVector Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPOnFireIntensityChanged(uint8 Previous, uint8 NewIntensity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPDeactivate();
    
};

