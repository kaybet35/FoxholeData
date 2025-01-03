---@meta

---@class ABPLightTankBaseW_C : ABPLightTankBase_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field LightTurret UStaticMeshComponent
---@field SpotLight1 USpotLightComponent
---@field Exhaust UParticleSystemComponent
---@field lightR UStaticMeshComponent
---@field SpotLight USpotLightComponent
ABPLightTankBaseW_C = {}

---@param IsOn boolean
function ABPLightTankBaseW_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPLightTankBaseW_C:ExecuteUbergraph_BPLightTankBaseW(EntryPoint) end


