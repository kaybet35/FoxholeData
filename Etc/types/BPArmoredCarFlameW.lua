---@meta

---@class ABPArmoredCarFlameW_C : ABPArmoredCarBaseW_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SpotLight_Turret USpotLightComponent
---@field Light_Turret UStaticMeshComponent
---@field chassis USkeletalMeshComponent
local ABPArmoredCarFlameW_C = {}

---@param IsOn boolean
function ABPArmoredCarFlameW_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPArmoredCarFlameW_C:ExecuteUbergraph_BPArmoredCarFlameW(EntryPoint) end


