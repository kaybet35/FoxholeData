---@meta

---@class ABPRelicMediumTank_C : ABPMediumTankBase_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field GunnerSeat1 UVehicleSeatComponent
---@field DriverSeat0 UVehicleSeatComponent
---@field PassengerSeat6 UVehicleSeatComponent
---@field PassengerSeat5 UVehicleSeatComponent
---@field Passenger6Exit USeatExitComponent
---@field Passenger6Trigger USeatTriggerComponent
---@field Passenger5Trigger USeatTriggerComponent
---@field Passenger5Exit USeatExitComponent
---@field Passenger4Trigger USeatTriggerComponent
---@field Passenger4Exit USeatExitComponent
---@field PassengerSeat4 UVehicleSeatComponent
---@field SpotLightBody2 USpotLightComponent
---@field LightTurret1 UStaticMeshComponent
---@field CommanderSeat3 UVehicleSeatComponent
---@field Gunner2Trigger USeatTriggerComponent
---@field Gunner2Exit USeatExitComponent
---@field GunnerSeat2 UVehicleSeatComponent
---@field LightTurret4 UStaticMeshComponent
---@field LightTurret3 UStaticMeshComponent
---@field LightTurret2 UStaticMeshComponent
local ABPRelicMediumTank_C = {}

---@param IsOn boolean
function ABPRelicMediumTank_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPRelicMediumTank_C:ExecuteUbergraph_BPRelicMediumTank(EntryPoint) end


