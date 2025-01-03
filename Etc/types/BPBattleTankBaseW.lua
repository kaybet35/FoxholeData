---@meta

---@class ABPBattleTankBaseW_C : ABattleTankBase_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field mainBody USkeletalMeshComponent
---@field ExhaustRight UParticleSystemComponent
---@field ExhaustLeft UParticleSystemComponent
ABPBattleTankBaseW_C = {}

---@param IsOn boolean
function ABPBattleTankBaseW_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPBattleTankBaseW_C:ExecuteUbergraph_BPBattleTankBaseW(EntryPoint) end


