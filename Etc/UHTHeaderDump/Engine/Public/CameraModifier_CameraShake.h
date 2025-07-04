#pragma once
#include "CoreMinimal.h"
#include "CameraModifier.h"
#include "PooledCameraShakes.h"
#include "Templates/SubclassOf.h"
#include "CameraModifier_CameraShake.generated.h"

class UCameraShake;

UCLASS(Blueprintable, Config=Camera)
class ENGINE_API UCameraModifier_CameraShake : public UCameraModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCameraShake*> ActiveShakes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UCameraShake>, FPooledCameraShakes> ExpiredPooledShakesMap;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplitScreenShakeScale;
    
public:
    UCameraModifier_CameraShake();

};

