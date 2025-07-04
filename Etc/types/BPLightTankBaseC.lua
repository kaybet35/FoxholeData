---@meta

---@class ABPLightTankBaseC_C : ABPLightTankBase_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field GunnerSeat1 UVehicleSeatComponent
---@field LightTurret UStaticMeshComponent
---@field SpotLight2 USpotLightComponent
---@field Exhaust UParticleSystemComponent
---@field lightL UStaticMeshComponent
---@field lightR UStaticMeshComponent
---@field SpotLight USpotLightComponent
---@field SpotLight1 USpotLightComponent
local ABPLightTankBaseC_C = {}

---@param IsOn boolean
function ABPLightTankBaseC_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPLightTankBaseC_C:ExecuteUbergraph_BPLightTankBaseC(EntryPoint) end


