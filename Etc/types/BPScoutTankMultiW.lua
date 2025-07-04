---@meta

---@class ABPScoutTankMultiW_C : AScoutTank
---@field UberGraphFrame FPointerToUberGraphFrame
---@field PayloadInstancedStaticMesh1 UPayloadInstancedStaticMeshComponent
---@field PayloadInstancedStaticMesh0 UPayloadInstancedStaticMeshComponent
---@field Camera UCameraComponent
---@field ExhaustR UParticleSystemComponent
---@field ExhaustL UParticleSystemComponent
---@field LightBody UStaticMeshComponent
---@field SpotLightBody USpotLightComponent
---@field GunnerExit USeatExitComponent
---@field GunnerTrigger USeatTriggerComponent
---@field GunnerSeat1 UVehicleSeatComponent
---@field DriverExit USeatExitComponent
---@field DriverTrigger USeatTriggerComponent
---@field DriverSeat0 UVehicleSeatComponent
---@field chassis USkeletalMeshComponent
local ABPScoutTankMultiW_C = {}

---@param IsOn boolean
function ABPScoutTankMultiW_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPScoutTankMultiW_C:ExecuteUbergraph_BPScoutTankMultiW(EntryPoint) end


