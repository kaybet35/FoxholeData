---@meta

---@class ABPMediumTank2BaseW_C : ABPMediumTankBase_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field GunnerSeat1 UVehicleSeatComponent
---@field DriverSeat0 UVehicleSeatComponent
---@field chassis USkeletalMeshComponent
local ABPMediumTank2BaseW_C = {}

---@param IsOn boolean
function ABPMediumTank2BaseW_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPMediumTank2BaseW_C:ExecuteUbergraph_BPMediumTank2BaseW(EntryPoint) end


