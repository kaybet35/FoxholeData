---@meta

---@class AGizmoActor : AInternalToolFrameworkActor
AGizmoActor = {}


---@class AInternalToolFrameworkActor : AActor
AInternalToolFrameworkActor = {}


---@class ATransformGizmoActor : AGizmoActor
---@field TranslateX UPrimitiveComponent
---@field TranslateY UPrimitiveComponent
---@field TranslateZ UPrimitiveComponent
---@field TranslateYZ UPrimitiveComponent
---@field TranslateXZ UPrimitiveComponent
---@field TranslateXY UPrimitiveComponent
---@field RotateX UPrimitiveComponent
---@field RotateY UPrimitiveComponent
---@field RotateZ UPrimitiveComponent
ATransformGizmoActor = {}



---@class FActiveGizmo
FActiveGizmo = {}


---@class FBehaviorInfo
---@field Behavior UInputBehavior
FBehaviorInfo = {}



---@class FGizmoFloatParameterChange
---@field InitialValue float
---@field CurrentValue float
FGizmoFloatParameterChange = {}



---@class FGizmoVec2ParameterChange
---@field InitialValue FVector2D
---@field CurrentValue FVector2D
FGizmoVec2ParameterChange = {}



---@class FInputRayHit
FInputRayHit = {}


---@class IGizmoAxisSource : IInterface
IGizmoAxisSource = {}

---@return boolean
function IGizmoAxisSource:HasTangentVectors() end
---@param TangentXOut FVector
---@param TangentYOut FVector
function IGizmoAxisSource:GetTangentVectors(TangentXOut, TangentYOut) end
---@return FVector
function IGizmoAxisSource:GetOrigin() end
---@return FVector
function IGizmoAxisSource:GetDirection() end


---@class IGizmoClickTarget : IInterface
IGizmoClickTarget = {}

---@param bHovering boolean
function IGizmoClickTarget:UpdateHoverState(bHovering) end


---@class IGizmoFloatParameterSource : IInterface
IGizmoFloatParameterSource = {}

---@param NewValue float
function IGizmoFloatParameterSource:SetParameter(NewValue) end
---@return float
function IGizmoFloatParameterSource:GetParameter() end
function IGizmoFloatParameterSource:EndModify() end
function IGizmoFloatParameterSource:BeginModify() end


---@class IGizmoStateTarget : IInterface
IGizmoStateTarget = {}

function IGizmoStateTarget:EndUpdate() end
function IGizmoStateTarget:BeginUpdate() end


---@class IGizmoTransformSource : IInterface
IGizmoTransformSource = {}

---@param NewTransform FTransform
function IGizmoTransformSource:SetTransform(NewTransform) end
---@return FTransform
function IGizmoTransformSource:GetTransform() end


---@class IGizmoVec2ParameterSource : IInterface
IGizmoVec2ParameterSource = {}

---@param NewValue FVector2D
function IGizmoVec2ParameterSource:SetParameter(NewValue) end
---@return FVector2D
function IGizmoVec2ParameterSource:GetParameter() end
function IGizmoVec2ParameterSource:EndModify() end
function IGizmoVec2ParameterSource:BeginModify() end


---@class IInputBehaviorSource : IInterface
IInputBehaviorSource = {}


---@class IToolContextTransactionProvider : IInterface
IToolContextTransactionProvider = {}


---@class IToolFrameworkComponent : IInterface
IToolFrameworkComponent = {}


---@class UAnyButtonInputBehavior : UInputBehavior
---@field ButtonNumber int32
UAnyButtonInputBehavior = {}



---@class UAxisAngleGizmo : UInteractiveGizmo
---@field AxisSource TScriptInterface<IGizmoAxisSource>
---@field AngleSource TScriptInterface<IGizmoFloatParameterSource>
---@field HitTarget TScriptInterface<IGizmoClickTarget>
---@field StateTarget TScriptInterface<IGizmoStateTarget>
---@field bInInteraction boolean
---@field RotationOrigin FVector
---@field RotationAxis FVector
---@field RotationPlaneX FVector
---@field RotationPlaneY FVector
---@field InteractionStartPoint FVector
---@field InteractionCurPoint FVector
---@field InteractionStartAngle float
---@field InteractionCurAngle float
UAxisAngleGizmo = {}



---@class UAxisAngleGizmoBuilder : UInteractiveGizmoBuilder
UAxisAngleGizmoBuilder = {}


---@class UAxisPositionGizmo : UInteractiveGizmo
---@field AxisSource TScriptInterface<IGizmoAxisSource>
---@field ParameterSource TScriptInterface<IGizmoFloatParameterSource>
---@field HitTarget TScriptInterface<IGizmoClickTarget>
---@field StateTarget TScriptInterface<IGizmoStateTarget>
---@field bInInteraction boolean
---@field InteractionOrigin FVector
---@field InteractionAxis FVector
---@field InteractionStartPoint FVector
---@field InteractionCurPoint FVector
---@field InteractionStartParameter float
---@field InteractionCurParameter float
UAxisPositionGizmo = {}



---@class UAxisPositionGizmoBuilder : UInteractiveGizmoBuilder
UAxisPositionGizmoBuilder = {}


---@class UClickDragInputBehavior : UAnyButtonInputBehavior
UClickDragInputBehavior = {}


---@class UClickDragTool : UInteractiveTool
UClickDragTool = {}


---@class UClickDragToolBuilder : UInteractiveToolBuilder
UClickDragToolBuilder = {}


---@class UGizmoArrowComponent : UGizmoBaseComponent
---@field Direction FVector
---@field Gap float
---@field Length float
---@field Thickness float
UGizmoArrowComponent = {}



---@class UGizmoAxisRotationParameterSource : UGizmoBaseFloatParameterSource
---@field AxisSource TScriptInterface<IGizmoAxisSource>
---@field TransformSource TScriptInterface<IGizmoTransformSource>
---@field Angle float
---@field LastChange FGizmoFloatParameterChange
---@field CurRotationAxis FVector
---@field CurRotationOrigin FVector
---@field InitialTransform FTransform
UGizmoAxisRotationParameterSource = {}



---@class UGizmoAxisTranslationParameterSource : UGizmoBaseFloatParameterSource
---@field AxisSource TScriptInterface<IGizmoAxisSource>
---@field TransformSource TScriptInterface<IGizmoTransformSource>
---@field Parameter float
---@field LastChange FGizmoFloatParameterChange
---@field CurTranslationAxis FVector
---@field CurTranslationOrigin FVector
---@field InitialTransform FTransform
UGizmoAxisTranslationParameterSource = {}



---@class UGizmoBaseComponent : UPrimitiveComponent
---@field Color FLinearColor
---@field HoverSizeMultiplier float
---@field PixelHitDistanceThreshold float
UGizmoBaseComponent = {}

---@param bWorldIn boolean
function UGizmoBaseComponent:UpdateWorldLocalState(bWorldIn) end
---@param bHoveringIn boolean
function UGizmoBaseComponent:UpdateHoverState(bHoveringIn) end


---@class UGizmoBaseFloatParameterSource : UObject
UGizmoBaseFloatParameterSource = {}


---@class UGizmoBaseTransformSource : UObject
UGizmoBaseTransformSource = {}


---@class UGizmoBaseVec2ParameterSource : UObject
UGizmoBaseVec2ParameterSource = {}


---@class UGizmoCircleComponent : UGizmoBaseComponent
---@field Normal FVector
---@field Radius float
---@field Thickness float
---@field NumSides int32
---@field bViewAligned boolean
---@field bOnlyAllowFrontFacingHits boolean
UGizmoCircleComponent = {}



---@class UGizmoComponentAxisSource : UObject
---@field Component USceneComponent
---@field AxisIndex int32
---@field bLocalAxes boolean
UGizmoComponentAxisSource = {}



---@class UGizmoComponentHitTarget : UObject
---@field Component UPrimitiveComponent
UGizmoComponentHitTarget = {}



---@class UGizmoComponentWorldTransformSource : UGizmoBaseTransformSource
---@field Component USceneComponent
---@field bModifyComponentOnTransform boolean
UGizmoComponentWorldTransformSource = {}



---@class UGizmoConstantAxisSource : UObject
---@field Origin FVector
---@field Direction FVector
UGizmoConstantAxisSource = {}



---@class UGizmoLambdaHitTarget : UObject
UGizmoLambdaHitTarget = {}


---@class UGizmoLambdaStateTarget : UObject
UGizmoLambdaStateTarget = {}


---@class UGizmoLocalFloatParameterSource : UGizmoBaseFloatParameterSource
---@field Value float
---@field LastChange FGizmoFloatParameterChange
UGizmoLocalFloatParameterSource = {}



---@class UGizmoLocalVec2ParameterSource : UGizmoBaseVec2ParameterSource
---@field Value FVector2D
---@field LastChange FGizmoVec2ParameterChange
UGizmoLocalVec2ParameterSource = {}



---@class UGizmoNilStateTarget : UObject
UGizmoNilStateTarget = {}


---@class UGizmoObjectModifyStateTarget : UObject
UGizmoObjectModifyStateTarget = {}


---@class UGizmoPlaneTranslationParameterSource : UGizmoBaseVec2ParameterSource
---@field AxisSource TScriptInterface<IGizmoAxisSource>
---@field TransformSource TScriptInterface<IGizmoTransformSource>
---@field Parameter FVector2D
---@field LastChange FGizmoVec2ParameterChange
---@field CurTranslationOrigin FVector
---@field CurTranslationNormal FVector
---@field CurTranslationAxisX FVector
---@field CurTranslationAxisY FVector
---@field InitialTransform FTransform
UGizmoPlaneTranslationParameterSource = {}



---@class UGizmoRectangleComponent : UGizmoBaseComponent
---@field DirectionX FVector
---@field DirectionY FVector
---@field OffsetX float
---@field OffsetY float
---@field LengthX float
---@field LengthY float
---@field Thickness float
UGizmoRectangleComponent = {}



---@class UGizmoTransformChangeStateTarget : UObject
---@field TransactionManager TScriptInterface<IToolContextTransactionProvider>
UGizmoTransformChangeStateTarget = {}



---@class UGizmoTransformProxyTransformSource : UGizmoBaseTransformSource
---@field Proxy UTransformProxy
UGizmoTransformProxyTransformSource = {}



---@class UGizmoWorldAxisSource : UObject
---@field Origin FVector
---@field AxisIndex int32
UGizmoWorldAxisSource = {}



---@class UInputBehavior : UObject
UInputBehavior = {}


---@class UInputBehaviorSet : UObject
---@field Behaviors TArray<FBehaviorInfo>
UInputBehaviorSet = {}



---@class UInputRouter : UObject
---@field bAutoInvalidateOnHover boolean
---@field bAutoInvalidateOnCapture boolean
---@field ActiveInputBehaviors UInputBehaviorSet
UInputRouter = {}



---@class UInteractiveGizmo : UObject
---@field InputBehaviors UInputBehaviorSet
UInteractiveGizmo = {}



---@class UInteractiveGizmoBuilder : UObject
UInteractiveGizmoBuilder = {}


---@class UInteractiveGizmoManager : UObject
---@field ActiveGizmos TArray<FActiveGizmo>
---@field GizmoBuilders TMap<FString, UInteractiveGizmoBuilder>
UInteractiveGizmoManager = {}



---@class UInteractiveTool : UObject
---@field InputBehaviors UInputBehaviorSet
---@field ToolPropertyObjects TArray<UObject>
UInteractiveTool = {}



---@class UInteractiveToolBuilder : UObject
UInteractiveToolBuilder = {}


---@class UInteractiveToolManager : UObject
---@field ActiveLeftTool UInteractiveTool
---@field ActiveRightTool UInteractiveTool
---@field ToolBuilders TMap<FString, UInteractiveToolBuilder>
UInteractiveToolManager = {}



---@class UInteractiveToolPropertySet : UObject
---@field CachedProperties UObject
UInteractiveToolPropertySet = {}



---@class UInteractiveToolsContext : UObject
---@field InputRouter UInputRouter
---@field ToolManager UInteractiveToolManager
---@field GizmoManager UInteractiveGizmoManager
UInteractiveToolsContext = {}



---@class UKeyAsModifierInputBehavior : UInputBehavior
UKeyAsModifierInputBehavior = {}


---@class UMeshSelectionSet : USelectionSet
---@field Vertices TArray<int32>
---@field Edges TArray<int32>
---@field Faces TArray<int32>
---@field Groups TArray<int32>
UMeshSelectionSet = {}



---@class UMeshSurfacePointTool : USingleSelectionTool
UMeshSurfacePointTool = {}


---@class UMeshSurfacePointToolBuilder : UInteractiveToolBuilder
UMeshSurfacePointToolBuilder = {}


---@class UMeshSurfacePointToolMouseBehavior : UAnyButtonInputBehavior
UMeshSurfacePointToolMouseBehavior = {}


---@class UMouseHoverBehavior : UInputBehavior
UMouseHoverBehavior = {}


---@class UMultiClickSequenceInputBehavior : UAnyButtonInputBehavior
UMultiClickSequenceInputBehavior = {}


---@class UMultiSelectionTool : UInteractiveTool
UMultiSelectionTool = {}


---@class UPlanePositionGizmo : UInteractiveGizmo
---@field AxisSource TScriptInterface<IGizmoAxisSource>
---@field ParameterSource TScriptInterface<IGizmoVec2ParameterSource>
---@field HitTarget TScriptInterface<IGizmoClickTarget>
---@field StateTarget TScriptInterface<IGizmoStateTarget>
---@field bInInteraction boolean
---@field InteractionOrigin FVector
---@field InteractionNormal FVector
---@field InteractionAxisX FVector
---@field InteractionAxisY FVector
---@field InteractionStartPoint FVector
---@field InteractionCurPoint FVector
---@field InteractionStartParameter FVector2D
---@field InteractionCurParameter FVector2D
UPlanePositionGizmo = {}



---@class UPlanePositionGizmoBuilder : UInteractiveGizmoBuilder
UPlanePositionGizmoBuilder = {}


---@class USelectionSet : UObject
USelectionSet = {}


---@class USingleClickInputBehavior : UAnyButtonInputBehavior
---@field HitTestOnRelease boolean
USingleClickInputBehavior = {}



---@class USingleClickTool : UInteractiveTool
USingleClickTool = {}


---@class USingleClickToolBuilder : UInteractiveToolBuilder
USingleClickToolBuilder = {}


---@class USingleSelectionTool : UInteractiveTool
USingleSelectionTool = {}


---@class UTransformGizmo : UInteractiveGizmo
---@field ActiveTarget UTransformProxy
---@field ActiveComponents TArray<UPrimitiveComponent>
---@field ActiveGizmos TArray<UInteractiveGizmo>
---@field AxisXSource UGizmoComponentAxisSource
---@field AxisYSource UGizmoComponentAxisSource
---@field AxisZSource UGizmoComponentAxisSource
---@field StateTarget UGizmoTransformChangeStateTarget
UTransformGizmo = {}



---@class UTransformGizmoBuilder : UInteractiveGizmoBuilder
UTransformGizmoBuilder = {}


---@class UTransformProxy : UObject
---@field bRotatePerObject boolean
---@field bSetPivotMode boolean
---@field SharedTransform FTransform
---@field InitialSharedTransform FTransform
UTransformProxy = {}



