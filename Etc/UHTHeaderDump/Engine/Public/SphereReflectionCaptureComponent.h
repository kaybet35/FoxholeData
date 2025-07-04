#pragma once
#include "CoreMinimal.h"
#include "ReflectionCaptureComponent.h"
#include "SphereReflectionCaptureComponent.generated.h"

class UDrawSphereComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API USphereReflectionCaptureComponent : public UReflectionCaptureComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InfluenceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CaptureDistanceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDrawSphereComponent* PreviewInfluenceRadius;
    
    USphereReflectionCaptureComponent(const FObjectInitializer& ObjectInitializer);

};

