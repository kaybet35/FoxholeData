#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ShootingRangeArea.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class WAR_API AShootingRangeArea : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* ShootingRangeComponent;
    
public:
    AShootingRangeArea(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor);
    
};

