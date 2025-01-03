---@meta

---@class ABPConstruction_C : AConstructionVehicle
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SpotLight USpotLightComponent
---@field FrontLight UStaticMeshComponent
---@field PassengerSeat1 UVehicleSeatComponent
---@field DriverSeat0 UVehicleSeatComponent
---@field PassengerExit USeatExitComponent
---@field DriverExit USeatExitComponent
---@field PassengerTrigger USeatTriggerComponent
---@field DriverTrigger USeatTriggerComponent
---@field Camera UCameraComponent
ABPConstruction_C = {}

---@param IsOn boolean
function ABPConstruction_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPConstruction_C:ExecuteUbergraph_BPConstruction(EntryPoint) end


