#ifndef UE4SS_SDK_InteractiveToolsFramework_HPP
#define UE4SS_SDK_InteractiveToolsFramework_HPP

#include "InteractiveToolsFramework_enums.hpp"

struct FActiveGizmo
{
}; // Size: 0x30

struct FBehaviorInfo
{
    class UInputBehavior* Behavior;                                                   // 0x0000 (size: 0x8)

}; // Size: 0x20

struct FGizmoFloatParameterChange
{
    float InitialValue;                                                               // 0x0000 (size: 0x4)
    float CurrentValue;                                                               // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FGizmoVec2ParameterChange
{
    FVector2D InitialValue;                                                           // 0x0000 (size: 0x8)
    FVector2D CurrentValue;                                                           // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FInputRayHit
{
}; // Size: 0x28

class AGizmoActor : public AInternalToolFrameworkActor
{
}; // Size: 0x218

class AInternalToolFrameworkActor : public AActor
{
}; // Size: 0x218

class ATransformGizmoActor : public AGizmoActor
{
    class UPrimitiveComponent* TranslateX;                                            // 0x0218 (size: 0x8)
    class UPrimitiveComponent* TranslateY;                                            // 0x0220 (size: 0x8)
    class UPrimitiveComponent* TranslateZ;                                            // 0x0228 (size: 0x8)
    class UPrimitiveComponent* TranslateYZ;                                           // 0x0230 (size: 0x8)
    class UPrimitiveComponent* TranslateXZ;                                           // 0x0238 (size: 0x8)
    class UPrimitiveComponent* TranslateXY;                                           // 0x0240 (size: 0x8)
    class UPrimitiveComponent* RotateX;                                               // 0x0248 (size: 0x8)
    class UPrimitiveComponent* RotateY;                                               // 0x0250 (size: 0x8)
    class UPrimitiveComponent* RotateZ;                                               // 0x0258 (size: 0x8)

}; // Size: 0x260

class IGizmoAxisSource : public IInterface
{

    bool HasTangentVectors();
    void GetTangentVectors(FVector& TangentXOut, FVector& TangentYOut);
    FVector GetOrigin();
    FVector GetDirection();
}; // Size: 0x28

class IGizmoClickTarget : public IInterface
{

    void UpdateHoverState(bool bHovering);
}; // Size: 0x28

class IGizmoFloatParameterSource : public IInterface
{

    void SetParameter(float NewValue);
    float GetParameter();
    void EndModify();
    void BeginModify();
}; // Size: 0x28

class IGizmoStateTarget : public IInterface
{

    void EndUpdate();
    void BeginUpdate();
}; // Size: 0x28

class IGizmoTransformSource : public IInterface
{

    void SetTransform(const FTransform& NewTransform);
    FTransform GetTransform();
}; // Size: 0x28

class IGizmoVec2ParameterSource : public IInterface
{

    void SetParameter(const FVector2D& NewValue);
    FVector2D GetParameter();
    void EndModify();
    void BeginModify();
}; // Size: 0x28

class IInputBehaviorSource : public IInterface
{
}; // Size: 0x28

class IToolContextTransactionProvider : public IInterface
{
}; // Size: 0x28

class IToolFrameworkComponent : public IInterface
{
}; // Size: 0x28

class UAnyButtonInputBehavior : public UInputBehavior
{
    int32 ButtonNumber;                                                               // 0x0030 (size: 0x4)

}; // Size: 0x38

class UAxisAngleGizmo : public UInteractiveGizmo
{
    TScriptInterface<class IGizmoAxisSource> AxisSource;                              // 0x0048 (size: 0x10)
    TScriptInterface<class IGizmoFloatParameterSource> AngleSource;                   // 0x0058 (size: 0x10)
    TScriptInterface<class IGizmoClickTarget> HitTarget;                              // 0x0068 (size: 0x10)
    TScriptInterface<class IGizmoStateTarget> StateTarget;                            // 0x0078 (size: 0x10)
    bool bInInteraction;                                                              // 0x0088 (size: 0x1)
    FVector RotationOrigin;                                                           // 0x008C (size: 0xC)
    FVector RotationAxis;                                                             // 0x0098 (size: 0xC)
    FVector RotationPlaneX;                                                           // 0x00A4 (size: 0xC)
    FVector RotationPlaneY;                                                           // 0x00B0 (size: 0xC)
    FVector InteractionStartPoint;                                                    // 0x00BC (size: 0xC)
    FVector InteractionCurPoint;                                                      // 0x00C8 (size: 0xC)
    float InteractionStartAngle;                                                      // 0x00D4 (size: 0x4)
    float InteractionCurAngle;                                                        // 0x00D8 (size: 0x4)

}; // Size: 0xF0

class UAxisAngleGizmoBuilder : public UInteractiveGizmoBuilder
{
}; // Size: 0x28

class UAxisPositionGizmo : public UInteractiveGizmo
{
    TScriptInterface<class IGizmoAxisSource> AxisSource;                              // 0x0048 (size: 0x10)
    TScriptInterface<class IGizmoFloatParameterSource> ParameterSource;               // 0x0058 (size: 0x10)
    TScriptInterface<class IGizmoClickTarget> HitTarget;                              // 0x0068 (size: 0x10)
    TScriptInterface<class IGizmoStateTarget> StateTarget;                            // 0x0078 (size: 0x10)
    bool bInInteraction;                                                              // 0x0088 (size: 0x1)
    FVector InteractionOrigin;                                                        // 0x008C (size: 0xC)
    FVector InteractionAxis;                                                          // 0x0098 (size: 0xC)
    FVector InteractionStartPoint;                                                    // 0x00A4 (size: 0xC)
    FVector InteractionCurPoint;                                                      // 0x00B0 (size: 0xC)
    float InteractionStartParameter;                                                  // 0x00BC (size: 0x4)
    float InteractionCurParameter;                                                    // 0x00C0 (size: 0x4)

}; // Size: 0xD8

class UAxisPositionGizmoBuilder : public UInteractiveGizmoBuilder
{
}; // Size: 0x28

class UClickDragInputBehavior : public UAnyButtonInputBehavior
{
}; // Size: 0xF0

class UClickDragTool : public UInteractiveTool
{
}; // Size: 0x58

class UClickDragToolBuilder : public UInteractiveToolBuilder
{
}; // Size: 0x28

class UGizmoArrowComponent : public UGizmoBaseComponent
{
    FVector Direction;                                                                // 0x03F8 (size: 0xC)
    float Gap;                                                                        // 0x0404 (size: 0x4)
    float Length;                                                                     // 0x0408 (size: 0x4)
    float Thickness;                                                                  // 0x040C (size: 0x4)

}; // Size: 0x420

class UGizmoAxisRotationParameterSource : public UGizmoBaseFloatParameterSource
{
    TScriptInterface<class IGizmoAxisSource> AxisSource;                              // 0x0048 (size: 0x10)
    TScriptInterface<class IGizmoTransformSource> TransformSource;                    // 0x0058 (size: 0x10)
    float Angle;                                                                      // 0x0068 (size: 0x4)
    FGizmoFloatParameterChange LastChange;                                            // 0x006C (size: 0x8)
    FVector CurRotationAxis;                                                          // 0x0074 (size: 0xC)
    FVector CurRotationOrigin;                                                        // 0x0080 (size: 0xC)
    FTransform InitialTransform;                                                      // 0x0090 (size: 0x30)

}; // Size: 0xC0

class UGizmoAxisTranslationParameterSource : public UGizmoBaseFloatParameterSource
{
    TScriptInterface<class IGizmoAxisSource> AxisSource;                              // 0x0048 (size: 0x10)
    TScriptInterface<class IGizmoTransformSource> TransformSource;                    // 0x0058 (size: 0x10)
    float Parameter;                                                                  // 0x0068 (size: 0x4)
    FGizmoFloatParameterChange LastChange;                                            // 0x006C (size: 0x8)
    FVector CurTranslationAxis;                                                       // 0x0074 (size: 0xC)
    FVector CurTranslationOrigin;                                                     // 0x0080 (size: 0xC)
    FTransform InitialTransform;                                                      // 0x0090 (size: 0x30)

}; // Size: 0xC0

class UGizmoBaseComponent : public UPrimitiveComponent
{
    FLinearColor Color;                                                               // 0x03D8 (size: 0x10)
    float HoverSizeMultiplier;                                                        // 0x03E8 (size: 0x4)
    float PixelHitDistanceThreshold;                                                  // 0x03EC (size: 0x4)

    void UpdateWorldLocalState(bool bWorldIn);
    void UpdateHoverState(bool bHoveringIn);
}; // Size: 0x400

class UGizmoBaseFloatParameterSource : public UObject
{
}; // Size: 0x48

class UGizmoBaseTransformSource : public UObject
{
}; // Size: 0x48

class UGizmoBaseVec2ParameterSource : public UObject
{
}; // Size: 0x48

class UGizmoCircleComponent : public UGizmoBaseComponent
{
    FVector Normal;                                                                   // 0x03F8 (size: 0xC)
    float Radius;                                                                     // 0x0404 (size: 0x4)
    float Thickness;                                                                  // 0x0408 (size: 0x4)
    int32 NumSides;                                                                   // 0x040C (size: 0x4)
    bool bViewAligned;                                                                // 0x0410 (size: 0x1)
    bool bOnlyAllowFrontFacingHits;                                                   // 0x0411 (size: 0x1)

}; // Size: 0x420

class UGizmoComponentAxisSource : public UObject
{
    class USceneComponent* Component;                                                 // 0x0030 (size: 0x8)
    int32 AxisIndex;                                                                  // 0x0038 (size: 0x4)
    bool bLocalAxes;                                                                  // 0x003C (size: 0x1)

}; // Size: 0x40

class UGizmoComponentHitTarget : public UObject
{
    class UPrimitiveComponent* Component;                                             // 0x0030 (size: 0x8)

}; // Size: 0x80

class UGizmoComponentWorldTransformSource : public UGizmoBaseTransformSource
{
    class USceneComponent* Component;                                                 // 0x0048 (size: 0x8)
    bool bModifyComponentOnTransform;                                                 // 0x0050 (size: 0x1)

}; // Size: 0x58

class UGizmoConstantAxisSource : public UObject
{
    FVector Origin;                                                                   // 0x0030 (size: 0xC)
    FVector Direction;                                                                // 0x003C (size: 0xC)

}; // Size: 0x48

class UGizmoLambdaHitTarget : public UObject
{
}; // Size: 0xB0

class UGizmoLambdaStateTarget : public UObject
{
}; // Size: 0xB0

class UGizmoLocalFloatParameterSource : public UGizmoBaseFloatParameterSource
{
    float Value;                                                                      // 0x0048 (size: 0x4)
    FGizmoFloatParameterChange LastChange;                                            // 0x004C (size: 0x8)

}; // Size: 0x58

class UGizmoLocalVec2ParameterSource : public UGizmoBaseVec2ParameterSource
{
    FVector2D Value;                                                                  // 0x0048 (size: 0x8)
    FGizmoVec2ParameterChange LastChange;                                             // 0x0050 (size: 0x10)

}; // Size: 0x60

class UGizmoNilStateTarget : public UObject
{
}; // Size: 0x30

class UGizmoObjectModifyStateTarget : public UObject
{
}; // Size: 0x58

class UGizmoPlaneTranslationParameterSource : public UGizmoBaseVec2ParameterSource
{
    TScriptInterface<class IGizmoAxisSource> AxisSource;                              // 0x0048 (size: 0x10)
    TScriptInterface<class IGizmoTransformSource> TransformSource;                    // 0x0058 (size: 0x10)
    FVector2D Parameter;                                                              // 0x0068 (size: 0x8)
    FGizmoVec2ParameterChange LastChange;                                             // 0x0070 (size: 0x10)
    FVector CurTranslationOrigin;                                                     // 0x0080 (size: 0xC)
    FVector CurTranslationNormal;                                                     // 0x008C (size: 0xC)
    FVector CurTranslationAxisX;                                                      // 0x0098 (size: 0xC)
    FVector CurTranslationAxisY;                                                      // 0x00A4 (size: 0xC)
    FTransform InitialTransform;                                                      // 0x00B0 (size: 0x30)

}; // Size: 0xE0

class UGizmoRectangleComponent : public UGizmoBaseComponent
{
    FVector DirectionX;                                                               // 0x03F8 (size: 0xC)
    FVector DirectionY;                                                               // 0x0404 (size: 0xC)
    float OffsetX;                                                                    // 0x0410 (size: 0x4)
    float OffsetY;                                                                    // 0x0414 (size: 0x4)
    float LengthX;                                                                    // 0x0418 (size: 0x4)
    float LengthY;                                                                    // 0x041C (size: 0x4)
    float Thickness;                                                                  // 0x0420 (size: 0x4)

}; // Size: 0x430

class UGizmoTransformChangeStateTarget : public UObject
{
    TScriptInterface<class IToolContextTransactionProvider> TransactionManager;       // 0x0050 (size: 0x10)

}; // Size: 0xD0

class UGizmoTransformProxyTransformSource : public UGizmoBaseTransformSource
{
    class UTransformProxy* Proxy;                                                     // 0x0048 (size: 0x8)

}; // Size: 0x50

class UGizmoWorldAxisSource : public UObject
{
    FVector Origin;                                                                   // 0x0030 (size: 0xC)
    int32 AxisIndex;                                                                  // 0x003C (size: 0x4)

}; // Size: 0x40

class UInputBehavior : public UObject
{
}; // Size: 0x30

class UInputBehaviorSet : public UObject
{
    TArray<FBehaviorInfo> Behaviors;                                                  // 0x0028 (size: 0x10)

}; // Size: 0x38

class UInputRouter : public UObject
{
    bool bAutoInvalidateOnHover;                                                      // 0x0028 (size: 0x1)
    bool bAutoInvalidateOnCapture;                                                    // 0x0029 (size: 0x1)
    class UInputBehaviorSet* ActiveInputBehaviors;                                    // 0x0038 (size: 0x8)

}; // Size: 0xB0

class UInteractiveGizmo : public UObject
{
    class UInputBehaviorSet* InputBehaviors;                                          // 0x0030 (size: 0x8)

}; // Size: 0x38

class UInteractiveGizmoBuilder : public UObject
{
}; // Size: 0x28

class UInteractiveGizmoManager : public UObject
{
    TArray<FActiveGizmo> ActiveGizmos;                                                // 0x0030 (size: 0x10)
    TMap<class FString, class UInteractiveGizmoBuilder*> GizmoBuilders;               // 0x0058 (size: 0x50)

}; // Size: 0xB8

class UInteractiveTool : public UObject
{
    class UInputBehaviorSet* InputBehaviors;                                          // 0x0030 (size: 0x8)
    TArray<class UObject*> ToolPropertyObjects;                                       // 0x0038 (size: 0x10)

}; // Size: 0x50

class UInteractiveToolBuilder : public UObject
{
}; // Size: 0x28

class UInteractiveToolManager : public UObject
{
    class UInteractiveTool* ActiveLeftTool;                                           // 0x0030 (size: 0x8)
    class UInteractiveTool* ActiveRightTool;                                          // 0x0038 (size: 0x8)
    TMap<class FString, class UInteractiveToolBuilder*> ToolBuilders;                 // 0x0088 (size: 0x50)

}; // Size: 0xE8

class UInteractiveToolPropertySet : public UObject
{
    class UObject* CachedProperties;                                                  // 0x0040 (size: 0x8)

}; // Size: 0x48

class UInteractiveToolsContext : public UObject
{
    class UInputRouter* InputRouter;                                                  // 0x0028 (size: 0x8)
    class UInteractiveToolManager* ToolManager;                                       // 0x0030 (size: 0x8)
    class UInteractiveGizmoManager* GizmoManager;                                     // 0x0038 (size: 0x8)

}; // Size: 0x40

class UKeyAsModifierInputBehavior : public UInputBehavior
{
}; // Size: 0x110

class UMeshSelectionSet : public USelectionSet
{
    TArray<int32> Vertices;                                                           // 0x0040 (size: 0x10)
    TArray<int32> Edges;                                                              // 0x0050 (size: 0x10)
    TArray<int32> Faces;                                                              // 0x0060 (size: 0x10)
    TArray<int32> Groups;                                                             // 0x0070 (size: 0x10)

}; // Size: 0x80

class UMeshSurfacePointTool : public USingleSelectionTool
{
}; // Size: 0x68

class UMeshSurfacePointToolBuilder : public UInteractiveToolBuilder
{
}; // Size: 0x28

class UMeshSurfacePointToolMouseBehavior : public UAnyButtonInputBehavior
{
}; // Size: 0x60

class UMouseHoverBehavior : public UInputBehavior
{
}; // Size: 0x98

class UMultiClickSequenceInputBehavior : public UAnyButtonInputBehavior
{
}; // Size: 0xF0

class UMultiSelectionTool : public UInteractiveTool
{
}; // Size: 0x60

class UPlanePositionGizmo : public UInteractiveGizmo
{
    TScriptInterface<class IGizmoAxisSource> AxisSource;                              // 0x0048 (size: 0x10)
    TScriptInterface<class IGizmoVec2ParameterSource> ParameterSource;                // 0x0058 (size: 0x10)
    TScriptInterface<class IGizmoClickTarget> HitTarget;                              // 0x0068 (size: 0x10)
    TScriptInterface<class IGizmoStateTarget> StateTarget;                            // 0x0078 (size: 0x10)
    bool bInInteraction;                                                              // 0x0088 (size: 0x1)
    FVector InteractionOrigin;                                                        // 0x008C (size: 0xC)
    FVector InteractionNormal;                                                        // 0x0098 (size: 0xC)
    FVector InteractionAxisX;                                                         // 0x00A4 (size: 0xC)
    FVector InteractionAxisY;                                                         // 0x00B0 (size: 0xC)
    FVector InteractionStartPoint;                                                    // 0x00BC (size: 0xC)
    FVector InteractionCurPoint;                                                      // 0x00C8 (size: 0xC)
    FVector2D InteractionStartParameter;                                              // 0x00D4 (size: 0x8)
    FVector2D InteractionCurParameter;                                                // 0x00DC (size: 0x8)

}; // Size: 0xF8

class UPlanePositionGizmoBuilder : public UInteractiveGizmoBuilder
{
}; // Size: 0x28

class USelectionSet : public UObject
{
}; // Size: 0x40

class USingleClickInputBehavior : public UAnyButtonInputBehavior
{
    bool HitTestOnRelease;                                                            // 0x0080 (size: 0x1)

}; // Size: 0x90

class USingleClickTool : public UInteractiveTool
{
}; // Size: 0x58

class USingleClickToolBuilder : public UInteractiveToolBuilder
{
}; // Size: 0x28

class USingleSelectionTool : public UInteractiveTool
{
}; // Size: 0x58

class UTransformGizmo : public UInteractiveGizmo
{
    class UTransformProxy* ActiveTarget;                                              // 0x0038 (size: 0x8)
    TArray<class UPrimitiveComponent*> ActiveComponents;                              // 0x00D0 (size: 0x10)
    TArray<class UInteractiveGizmo*> ActiveGizmos;                                    // 0x00E0 (size: 0x10)
    class UGizmoComponentAxisSource* AxisXSource;                                     // 0x0100 (size: 0x8)
    class UGizmoComponentAxisSource* AxisYSource;                                     // 0x0108 (size: 0x8)
    class UGizmoComponentAxisSource* AxisZSource;                                     // 0x0110 (size: 0x8)
    class UGizmoTransformChangeStateTarget* StateTarget;                              // 0x0118 (size: 0x8)

}; // Size: 0x120

class UTransformGizmoBuilder : public UInteractiveGizmoBuilder
{
}; // Size: 0xC0

class UTransformProxy : public UObject
{
    bool bRotatePerObject;                                                            // 0x0040 (size: 0x1)
    bool bSetPivotMode;                                                               // 0x0041 (size: 0x1)
    FTransform SharedTransform;                                                       // 0x0060 (size: 0x30)
    FTransform InitialSharedTransform;                                                // 0x0090 (size: 0x30)

}; // Size: 0xC0

#endif
