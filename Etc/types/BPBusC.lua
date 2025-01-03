---@meta

---@class ABPBusC_C : ARelicBus
---@field UberGraphFrame FPointerToUberGraphFrame
---@field PassengerSeat11 UVehicleSeatComponent
---@field PassengerSeat10 UVehicleSeatComponent
---@field PassengerSeat9 UVehicleSeatComponent
---@field PassengerSeat8 UVehicleSeatComponent
---@field PassengerSeat7 UVehicleSeatComponent
---@field PassengerSeat6 UVehicleSeatComponent
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
---@field Rear_L UStaticMeshComponent
---@field Rear_R UStaticMeshComponent
---@field Headlight_R USpotLightComponent
---@field Headlight_L USpotLightComponent
---@field Light_L UStaticMeshComponent
---@field Light_R UStaticMeshComponent
---@field BusIdle UAudioComponent
---@field Exhaust UParticleSystemComponent
---@field Camera UCameraComponent
ABPBusC_C = {}

---@param IsOn boolean
function ABPBusC_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPBusC_C:ExecuteUbergraph_BPBusC(EntryPoint) end


