---@meta

---@class ABPScoutVehicleUtilityW_C : AAmphibiousVehicle
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Exhaust UParticleSystemComponent
---@field BPWaterStencilComponent UBPWaterStencilComponent_C
---@field Camera UCameraComponent
---@field PassengerSeat3 UVehicleSeatComponent
---@field PassengerSeat2 UVehicleSeatComponent
---@field PassengerExit3 USeatExitComponent
---@field PassengerTrigger3 USeatTriggerComponent
---@field PassengerTrigger2 USeatTriggerComponent
---@field PassengerExit2 USeatExitComponent
---@field DriverExit USeatExitComponent
---@field PassengerTrigger1 USeatTriggerComponent
---@field DriverTrigger USeatTriggerComponent
---@field PassengerExit1 USeatExitComponent
---@field PassengerSeat1 UVehicleSeatComponent
---@field DriverSeat0 UVehicleSeatComponent
---@field SpotLight_R USpotLightComponent
---@field Light_R UStaticMeshComponent
ABPScoutVehicleUtilityW_C = {}

---@param IsOn boolean
function ABPScoutVehicleUtilityW_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPScoutVehicleUtilityW_C:ExecuteUbergraph_BPScoutVehicleUtilityW(EntryPoint) end


