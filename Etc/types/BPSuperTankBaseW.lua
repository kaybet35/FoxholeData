---@meta

---@class ABPSuperTankBaseW_C : ABPSuperTankBase_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field chassis USkeletalMeshComponent
---@field ExhaustR UParticleSystemComponent
---@field Gunner2Exit USeatExitComponent
---@field Gunner2Trigger USeatTriggerComponent
---@field GunnerSeat2 UVehicleSeatComponent
local ABPSuperTankBaseW_C = {}

---@param IsOn boolean
function ABPSuperTankBaseW_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPSuperTankBaseW_C:ExecuteUbergraph_BPSuperTankBaseW(EntryPoint) end


