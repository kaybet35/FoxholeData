---@meta

---@class ABPMediumTank2RangeW_C : ABPMediumTank2BaseW_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Exhaust2 UParticleSystemComponent
---@field SpotLightTurret USpotLightComponent
---@field LightTurret UStaticMeshComponent
---@field Gunner2Exit USeatExitComponent
---@field Gunner2Trigger USeatTriggerComponent
---@field GunnerSeat2 UVehicleSeatComponent
---@field CommanderSeat3 UVehicleSeatComponent
ABPMediumTank2RangeW_C = {}

---@param IsOn boolean
function ABPMediumTank2RangeW_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPMediumTank2RangeW_C:ExecuteUbergraph_BPMediumTank2RangeW(EntryPoint) end


