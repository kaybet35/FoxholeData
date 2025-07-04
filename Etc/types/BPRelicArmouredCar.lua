---@meta

---@class ABPRelicArmouredCar_C : AArmoredCar
---@field UberGraphFrame FPointerToUberGraphFrame
---@field TowHitchUse UTowHitchUseComponent
---@field GunnerSeat1 UVehicleSeatComponent
---@field DriverSeat0 UVehicleSeatComponent
---@field GunnerExit USeatExitComponent
---@field DriverExit0 USeatExitComponent
---@field GunnerTrigger USeatTriggerComponent
---@field DriverTrigger USeatTriggerComponent
---@field Light_Turret UStaticMeshComponent
---@field SpotLight_Turret USpotLightComponent
---@field SpotLight_R USpotLightComponent
---@field Light_R UStaticMeshComponent
---@field SpotLight_L USpotLightComponent
---@field Light_L UStaticMeshComponent
---@field Exhaust UParticleSystemComponent
---@field VehicleIdle UAudioComponent
---@field Camera UCameraComponent
local ABPRelicArmouredCar_C = {}

---@param IsOn boolean
function ABPRelicArmouredCar_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPRelicArmouredCar_C:ExecuteUbergraph_BPRelicArmouredCar(EntryPoint) end


