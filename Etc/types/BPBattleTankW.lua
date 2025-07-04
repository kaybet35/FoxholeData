---@meta

---@class ABPBattleTankW_C : ABPBattleTankBaseW_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SpotLight_Turret USpotLightComponent
---@field Light_Turret UStaticMeshComponent
---@field SpotLight_R USpotLightComponent
---@field Light_R UStaticMeshComponent
local ABPBattleTankW_C = {}

---@param IsOn boolean
function ABPBattleTankW_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPBattleTankW_C:ExecuteUbergraph_BPBattleTankW(EntryPoint) end


