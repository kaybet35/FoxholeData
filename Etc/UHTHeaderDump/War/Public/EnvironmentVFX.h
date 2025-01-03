#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EnvironmentVFX.generated.h"

class UArrowComponent;

UCLASS(Blueprintable)
class WAR_API AEnvironmentVFX : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponent;
    
    AEnvironmentVFX(const FObjectInitializer& ObjectInitializer);

};

