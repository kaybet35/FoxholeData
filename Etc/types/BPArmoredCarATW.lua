---@meta

---@class ABPArmoredCarATW_C : ABPArmoredCarBaseW_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field chassis USkeletalMeshComponent
ABPArmoredCarATW_C = {}

---@param IsOn boolean
function ABPArmoredCarATW_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPArmoredCarATW_C:ExecuteUbergraph_BPArmoredCarATW(EntryPoint) end

