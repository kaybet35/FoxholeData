---@meta

---@class ABPHalfTrackOffensiveW_C : ABPHalfTrackBaseW_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field LightTop UStaticMeshComponent
---@field SpotLight USpotLightComponent
---@field GunnerSeat2 UVehicleSeatComponent
---@field MainBodyTop USkeletalMeshComponent
ABPHalfTrackOffensiveW_C = {}

---@param IsOn boolean
function ABPHalfTrackOffensiveW_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPHalfTrackOffensiveW_C:ExecuteUbergraph_BPHalfTrackOffensiveW(EntryPoint) end


