---@meta

---@class ABPMech_C : AMech
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CommanderSeat4 UVehicleSeatComponent
---@field RightGunnerSeat3 UVehicleSeatComponent
---@field LeftGunnerSeat2 UVehicleSeatComponent
---@field GunnerSeat1 UVehicleSeatComponent
---@field DriverSeat0 UVehicleSeatComponent
---@field BackExit USeatExitComponent
---@field DriverExit USeatExitComponent
---@field CommanderTrigger USeatTriggerComponent
---@field RightGunnerTrigger USeatTriggerComponent
---@field LeftGunnerTrigger USeatTriggerComponent
---@field GunnerTrigger USeatTriggerComponent
---@field DriverTrigger USeatTriggerComponent
---@field RightFire UStaticMeshComponent
---@field LeftFire UStaticMeshComponent
---@field FrontLightLeft USpotLightComponent
---@field FrontLightRight USpotLightComponent
---@field DriveIdle UAudioComponent
---@field ExhaustRight UParticleSystemComponent
---@field ExhaustLeft UParticleSystemComponent
---@field FrontLightLeftHeadlight UStaticMeshComponent
---@field FrontLightRightHeadlight UStaticMeshComponent
---@field Camera UCameraComponent
local ABPMech_C = {}

---@param IsOn boolean
function ABPMech_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPMech_C:ExecuteUbergraph_BPMech(EntryPoint) end


