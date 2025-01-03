---@meta

---@class ABPScoutTankW_C : AScoutTankWBase_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field chassis USkeletalMeshComponent
ABPScoutTankW_C = {}

---@param IsOn boolean
function ABPScoutTankW_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPScoutTankW_C:ExecuteUbergraph_BPScoutTankW(EntryPoint) end


