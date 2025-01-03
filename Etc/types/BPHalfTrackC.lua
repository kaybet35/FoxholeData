---@meta

---@class ABPHalfTrackC_C : ABPHalfTrackBaseC_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field GunnerSeat2 UVehicleSeatComponent
---@field MainBodyTop USkeletalMeshComponent
ABPHalfTrackC_C = {}

---@param IsOn boolean
function ABPHalfTrackC_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPHalfTrackC_C:ExecuteUbergraph_BPHalfTrackC(EntryPoint) end


