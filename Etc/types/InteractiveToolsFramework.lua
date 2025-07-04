---@meta

---@class AGizmoActor : AInternalToolFrameworkActor
local AGizmoActor = {}


---@class AInternalToolFrameworkActor : AActor
local AInternalToolFrameworkActor = {}


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
local ATransformGizmoActor = {}



---@class FActiveGizmo
local FActiveGizmo = {}


---@class FBehaviorInfo
---@field Behavior UInputBehavior
local FBehaviorInfo = {}



---@class FGizmoFloatParameterChange
---@field InitialValue float
---@field CurrentValue float
local FGizmoFloatParameterChange = {}



---@class FGizmoVec2ParameterChange
---@field InitialValue FVector2D
---@field CurrentValue FVector2D
local FGizmoVec2ParameterChange = {}



---@class FInputRayHit
local FInputRayHit = {}


---@class IGizmoAxisSource : IInterface
local IGizmoAxisSource = {}

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
local IGizmoClickTarget = {}

---@param bHovering boolean
function IGizmoClickTarget:UpdateHoverState(bHovering) end


---@class IGizmoFloatParameterSource : IInterface
local IGizmoFloatParameterSource = {}

---@param NewValue float
function IGizmoFloatParameterSource:SetParameter(NewValue) end
---@return float
function IGizmoFloatParameterSource:GetParameter() end
function IGizmoFloatParameterSource:EndModify() end
function IGizmoFloatParameterSource:BeginModify() end


---@class IGizmoStateTarget : IInterface
local IGizmoStateTarget = {}

function IGizmoStateTarget:EndUpdate() end
function IGizmoStateTarget:BeginUpdate() end


---@class IGizmoTransformSource : IInterface
local IGizmoTransformSource = {}

---@param NewTransform FTransform
function IGizmoTransformSource:SetTransform(NewTransform) end
---@return FTransform
function IGizmoTransformSource:GetTransform() end


---@class IGizmoVec2ParameterSource : IInterface
local IGizmoVec2ParameterSource = {}

---@param NewValue FVector2D
function IGizmoVec2ParameterSource:SetParameter(NewValue) end
---@return FVector2D
function IGizmoVec2ParameterSource:GetParameter() end
function IGizmoVec2ParameterSource:EndModify() end
function IGizmoVec2ParameterSource:BeginModify() end


---@class IInputBehaviorSource : IInterface
local IInputBehaviorSource = {}


---@class IToolContextTransactionProvider : IInterface
local IToolContextTransactionProvider = {}


---@class IToolFrameworkComponent : IInterface
local IToolFrameworkComponent = {}


---@class UAnyButtonInputBehavior : UInputBehavior
---@field ButtonNumber int32
local UAnyButtonInputBehavior = {}



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
local UAxisAngleGizmo = {}



---@class UAxisAngleGizmoBuilder : UInteractiveGizmoBuilder
local UAxisAngleGizmoBuilder = {}


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
local UAxisPositionGizmo = {}



---@class UAxisPositionGizmoBuilder : UInteractiveGizmoBuilder
local UAxisPositionGizmoBuilder = {}


---@class UClickDragInputBehavior : UAnyButtonInputBehavior
local UClickDragInputBehavior = {}


---@class UClickDragTool : UInteractiveTool
local UClickDragTool = {}


---@class UClickDragToolBuilder : UInteractiveToolBuilder
local UClickDragToolBuilder = {}


---@class UGizmoArrowComponent : UGizmoBaseComponent
---@field Direction FVector
---@field Gap float
---@field Length float
---@field Thickness float
local UGizmoArrowComponent = {}



---@class UGizmoAxisRotationParameterSource : UGizmoBaseFloatParameterSource
---@field AxisSource TScriptInterface<IGizmoAxisSource>
---@field TransformSource TScriptInterface<IGizmoTransformSource>
---@field Angle float
---@field LastChange FGizmoFloatParameterChange
---@field CurRotationAxis FVector
---@field CurRotationOrigin FVector
---@field InitialTransform FTransform
local UGizmoAxisRotationParameterSource = {}



---@class UGizmoAxisTranslationParameterSource : UGizmoBaseFloatParameterSource
---@field AxisSource TScriptInterface<IGizmoAxisSource>
---@field TransformSource TScriptInterface<IGizmoTransformSource>
---@field Parameter float
---@field LastChange FGizmoFloatParameterChange
---@field CurTranslationAxis FVector
---@field CurTranslationOrigin FVector
---@field InitialTransform FTransform
local UGizmoAxisTranslationParameterSource = {}



---@class UGizmoBaseComponent : UPrimitiveComponent
---@field Color FLinearColor
---@field HoverSizeMultiplier float
---@field PixelHitDistanceThreshold float
local UGizmoBaseComponent = {}

---@param bWorldIn boolean
function UGizmoBaseComponent:UpdateWorldLocalState(bWorldIn) end
---@param bHoveringIn boolean
function UGizmoBaseComponent:UpdateHoverState(bHoveringIn) end


---@class UGizmoBaseFloatParameterSource : UObject
local UGizmoBaseFloatParameterSource = {}


---@class UGizmoBaseTransformSource : UObject
local UGizmoBaseTransformSource = {}


---@class UGizmoBaseVec2ParameterSource : UObject
local UGizmoBaseVec2ParameterSource = {}


---@class UGizmoCircleComponent : UGizmoBaseComponent
---@field Normal FVector
---@field Radius float
---@field Thickness float
---@field NumSides int32
---@field bViewAligned boolean
---@field bOnlyAllowFrontFacingHits boolean
local UGizmoCircleComponent = {}



---@class UGizmoComponentAxisSource : UObject
---@field Component USceneComponent
---@field AxisIndex int32
---@field bLocalAxes boolean
local UGizmoComponentAxisSource = {}



---@class UGizmoComponentHitTarget : UObject
---@field Component UPrimitiveComponent
local UGizmoComponentHitTarget = {}



---@class UGizmoComponentWorldTransformSource : UGizmoBaseTransformSource
---@field Component USceneComponent
---@field bModifyComponentOnTransform boolean
local UGizmoComponentWorldTransformSource = {}



---@class UGizmoConstantAxisSource : UObject
---@field Origin FVector
---@field Direction FVector
local UGizmoConstantAxisSource = {}



---@class UGizmoLambdaHitTarget : UObject
local UGizmoLambdaHitTarget = {}


---@class UGizmoLambdaStateTarget : UObject
local UGizmoLambdaStateTarget = {}


---@class UGizmoLocalFloatParameterSource : UGizmoBaseFloatParameterSource
---@field Value float
---@field LastChange FGizmoFloatParameterChange
local UGizmoLocalFloatParameterSource = {}



---@class UGizmoLocalVec2ParameterSource : UGizmoBaseVec2ParameterSource
---@field Value FVector2D
---@field LastChange FGizmoVec2ParameterChange
local UGizmoLocalVec2ParameterSource = {}



---@class UGizmoNilStateTarget : UObject
local UGizmoNilStateTarget = {}


---@class UGizmoObjectModifyStateTarget : UObject
local UGizmoObjectModifyStateTarget = {}


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
local UGizmoPlaneTranslationParameterSource = {}



---@class UGizmoRectangleComponent : UGizmoBaseComponent
---@field DirectionX FVector
---@field DirectionY FVector
---@field OffsetX float
---@field OffsetY float
---@field LengthX float
---@field LengthY float
---@field Thickness float
local UGizmoRectangleComponent = {}



---@class UGizmoTransformChangeStateTarget : UObject
---@field TransactionManager TScriptInterface<IToolContextTransactionProvider>
local UGizmoTransformChangeStateTarget = {}



---@class UGizmoTransformProxyTransformSource : UGizmoBaseTransformSource
---@field Proxy UTransformProxy
local UGizmoTransformProxyTransformSource = {}



---@class UGizmoWorldAxisSource : UObject
---@field Origin FVector
---@field AxisIndex int32
local UGizmoWorldAxisSource = {}



---@class UInputBehavior : UObject
local UInputBehavior = {}


---@class UInputBehaviorSet : UObject
---@field Behaviors TArray<FBehaviorInfo>
local UInputBehaviorSet = {}



---@class UInputRouter : UObject
---@field bAutoInvalidateOnHover boolean
---@field bAutoInvalidateOnCapture boolean
---@field ActiveInputBehaviors UInputBehaviorSet
local UInputRouter = {}



---@class UInteractiveGizmo : UObject
---@field InputBehaviors UInputBehaviorSet
local UInteractiveGizmo = {}



---@class UInteractiveGizmoBuilder : UObject
local UInteractiveGizmoBuilder = {}


---@class UInteractiveGizmoManager : UObject
---@field ActiveGizmos TArray<FActiveGizmo>
---@field GizmoBuilders TMap<FString, UInteractiveGizmoBuilder>
local UInteractiveGizmoManager = {}



---@class UInteractiveTool : UObject
---@field InputBehaviors UInputBehaviorSet
---@field ToolPropertyObjects TArray<UObject>
local UInteractiveTool = {}



---@class UInteractiveToolBuilder : UObject
local UInteractiveToolBuilder = {}


---@class UInteractiveToolManager : UObject
---@field ActiveLeftTool UInteractiveTool
---@field ActiveRightTool UInteractiveTool
---@field ToolBuilders TMap<FString, UInteractiveToolBuilder>
local UInteractiveToolManager = {}



---@class UInteractiveToolPropertySet : UObject
---@field CachedProperties UObject
local UInteractiveToolPropertySet = {}



---@class UInteractiveToolsContext : UObject
---@field InputRouter UInputRouter
---@field ToolManager UInteractiveToolManager
---@field GizmoManager UInteractiveGizmoManager
local UInteractiveToolsContext = {}



---@class UKeyAsModifierInputBehavior : UInputBehavior
local UKeyAsModifierInputBehavior = {}


---@class UMeshSelectionSet : USelectionSet
---@field Vertices TArray<int32>
---@field Edges TArray<int32>
---@field Faces TArray<int32>
---@field Groups TArray<int32>
local UMeshSelectionSet = {}



---@class UMeshSurfacePointTool : USingleSelectionTool
local UMeshSurfacePointTool = {}


---@class UMeshSurfacePointToolBuilder : UInteractiveToolBuilder
local UMeshSurfacePointToolBuilder = {}


---@class UMeshSurfacePointToolMouseBehavior : UAnyButtonInputBehavior
local UMeshSurfacePointToolMouseBehavior = {}


---@class UMouseHoverBehavior : UInputBehavior
local UMouseHoverBehavior = {}


---@class UMultiClickSequenceInputBehavior : UAnyButtonInputBehavior
local UMultiClickSequenceInputBehavior = {}


---@class UMultiSelectionTool : UInteractiveTool
local UMultiSelectionTool = {}


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
local UPlanePositionGizmo = {}



---@class UPlanePositionGizmoBuilder : UInteractiveGizmoBuilder
local UPlanePositionGizmoBuilder = {}


---@class USelectionSet : UObject
local USelectionSet = {}


---@class USingleClickInputBehavior : UAnyButtonInputBehavior
---@field HitTestOnRelease boolean
local USingleClickInputBehavior = {}



---@class USingleClickTool : UInteractiveTool
local USingleClickTool = {}


---@class USingleClickToolBuilder : UInteractiveToolBuilder
local USingleClickToolBuilder = {}


---@class USingleSelectionTool : UInteractiveTool
local USingleSelectionTool = {}


---@class UTransformGizmo : UInteractiveGizmo
---@field ActiveTarget UTransformProxy
---@field ActiveComponents TArray<UPrimitiveComponent>
---@field ActiveGizmos TArray<UInteractiveGizmo>
---@field AxisXSource UGizmoComponentAxisSource
---@field AxisYSource UGizmoComponentAxisSource
---@field AxisZSource UGizmoComponentAxisSource
---@field StateTarget UGizmoTransformChangeStateTarget
local UTransformGizmo = {}



---@class UTransformGizmoBuilder : UInteractiveGizmoBuilder
local UTransformGizmoBuilder = {}


---@class UTransformProxy : UObject
---@field bRotatePerObject boolean
---@field bSetPivotMode boolean
---@field SharedTransform FTransform
---@field InitialSharedTransform FTransform
local UTransformProxy = {}



