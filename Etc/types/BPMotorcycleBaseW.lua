---@meta

---@class ABPMotorcycleBaseW_C : ABPMotorcycleBase_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field PassengerSeat1 UVehicleSeatComponent
---@field DriverSeat0 UVehicleSeatComponent
---@field RearPointLight_L UPointLightComponent
---@field RearLight_L UStaticMeshComponent
---@field Light_L UStaticMeshComponent
---@field Exhaust UParticleSystemComponent
---@field SpotLight_L USpotLightComponent
ABPMotorcycleBaseW_C = {}

---@param IsOn boolean
function ABPMotorcycleBaseW_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPMotorcycleBaseW_C:ExecuteUbergraph_BPMotorcycleBaseW(EntryPoint) end


