---@meta

---@class ABPAmbulanceFlameC_C : AScoutVehicle
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
---@field SpotLight_R USpotLightComponent
---@field LightRear_L UPointLightComponent
---@field LightRear_R UPointLightComponent
---@field RearLight_L UStaticMeshComponent
---@field RearLight_R UStaticMeshComponent
---@field Light_L UStaticMeshComponent
---@field Light_R UStaticMeshComponent
---@field Exhaust UParticleSystemComponent
---@field BackExit USeatExitComponent
---@field chassis USkeletalMeshComponent
local ABPAmbulanceFlameC_C = {}

---@param IsOn boolean
function ABPAmbulanceFlameC_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPAmbulanceFlameC_C:ExecuteUbergraph_BPAmbulanceFlameC(EntryPoint) end


