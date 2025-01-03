---@meta

---@class ABPLandingShipBaseC_C : ABPLandingShipBase_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Passenger1Exit USeatExitComponent
---@field NoVehicleVolume UBoxComponent
---@field Exhaust2 UParticleSystemComponent
---@field Exhaust1 UParticleSystemComponent
---@field PassengerSeat1 UVehicleSeatComponent
---@field DriverSeat0 UVehicleSeatComponent
---@field PassengerTrigger USeatTriggerComponent
ABPLandingShipBaseC_C = {}

---@param IsOn boolean
function ABPLandingShipBaseC_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPLandingShipBaseC_C:ExecuteUbergraph_BPLandingShipBaseC(EntryPoint) end


