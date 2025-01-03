---@meta

---@class ABPHeavyTruckBaseW_C : ABPHeavyTruckBase_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RearLight UStaticMeshComponent
---@field Exhaust_L UParticleSystemComponent
---@field PointLight UPointLightComponent
---@field SpotLight_R USpotLightComponent
---@field Headlight_R UStaticMeshComponent
ABPHeavyTruckBaseW_C = {}

---@param IsOn boolean
function ABPHeavyTruckBaseW_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPHeavyTruckBaseW_C:ExecuteUbergraph_BPHeavyTruckBaseW(EntryPoint) end


