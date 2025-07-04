---@meta

---@class ABPLightTank2InfantryC_C : ABPMortarTankBase_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Passenger4Exit USeatExitComponent
---@field Passenger4Trigger USeatTriggerComponent
---@field PassengerSeat4 UVehicleSeatComponent
---@field Passenger3Exit USeatExitComponent
---@field Passenger3Trigger USeatTriggerComponent
---@field PassengerSeat3 UVehicleSeatComponent
---@field Gunner2Exit USeatExitComponent
---@field Gunner2Trigger USeatTriggerComponent
---@field GunnerSeat2 UVehicleSeatComponent
---@field chassis USkeletalMeshComponent
---@field Exhaust UParticleSystemComponent
---@field Camera UCameraComponent
local ABPLightTank2InfantryC_C = {}

---@param IsOn boolean
function ABPLightTank2InfantryC_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPLightTank2InfantryC_C:ExecuteUbergraph_BPLightTank2InfantryC(EntryPoint) end


