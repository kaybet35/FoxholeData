#pragma once
#include "CoreMinimal.h"
#include "MountComponent.h"
#include "SpotterMountComponent.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API USpotterMountComponent : public UMountComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraArmLengthOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CameraArmLengthCurve;
    
    USpotterMountComponent(const FObjectInitializer& ObjectInitializer);

};

