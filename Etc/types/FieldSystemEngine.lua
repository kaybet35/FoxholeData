---@meta

---@class AFieldSystemActor : AActor
---@field FieldSystemComponent UFieldSystemComponent
local AFieldSystemActor = {}



---@class UBoxFalloff : UFieldNodeFloat
---@field Magnitude float
---@field MinRange float
---@field MaxRange float
---@field Default float
---@field Transform FTransform
---@field Falloff EFieldFalloffType
local UBoxFalloff = {}

---@param Magnitude float
---@param MinRange float
---@param MaxRange float
---@param Default float
---@param Transform FTransform
---@param Falloff EFieldFalloffType
---@return UBoxFalloff
function UBoxFalloff:SetBoxFalloff(Magnitude, MinRange, MaxRange, Default, Transform, Falloff) end


---@class UCullingField : UFieldNodeBase
---@field Culling UFieldNodeBase
---@field Field UFieldNodeBase
---@field Operation EFieldCullingOperationType
local UCullingField = {}

---@param Culling UFieldNodeBase
---@param Field UFieldNodeBase
---@param Operation EFieldCullingOperationType
---@return UCullingField
function UCullingField:SetCullingField(Culling, Field, Operation) end


---@class UFieldNodeBase : UActorComponent
local UFieldNodeBase = {}


---@class UFieldNodeFloat : UFieldNodeBase
local UFieldNodeFloat = {}


---@class UFieldNodeInt : UFieldNodeBase
local UFieldNodeInt = {}


---@class UFieldNodeVector : UFieldNodeBase
local UFieldNodeVector = {}


---@class UFieldSystem : UObject
local UFieldSystem = {}


---@class UFieldSystemComponent : UPrimitiveComponent
---@field FieldSystem UFieldSystem
---@field SupportedSolvers TArray<TSoftObjectPtr<AChaosSolverActor>>
local UFieldSystemComponent = {}

function UFieldSystemComponent:ResetFieldSystem() end
---@param Enabled boolean
---@param Position FVector
---@param Direction FVector
---@param Radius float
---@param Magnitude float
function UFieldSystemComponent:ApplyUniformVectorFalloffForce(Enabled, Position, Direction, Radius, Magnitude) end
---@param Enabled boolean
---@param Position FVector
---@param Radius float
---@param Magnitude float
---@param Iterations int32
function UFieldSystemComponent:ApplyStrainField(Enabled, Position, Radius, Magnitude, Iterations) end
---@param Enabled boolean
---@param Position FVector
---@param Radius float
function UFieldSystemComponent:ApplyStayDynamicField(Enabled, Position, Radius) end
---@param Enabled boolean
---@param Position FVector
---@param Radius float
---@param Magnitude float
function UFieldSystemComponent:ApplyRadialVectorFalloffForce(Enabled, Position, Radius, Magnitude) end
---@param Enabled boolean
---@param Position FVector
---@param Magnitude float
function UFieldSystemComponent:ApplyRadialForce(Enabled, Position, Magnitude) end
---@param Enabled boolean
---@param Target EFieldPhysicsType
---@param MetaData UFieldSystemMetaData
---@param Field UFieldNodeBase
function UFieldSystemComponent:ApplyPhysicsField(Enabled, Target, MetaData, Field) end
---@param Enabled boolean
---@param Direction FVector
---@param Magnitude float
function UFieldSystemComponent:ApplyLinearForce(Enabled, Direction, Magnitude) end
---@param Enabled boolean
---@param Target EFieldPhysicsType
---@param MetaData UFieldSystemMetaData
---@param Field UFieldNodeBase
function UFieldSystemComponent:AddFieldCommand(Enabled, Target, MetaData, Field) end


---@class UFieldSystemMetaData : UActorComponent
local UFieldSystemMetaData = {}


---@class UFieldSystemMetaDataIteration : UFieldSystemMetaData
---@field Iterations int32
local UFieldSystemMetaDataIteration = {}

---@param Iterations int32
---@return UFieldSystemMetaDataIteration
function UFieldSystemMetaDataIteration:SetMetaDataIteration(Iterations) end


---@class UFieldSystemMetaDataProcessingResolution : UFieldSystemMetaData
---@field ResolutionType EFieldResolutionType
local UFieldSystemMetaDataProcessingResolution = {}

---@param ResolutionType EFieldResolutionType
---@return UFieldSystemMetaDataProcessingResolution
function UFieldSystemMetaDataProcessingResolution:SetMetaDataaProcessingResolutionType(ResolutionType) end


---@class UNoiseField : UFieldNodeFloat
---@field MinRange float
---@field MaxRange float
---@field Transform FTransform
local UNoiseField = {}

---@param MinRange float
---@param MaxRange float
---@param Transform FTransform
---@return UNoiseField
function UNoiseField:SetNoiseField(MinRange, MaxRange, Transform) end


---@class UOperatorField : UFieldNodeBase
---@field Magnitude float
---@field RightField UFieldNodeBase
---@field LeftField UFieldNodeBase
---@field Operation EFieldOperationType
local UOperatorField = {}

---@param Magnitude float
---@param RightField UFieldNodeBase
---@param LeftField UFieldNodeBase
---@param Operation EFieldOperationType
---@return UOperatorField
function UOperatorField:SetOperatorField(Magnitude, RightField, LeftField, Operation) end


---@class UPlaneFalloff : UFieldNodeFloat
---@field Magnitude float
---@field MinRange float
---@field MaxRange float
---@field Default float
---@field Distance float
---@field Position FVector
---@field Normal FVector
---@field Falloff EFieldFalloffType
local UPlaneFalloff = {}

---@param Magnitude float
---@param MinRange float
---@param MaxRange float
---@param Default float
---@param Distance float
---@param Position FVector
---@param Normal FVector
---@param Falloff EFieldFalloffType
---@return UPlaneFalloff
function UPlaneFalloff:SetPlaneFalloff(Magnitude, MinRange, MaxRange, Default, Distance, Position, Normal, Falloff) end


---@class URadialFalloff : UFieldNodeFloat
---@field Magnitude float
---@field MinRange float
---@field MaxRange float
---@field Default float
---@field Radius float
---@field Position FVector
---@field Falloff EFieldFalloffType
local URadialFalloff = {}

---@param Magnitude float
---@param MinRange float
---@param MaxRange float
---@param Default float
---@param Radius float
---@param Position FVector
---@param Falloff EFieldFalloffType
---@return URadialFalloff
function URadialFalloff:SetRadialFalloff(Magnitude, MinRange, MaxRange, Default, Radius, Position, Falloff) end


---@class URadialIntMask : UFieldNodeInt
---@field Radius float
---@field Position FVector
---@field InteriorValue int32
---@field ExteriorValue int32
---@field SetMaskCondition ESetMaskConditionType
local URadialIntMask = {}

---@param Radius float
---@param Position FVector
---@param InteriorValue int32
---@param ExteriorValue int32
---@param SetMaskConditionIn ESetMaskConditionType
---@return URadialIntMask
function URadialIntMask:SetRadialIntMask(Radius, Position, InteriorValue, ExteriorValue, SetMaskConditionIn) end


---@class URadialVector : UFieldNodeVector
---@field Magnitude float
---@field Position FVector
local URadialVector = {}

---@param Magnitude float
---@param Position FVector
---@return URadialVector
function URadialVector:SetRadialVector(Magnitude, Position) end


---@class URandomVector : UFieldNodeVector
---@field Magnitude float
local URandomVector = {}

---@param Magnitude float
---@return URandomVector
function URandomVector:SetRandomVector(Magnitude) end


---@class UReturnResultsTerminal : UFieldNodeBase
local UReturnResultsTerminal = {}

---@return UReturnResultsTerminal
function UReturnResultsTerminal:SetReturnResultsTerminal() end


---@class UToFloatField : UFieldNodeFloat
---@field IntField UFieldNodeInt
local UToFloatField = {}

---@param IntegerField UFieldNodeInt
---@return UToFloatField
function UToFloatField:SetToFloatField(IntegerField) end


---@class UToIntegerField : UFieldNodeInt
---@field FloatField UFieldNodeFloat
local UToIntegerField = {}

---@param FloatField UFieldNodeFloat
---@return UToIntegerField
function UToIntegerField:SetToIntegerField(FloatField) end


---@class UUniformInteger : UFieldNodeInt
---@field Magnitude int32
local UUniformInteger = {}

---@param Magnitude int32
---@return UUniformInteger
function UUniformInteger:SetUniformInteger(Magnitude) end


---@class UUniformScalar : UFieldNodeFloat
---@field Magnitude float
local UUniformScalar = {}

---@param Magnitude float
---@return UUniformScalar
function UUniformScalar:SetUniformScalar(Magnitude) end


---@class UUniformVector : UFieldNodeVector
---@field Magnitude float
---@field Direction FVector
local UUniformVector = {}

---@param Magnitude float
---@param Direction FVector
---@return UUniformVector
function UUniformVector:SetUniformVector(Magnitude, Direction) end


