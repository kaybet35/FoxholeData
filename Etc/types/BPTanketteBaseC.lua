---@meta

---@class ABPTanketteBaseC_C : AArmoredCar
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Camera1 UCameraComponent
---@field SpotLight_R USpotLightComponent
---@field Light_R UStaticMeshComponent
---@field Exhaust UParticleSystemComponent
---@field Light_L UStaticMeshComponent
---@field SpotLight_L USpotLightComponent
---@field DriverExit USeatExitComponent
---@field DriverTrigger USeatTriggerComponent
---@field DriverSeat0 UVehicleSeatComponent
local ABPTanketteBaseC_C = {}

---@param IsOn boolean
function ABPTanketteBaseC_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPTanketteBaseC_C:ExecuteUbergraph_BPTanketteBaseC(EntryPoint) end


