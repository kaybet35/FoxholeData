---@meta

---@class ABPGunboatC_C : AGunboat
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
---@field Exhaust1 UParticleSystemComponent
---@field Exhaust UParticleSystemComponent
---@field StarboardGunnerExit USeatExitComponent
---@field PortGunnerExit USeatExitComponent
---@field BowGunnerExit USeatExitComponent
---@field DriverExit USeatExitComponent
---@field StarboardGunnerTrigger USeatTriggerComponent
---@field PortGunnerSeat3 UVehicleSeatComponent
---@field StarboardGunnerSeat2 UVehicleSeatComponent
---@field BowGunnerSeat1 UVehicleSeatComponent
---@field DriverSeat0 UVehicleSeatComponent
---@field PortGunnerTrigger USeatTriggerComponent
---@field BowGunnerTrigger USeatTriggerComponent
---@field DriverTrigger USeatTriggerComponent
---@field LightRight UStaticMeshComponent
---@field SpotLightRight USpotLightComponent
---@field LightLeft UStaticMeshComponent
---@field SpotLightLeft USpotLightComponent
---@field Idle UAudioComponent
---@field Camera UCameraComponent
local ABPGunboatC_C = {}

---@param IsOn boolean
function ABPGunboatC_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPGunboatC_C:ExecuteUbergraph_BPGunboatC(EntryPoint) end


