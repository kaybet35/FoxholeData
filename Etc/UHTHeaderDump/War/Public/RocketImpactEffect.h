#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "RocketImpactEffect.generated.h"

class UArrowComponent;

UCLASS(Blueprintable)
class WAR_API ARocketImpactEffect : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponent;
    
public:
    ARocketImpactEffect(const FObjectInitializer& ObjectInitializer);

};

