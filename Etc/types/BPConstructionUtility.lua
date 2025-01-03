---@meta

---@class ABPConstructionUtility_C : AConstructionVehicle
---@field UberGraphFrame FPointerToUberGraphFrame
---@field FrontLight UStaticMeshComponent
---@field SpotLight USpotLightComponent
---@field PassengerSeat1 UVehicleSeatComponent
---@field DriverSeat0 UVehicleSeatComponent
---@field PassengerExit USeatExitComponent
---@field DriverExit USeatExitComponent
---@field PassengerTrigger USeatTriggerComponent
---@field DriverTrigger USeatTriggerComponent
---@field Camera UCameraComponent
ABPConstructionUtility_C = {}

---@param IsOn boolean
function ABPConstructionUtility_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPConstructionUtility_C:ExecuteUbergraph_BPConstructionUtility(EntryPoint) end


