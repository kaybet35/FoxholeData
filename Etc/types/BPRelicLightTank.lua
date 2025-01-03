---@meta

---@class ABPRelicLightTank_C : ALightTank
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CommanderSeat2 UVehicleSeatComponent
---@field GunnerSeat1 UVehicleSeatComponent
---@field DriverSeat0 UVehicleSeatComponent
---@field CommanderExit USeatExitComponent
---@field GunnerExit USeatExitComponent
---@field DriverExit0 USeatExitComponent
---@field CommanderTrigger USeatTriggerComponent
---@field GunnerTrigger USeatTriggerComponent
---@field DriverTrigger USeatTriggerComponent
---@field ExhaustR UParticleSystemComponent
---@field TurretLightMesh UStaticMeshComponent
---@field TurretLight USpotLightComponent
---@field ExhaustL UParticleSystemComponent
---@field DriveIdle UAudioComponent
---@field FrontLightMesh UStaticMeshComponent
---@field FrontLight USpotLightComponent
---@field Camera UCameraComponent
ABPRelicLightTank_C = {}

---@param IsOn boolean
function ABPRelicLightTank_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPRelicLightTank_C:ExecuteUbergraph_BPRelicLightTank(EntryPoint) end


