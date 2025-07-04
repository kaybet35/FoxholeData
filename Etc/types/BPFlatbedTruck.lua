---@meta

---@class ABPFlatbedTruck_C : AFlatbedTruck
---@field UberGraphFrame FPointerToUberGraphFrame
---@field PassengerSeat1 UVehicleSeatComponent
---@field DriverSeat0 UVehicleSeatComponent
---@field PassengerExit USeatExitComponent
---@field DriverExit0 USeatExitComponent
---@field PassengerTrigger USeatTriggerComponent
---@field DriverTrigger USeatTriggerComponent
---@field SpotLight_L USpotLightComponent
---@field SpotLight_R USpotLightComponent
---@field Light_L UStaticMeshComponent
---@field Light_R UStaticMeshComponent
---@field Exhaust UParticleSystemComponent
---@field TruckIdle UAudioComponent
---@field Camera UCameraComponent
local ABPFlatbedTruck_C = {}

---@param IsOn boolean
function ABPFlatbedTruck_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPFlatbedTruck_C:ExecuteUbergraph_BPFlatbedTruck(EntryPoint) end


