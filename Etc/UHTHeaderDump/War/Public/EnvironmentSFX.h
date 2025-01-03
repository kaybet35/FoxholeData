#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EnvironmentSFX.generated.h"

class UArrowComponent;
class UAudioComponent;

UCLASS(Blueprintable)
class WAR_API AEnvironmentSFX : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* DayTimeSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* NightTimeSFX;
    
    AEnvironmentSFX(const FObjectInitializer& ObjectInitializer);

};

