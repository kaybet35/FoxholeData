---@meta

---@class ABPLargeCrane_C : ARailVehicleCrane
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Exhaust UParticleSystemComponent
---@field RightLegWheelCollision UBoxComponent
---@field LeftLegWheelCollision UBoxComponent
---@field LeftLegCollision UBoxComponent
---@field RightLegCollision UBoxComponent
---@field PassengerExit USeatExitComponent
---@field DriverExit USeatExitComponent
---@field PassengerTrigger USeatTriggerComponent
---@field PassengerSeat1 UVehicleSeatComponent
---@field DriverTrigger USeatTriggerComponent
---@field Camera UCameraComponent
---@field DriverSeat0 UVehicleSeatComponent
local ABPLargeCrane_C = {}

---@param IsOn boolean
function ABPLargeCrane_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPLargeCrane_C:ExecuteUbergraph_BPLargeCrane(EntryPoint) end


