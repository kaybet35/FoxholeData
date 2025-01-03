#pragma once
#include "CoreMinimal.h"
#include "InteractiveGizmo.h"
#include "TransformGizmo.generated.h"

class UGizmoComponentAxisSource;
class UGizmoTransformChangeStateTarget;
class UPrimitiveComponent;
class UTransformProxy;

UCLASS(Blueprintable, NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UTransformGizmo : public UInteractiveGizmo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTransformProxy* ActiveTarget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> ActiveComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UInteractiveGizmo*> ActiveGizmos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGizmoComponentAxisSource* AxisXSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGizmoComponentAxisSource* AxisYSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGizmoComponentAxisSource* AxisZSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGizmoTransformChangeStateTarget* StateTarget;
    
public:
    UTransformGizmo();

};

