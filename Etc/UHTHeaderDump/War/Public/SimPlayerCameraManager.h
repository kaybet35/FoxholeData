#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerCameraManager -FallbackName=PlayerCameraManager
#include "SpectateTarget.h"
#include "SimPlayerCameraManager.generated.h"

class UMaterialInstanceDynamic;
class UPostProcessComponent;

UCLASS(Blueprintable, NonTransient)
class WAR_API ASimPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* PostProcessComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* FogMaterialDynamic;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpectateTarget SpectateTarget;
    
public:
    ASimPlayerCameraManager(const FObjectInitializer& ObjectInitializer);

};

