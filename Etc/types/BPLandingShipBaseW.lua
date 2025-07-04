---@meta

---@class ABPLandingShipBaseW_C : ABPLandingShipBase_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field NoVehicleVolume UBoxComponent
---@field DriverSeat0 UVehicleSeatComponent
---@field Exhaust1 UParticleSystemComponent
local ABPLandingShipBaseW_C = {}

---@param IsOn boolean
function ABPLandingShipBaseW_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPLandingShipBaseW_C:ExecuteUbergraph_BPLandingShipBaseW(EntryPoint) end


