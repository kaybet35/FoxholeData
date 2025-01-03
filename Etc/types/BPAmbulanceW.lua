---@meta

---@class ABPAmbulanceW_C : AAmbulance
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SK_AmbulanceWBody USkeletalMeshComponent
---@field PassengerExit USeatExitComponent
---@field DriverExit0 USeatExitComponent
---@field BackTrigger USeatTriggerComponent
---@field PassengerTrigger USeatTriggerComponent
---@field DriverTrigger USeatTriggerComponent
---@field PassengerSeat1 UVehicleSeatComponent
---@field DriverSeat0 UVehicleSeatComponent
---@field SpotLight_L USpotLightComponent
---@field LightRear_R UPointLightComponent
---@field RearLight_R UStaticMeshComponent
---@field Light_L UStaticMeshComponent
---@field TruckIdle UAudioComponent
---@field Exhaust UParticleSystemComponent
---@field Camera UCameraComponent
ABPAmbulanceW_C = {}

---@param IsOn boolean
function ABPAmbulanceW_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPAmbulanceW_C:ExecuteUbergraph_BPAmbulanceW(EntryPoint) end


