---@meta

---@class ABPGunboatW_C : AGunboat
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SpotterExit USeatExitComponent
---@field SpotterTrigger USeatTriggerComponent
---@field SpotterSeat4 UVehicleSeatComponent
---@field WaveBreakForeLeft UParticleSystemComponent
---@field WaveBreakAftRight UParticleSystemComponent
---@field WaveBreakAftLeft UParticleSystemComponent
---@field WaveBreakForeRight UParticleSystemComponent
---@field WakeFore UParticleSystemComponent
---@field WakeAft UParticleSystemComponent
---@field BoatHullMesh UBoatHullMeshComponent
---@field BPWaterStencilComponent UBPWaterStencilComponent_C
---@field SpotLight2 USpotLightComponent
---@field PointLight3 UPointLightComponent
---@field PointLight2 UPointLightComponent
---@field Lights USceneComponent
---@field BPStructureInteriorArea1 UBPStructureInteriorArea_C
---@field ExhaustRight UParticleSystemComponent
---@field RoofMesh USkeletalMeshComponent
---@field ExhaustLeft UParticleSystemComponent
---@field MainGunnerExit USeatExitComponent
---@field SternGunnerExit USeatExitComponent
---@field BowGunnerExit USeatExitComponent
---@field DriverExit USeatExitComponent
---@field MainGunnerTrigger USeatTriggerComponent
---@field SternGunnerSeat3 UVehicleSeatComponent
---@field MainGunnerSeat2 UVehicleSeatComponent
---@field BowGunnerSeat1 UVehicleSeatComponent
---@field DriverSeat0 UVehicleSeatComponent
---@field SternGunnerTrigger USeatTriggerComponent
---@field BowGunnerTrigger USeatTriggerComponent
---@field DriverTrigger USeatTriggerComponent
---@field Light UStaticMeshComponent
---@field SpotLight USpotLightComponent
---@field Idle UAudioComponent
---@field Camera UCameraComponent
local ABPGunboatW_C = {}

---@param IsOn boolean
function ABPGunboatW_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPGunboatW_C:ExecuteUbergraph_BPGunboatW(EntryPoint) end


