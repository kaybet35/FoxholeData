---@meta

---@class ABPHeavyTruckBaseC_C : ABPHeavyTruckBase_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RearLight_R2 UStaticMeshComponent
---@field PointLight_R2 UPointLightComponent
---@field RearLight_R1 UStaticMeshComponent
---@field PointLight_R1 UPointLightComponent
---@field RearLight_L2 UStaticMeshComponent
---@field PointLight_L2 UPointLightComponent
---@field RearLight_L1 UStaticMeshComponent
---@field PointLight_L1 UPointLightComponent
---@field Headlight_L UStaticMeshComponent
---@field Headlight_R UStaticMeshComponent
---@field SpotLight_L USpotLightComponent
---@field SpotLight_R USpotLightComponent
---@field Exhaust_L UParticleSystemComponent
---@field Exhaust_R UParticleSystemComponent
local ABPHeavyTruckBaseC_C = {}

---@param IsOn boolean
function ABPHeavyTruckBaseC_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPHeavyTruckBaseC_C:ExecuteUbergraph_BPHeavyTruckBaseC(EntryPoint) end


