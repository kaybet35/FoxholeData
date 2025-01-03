#pragma once
#include "CoreMinimal.h"
#include "SubmarineMountComponent.h"
#include "SubmarinePeriscopeMountComponent.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API USubmarinePeriscopeMountComponent : public USubmarineMountComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDepthForVisuals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CameraArmLengthCurve;
    
    USubmarinePeriscopeMountComponent(const FObjectInitializer& ObjectInitializer);

};

