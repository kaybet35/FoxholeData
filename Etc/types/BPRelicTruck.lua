---@meta

---@class ABPRelicTruck_C : ATransportTruck
---@field UberGraphFrame FPointerToUberGraphFrame
---@field PassengerSeat5 UVehicleSeatComponent
---@field PassengerSeat4 UVehicleSeatComponent
---@field PassengerSeat3 UVehicleSeatComponent
---@field PassengerSeat2 UVehicleSeatComponent
---@field PassengerSeat1 UVehicleSeatComponent
---@field DriverSeat0 UVehicleSeatComponent
---@field BackExit USeatExitComponent
---@field PassengerExit USeatExitComponent
---@field DriverExit0 USeatExitComponent
---@field BackTrigger USeatTriggerComponent
---@field PassengerTrigger USeatTriggerComponent
---@field DriverTrigger USeatTriggerComponent
---@field Light_L UStaticMeshComponent
---@field Light_R UStaticMeshComponent
---@field SpotLight2 USpotLightComponent
---@field SpotLight USpotLightComponent
---@field TruckIdle UAudioComponent
---@field Exhaust UParticleSystemComponent
---@field destroyedps UParticleSystemComponent
---@field Camera UCameraComponent
ABPRelicTruck_C = {}

---@param IsOn boolean
function ABPRelicTruck_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPRelicTruck_C:ExecuteUbergraph_BPRelicTruck(EntryPoint) end


