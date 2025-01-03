---@meta

---@class ABPMotorcycleBaseC_C : ABPMotorcycleBase_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field PassengerSeat1 UVehicleSeatComponent
---@field DriverSeat0 UVehicleSeatComponent
---@field RearPointLight_L UPointLightComponent
---@field RearLight_L UStaticMeshComponent
---@field Light_L UStaticMeshComponent
---@field Light_R UStaticMeshComponent
---@field Exhaust UParticleSystemComponent
---@field SpotLight_R USpotLightComponent
---@field SpotLight_L USpotLightComponent
ABPMotorcycleBaseC_C = {}

---@param IsOn boolean
function ABPMotorcycleBaseC_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPMotorcycleBaseC_C:ExecuteUbergraph_BPMotorcycleBaseC(EntryPoint) end


