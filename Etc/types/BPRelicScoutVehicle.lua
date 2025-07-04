---@meta

---@class ABPRelicScoutVehicle_C : AScoutVehicle
---@field UberGraphFrame FPointerToUberGraphFrame
---@field PassengerSeat1 UVehicleSeatComponent
---@field DriverSeat0 UVehicleSeatComponent
---@field PassengerExit USeatExitComponent
---@field DriverExit0 USeatExitComponent
---@field PassengerTrigger USeatTriggerComponent
---@field DriverTrigger USeatTriggerComponent
---@field Exhaust UParticleSystemComponent
---@field SpotLight_R USpotLightComponent
---@field Headlight_R UStaticMeshComponent
---@field Headlight_L UStaticMeshComponent
---@field SpotLight_L USpotLightComponent
---@field Camera UCameraComponent
local ABPRelicScoutVehicle_C = {}

---@param IsOn boolean
function ABPRelicScoutVehicle_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPRelicScoutVehicle_C:ExecuteUbergraph_BPRelicScoutVehicle(EntryPoint) end


