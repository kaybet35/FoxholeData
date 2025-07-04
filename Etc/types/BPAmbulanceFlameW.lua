---@meta

---@class ABPAmbulanceFlameW_C : AScoutVehicle
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Camera UCameraComponent
---@field GunnerSeat2 UVehicleSeatComponent
---@field PassengerTrigger USeatTriggerComponent
---@field DriverTrigger USeatTriggerComponent
---@field PassengerExit USeatExitComponent
---@field DriverExit0 USeatExitComponent
---@field BackTrigger USeatTriggerComponent
---@field PassengerSeat1 UVehicleSeatComponent
---@field DriverSeat0 UVehicleSeatComponent
---@field SpotLight_L USpotLightComponent
---@field LightRear_R UPointLightComponent
---@field RearLight_R UStaticMeshComponent
---@field Light_L UStaticMeshComponent
---@field Exhaust UParticleSystemComponent
---@field BackExit USeatExitComponent
---@field chassis USkeletalMeshComponent
local ABPAmbulanceFlameW_C = {}

---@param IsOn boolean
function ABPAmbulanceFlameW_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPAmbulanceFlameW_C:ExecuteUbergraph_BPAmbulanceFlameW(EntryPoint) end


