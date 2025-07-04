---@meta

---@class ABPHalfTrackBaseC_C : ABPHalfTrackBase_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RearSeatTrigger6 USeatTriggerComponent
---@field RearSeatTrigger5 USeatTriggerComponent
---@field RearSeatTrigger4 USeatTriggerComponent
---@field RearSeat6 UVehicleSeatComponent
---@field RearSeat5 UVehicleSeatComponent
---@field RearSeat4 UVehicleSeatComponent
---@field RearSeat3 UVehicleSeatComponent
---@field SpotLight_R USpotLightComponent
---@field SpotLight_L USpotLightComponent
---@field Light_L UStaticMeshComponent
---@field Light_R UStaticMeshComponent
local ABPHalfTrackBaseC_C = {}

---@param IsOn boolean
function ABPHalfTrackBaseC_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPHalfTrackBaseC_C:ExecuteUbergraph_BPHalfTrackBaseC(EntryPoint) end


