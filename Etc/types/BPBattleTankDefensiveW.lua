---@meta

---@class ABPBattleTankDefensiveW_C : ABPBattleTankBaseW_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SpotLight_Turret USpotLightComponent
---@field Light_Turret UStaticMeshComponent
---@field SpotLight_R USpotLightComponent
---@field Light_R UStaticMeshComponent
ABPBattleTankDefensiveW_C = {}

---@param IsOn boolean
function ABPBattleTankDefensiveW_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPBattleTankDefensiveW_C:ExecuteUbergraph_BPBattleTankDefensiveW(EntryPoint) end


