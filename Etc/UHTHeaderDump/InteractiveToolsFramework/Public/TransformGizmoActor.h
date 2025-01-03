#pragma once
#include "CoreMinimal.h"
#include "GizmoActor.h"
#include "TransformGizmoActor.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable, NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API ATransformGizmoActor : public AGizmoActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* TranslateX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* TranslateY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* TranslateZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* TranslateYZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* TranslateXZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* TranslateXY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* RotateX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* RotateY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* RotateZ;
    
    ATransformGizmoActor(const FObjectInitializer& ObjectInitializer);

};

