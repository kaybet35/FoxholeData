---@meta

---@class ABPAmbulanceC_C : AAmbulance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field chassis USkeletalMeshComponent
---@field PassengerSeat1 UVehicleSeatComponent
---@field DriverSeat0 UVehicleSeatComponent
---@field PassengerExit USeatExitComponent
---@field DriverExit0 USeatExitComponent
---@field BackTrigger USeatTriggerComponent
---@field PassengerTrigger USeatTriggerComponent
---@field DriverTrigger USeatTriggerComponent
---@field SpotLight_L USpotLightComponent
---@field SpotLight_R USpotLightComponent
---@field LightRear_L UPointLightComponent
---@field LightRear_R UPointLightComponent
---@field RearLight_L UStaticMeshComponent
---@field RearLight_R UStaticMeshComponent
---@field Light_L UStaticMeshComponent
---@field Light_R UStaticMeshComponent
---@field TruckIdle UAudioComponent
---@field Exhaust UParticleSystemComponent
---@field Camera UCameraComponent
local ABPAmbulanceC_C = {}

---@param IsOn boolean
function ABPAmbulanceC_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPAmbulanceC_C:ExecuteUbergraph_BPAmbulanceC(EntryPoint) end


