---@meta

---@class ABPMortarTankC_C : ABPMortarTankBase_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CommanderSeat2 UVehicleSeatComponent
---@field chassis USkeletalMeshComponent
---@field Exhaust UParticleSystemComponent
---@field Camera UCameraComponent
ABPMortarTankC_C = {}

---@param IsOn boolean
function ABPMortarTankC_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPMortarTankC_C:ExecuteUbergraph_BPMortarTankC(EntryPoint) end


