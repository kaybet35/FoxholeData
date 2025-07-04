---@meta

---@class ABPArmoredCar2TwinW_C : ABPArmoredCarBaseW_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SpotLight_Turret USpotLightComponent
---@field Light_Turret UStaticMeshComponent
---@field LightRear UStaticMeshComponent
---@field LightRearEmitter UPointLightComponent
---@field chassis USkeletalMeshComponent
local ABPArmoredCar2TwinW_C = {}

---@param IsOn boolean
function ABPArmoredCar2TwinW_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPArmoredCar2TwinW_C:ExecuteUbergraph_BPArmoredCar2TwinW(EntryPoint) end


