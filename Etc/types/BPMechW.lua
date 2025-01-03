---@meta

---@class ABPMechW_C : ASpiderMech
---@field UberGraphFrame FPointerToUberGraphFrame
---@field FireL UStaticMeshComponent
---@field FireR UStaticMeshComponent
---@field VehicleIdle UAudioComponent
---@field Exhaust_L UParticleSystemComponent
---@field Exhaust_R UParticleSystemComponent
---@field SpotLight_Headlight USpotLightComponent
---@field SpotLight_Turret USpotLightComponent
---@field Light_Turret UStaticMeshComponent
---@field Light_Front UStaticMeshComponent
---@field FrontLeftExit USeatExitComponent
---@field BackExit USeatExitComponent
---@field CommanderSeat3 UVehicleSeatComponent
---@field MachineGunnerSeat2 UVehicleSeatComponent
---@field GunnerSeat1 UVehicleSeatComponent
---@field DriverSeat0 UVehicleSeatComponent
---@field RightExit USeatExitComponent
---@field BackLeftExit USeatExitComponent
---@field CommanderTrigger USeatTriggerComponent
---@field MachineGunnerTrigger USeatTriggerComponent
---@field GunnerTrigger USeatTriggerComponent
---@field DriverTrigger USeatTriggerComponent
---@field DriveIdle UAudioComponent
---@field Camera UCameraComponent
ABPMechW_C = {}

---@param IsOn boolean
function ABPMechW_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPMechW_C:ExecuteUbergraph_BPMechW(EntryPoint) end


