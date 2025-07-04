---@meta

---@class ABPHalfTrackDefensiveC_C : ABPHalfTrackBaseC_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field TowHitchUse UTowHitchUseComponent
---@field GunnerSeat2 UVehicleSeatComponent
---@field MainBodyTop USkeletalMeshComponent
local ABPHalfTrackDefensiveC_C = {}

---@param IsOn boolean
function ABPHalfTrackDefensiveC_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPHalfTrackDefensiveC_C:ExecuteUbergraph_BPHalfTrackDefensiveC(EntryPoint) end


