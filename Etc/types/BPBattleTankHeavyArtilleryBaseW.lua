---@meta

---@class ABPBattleTankHeavyArtilleryBaseW_C : ABattleTank
---@field UberGraphFrame FPointerToUberGraphFrame
---@field EngineerSeat3 UVehicleSeatComponent
---@field EngineerExit USeatExitComponent
---@field EngineerTrigger USeatTriggerComponent
---@field FrontSpotLight USpotLightComponent
---@field Camera UCameraComponent
---@field Exhaust UParticleSystemComponent
---@field FrontLight UStaticMeshComponent
---@field mainBody USkeletalMeshComponent
---@field CommanderExit USeatExitComponent
---@field GunnerExit USeatExitComponent
---@field DriverExit USeatExitComponent
---@field CommanderTrigger USeatTriggerComponent
---@field GunnerTrigger USeatTriggerComponent
---@field DriverTrigger USeatTriggerComponent
---@field CommanderSeat2 UVehicleSeatComponent
---@field GunnerSeat1 UVehicleSeatComponent
---@field DriverSeat0 UVehicleSeatComponent
ABPBattleTankHeavyArtilleryBaseW_C = {}

---@param IsOn boolean
function ABPBattleTankHeavyArtilleryBaseW_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPBattleTankHeavyArtilleryBaseW_C:ExecuteUbergraph_BPBattleTankHeavyArtilleryBaseW(EntryPoint) end


