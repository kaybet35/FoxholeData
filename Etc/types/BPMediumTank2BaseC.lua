---@meta

---@class ABPMediumTank2BaseC_C : ABattleTank
---@field UberGraphFrame FPointerToUberGraphFrame
---@field chassis USkeletalMeshComponent
---@field Exhaust UParticleSystemComponent
---@field SpotLightBody USpotLightComponent
---@field LightBody UStaticMeshComponent
---@field GunnerSeat1 UVehicleSeatComponent
---@field DriverSeat0 UVehicleSeatComponent
---@field CommanderExit USeatExitComponent
---@field GunnerExit USeatExitComponent
---@field DriverExit USeatExitComponent
---@field CommanderTrigger USeatTriggerComponent
---@field GunnerTrigger USeatTriggerComponent
---@field DriverTrigger USeatTriggerComponent
---@field Camera UCameraComponent
local ABPMediumTank2BaseC_C = {}

---@param IsOn boolean
function ABPMediumTank2BaseC_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPMediumTank2BaseC_C:ExecuteUbergraph_BPMediumTank2BaseC(EntryPoint) end


