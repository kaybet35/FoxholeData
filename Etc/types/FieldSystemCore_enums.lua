---@enum EFieldCullingOperationType
local EFieldCullingOperationType = {
    Field_Culling_Inside = 0,
    Field_Culling_Outside = 1,
    Field_Culling_Operation_Max = 2,
    Field_Culling_MAX = 3,
}

---@enum EFieldFalloffType
local EFieldFalloffType = {
    Field_FallOff_None = 0,
    Field_Falloff_Linear = 1,
    Field_Falloff_Inverse = 2,
    Field_Falloff_Squared = 3,
    Field_Falloff_Logarithmic = 4,
    Field_Falloff_Max = 5,
}

---@enum EFieldOperationType
local EFieldOperationType = {
    Field_Multiply = 0,
    Field_Divide = 1,
    Field_Add = 2,
    Field_Substract = 3,
    Field_Operation_Max = 4,
}

---@enum EFieldPhysicsDefaultFields
local EFieldPhysicsDefaultFields = {
    Field_RadialIntMask = 0,
    Field_RadialFalloff = 1,
    Field_UniformVector = 2,
    Field_RadialVector = 3,
    Field_RadialVectorFalloff = 4,
    Field_EFieldPhysicsDefaultFields_Max = 5,
    Field_MAX = 6,
}

---@enum EFieldPhysicsType
local EFieldPhysicsType = {
    Field_None = 0,
    Field_DynamicState = 1,
    Field_LinearForce = 2,
    Field_ExternalClusterStrain = 3,
    Field_Kill = 4,
    Field_LinearVelocity = 5,
    Field_AngularVelociy = 6,
    Field_AngularTorque = 7,
    Field_InternalClusterStrain = 8,
    Field_DisableThreshold = 9,
    Field_SleepingThreshold = 10,
    Field_PositionStatic = 11,
    Field_PositionAnimated = 12,
    Field_PositionTarget = 13,
    Field_DynamicConstraint = 14,
    Field_CollisionGroup = 15,
    Field_ActivateDisabled = 16,
    Field_PhysicsType_Max = 17,
}

---@enum EFieldResolutionType
local EFieldResolutionType = {
    Field_Resolution_Minimal = 0,
    Field_Resolution_DisabledParents = 1,
    Field_Resolution_Maximum = 2,
    Field_Resolution_Max = 3,
}

---@enum ESetMaskConditionType
local ESetMaskConditionType = {
    Field_Set_Always = 0,
    Field_Set_IFF_NOT_Interior = 1,
    Field_Set_IFF_NOT_Exterior = 2,
    Field_MaskCondition_Max = 3,
}

