---@meta

---@class ABPHalfTrackW_C : ABPHalfTrackBaseW_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field LightTop UStaticMeshComponent
---@field SpotLight USpotLightComponent
---@field GunnerSeat2 UVehicleSeatComponent
---@field MainBodyTop USkeletalMeshComponent
ABPHalfTrackW_C = {}

---@param IsOn boolean
function ABPHalfTrackW_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPHalfTrackW_C:ExecuteUbergraph_BPHalfTrackW(EntryPoint) end


