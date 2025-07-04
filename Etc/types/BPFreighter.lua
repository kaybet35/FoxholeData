---@meta

---@class ABPFreighter_C : AFreighter
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SpotLight_L USpotLightComponent
---@field Headlight_R UStaticMeshComponent
---@field SpotLight_R USpotLightComponent
---@field Headlight_L UStaticMeshComponent
---@field Exhaust3 UParticleSystemComponent
---@field Exhaust2 UParticleSystemComponent
---@field Exhaust1 UParticleSystemComponent
---@field Exhaust UParticleSystemComponent
---@field Passenger2Exit USeatExitComponent
---@field Passenger2Trigger USeatTriggerComponent
---@field PassengerSeat2 UVehicleSeatComponent
---@field NoWalkArea UBoxComponent
---@field SideLeft UParticleSystemComponent
---@field SideRight UParticleSystemComponent
---@field WakeFore UParticleSystemComponent
---@field BPWaterStencilComponent UBPWaterStencilComponent_C
---@field PassengerSeat1 UVehicleSeatComponent
---@field DriverSeat0 UVehicleSeatComponent
---@field PassengerExit USeatExitComponent
---@field DriverExit0 USeatExitComponent
---@field PassengerTrigger USeatTriggerComponent
---@field DriverTrigger USeatTriggerComponent
---@field IdleSFXLoop UAudioComponent
---@field WorkVolume UBoxComponent
---@field Camera UCameraComponent
local ABPFreighter_C = {}

---@param IsOn boolean
function ABPFreighter_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPFreighter_C:ExecuteUbergraph_BPFreighter(EntryPoint) end


