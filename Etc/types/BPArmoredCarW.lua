---@meta

---@class ABPArmoredCarW_C : ABPArmoredCarBaseW_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SpotLight_Turret USpotLightComponent
---@field Light_Turret UStaticMeshComponent
ABPArmoredCarW_C = {}

---@param IsOn boolean
function ABPArmoredCarW_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPArmoredCarW_C:ExecuteUbergraph_BPArmoredCarW(EntryPoint) end


