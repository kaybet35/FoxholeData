---@meta

---@class ABPHalfTrackBaseW_C : ABPHalfTrackBase_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RearSeatTrigger6 USeatTriggerComponent
---@field RearSeatTrigger5 USeatTriggerComponent
---@field RearSeatTrigger4 USeatTriggerComponent
---@field RearSeat6 UVehicleSeatComponent
---@field RearSeat5 UVehicleSeatComponent
---@field RearSeat4 UVehicleSeatComponent
---@field RearSeat3 UVehicleSeatComponent
---@field mainBody UStaticMeshComponent
---@field SpotLight_R USpotLightComponent
---@field Light_R UStaticMeshComponent
ABPHalfTrackBaseW_C = {}

---@param IsOn boolean
function ABPHalfTrackBaseW_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPHalfTrackBaseW_C:ExecuteUbergraph_BPHalfTrackBaseW(EntryPoint) end


