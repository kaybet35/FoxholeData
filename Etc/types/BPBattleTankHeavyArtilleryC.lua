---@meta

---@class ABPBattleTankHeavyArtilleryC_C : ABattleTankATCBase_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field PassengerSeat6 UVehicleSeatComponent
---@field PassengerSeat5 UVehicleSeatComponent
---@field PassengerSeat4 UVehicleSeatComponent
---@field PassengerSeat3 UVehicleSeatComponent
---@field PassengerExitRight USeatExitComponent
---@field PassengerTriggerRight USeatTriggerComponent
ABPBattleTankHeavyArtilleryC_C = {}

---@param IsOn boolean
function ABPBattleTankHeavyArtilleryC_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPBattleTankHeavyArtilleryC_C:ExecuteUbergraph_BPBattleTankHeavyArtilleryC(EntryPoint) end


