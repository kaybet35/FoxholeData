---@meta

---@class ABPMediumTank3CBase_C : ABPMediumTankBase_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Exhaust_R UParticleSystemComponent
---@field SpotLightBodyRight USpotLightComponent
---@field SpotLightBodyLeft USpotLightComponent
---@field Headlight_L UStaticMeshComponent
---@field Headlight_R UStaticMeshComponent
---@field CommanderSeat3 UVehicleSeatComponent
---@field Gunner2Seat2 UVehicleSeatComponent
---@field GunnerSeat1 UVehicleSeatComponent
---@field DriveSeat0 UVehicleSeatComponent
---@field Gunner2Exit USeatExitComponent
---@field Gunner2Trigger USeatTriggerComponent
local ABPMediumTank3CBase_C = {}

---@param IsOn boolean
function ABPMediumTank3CBase_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPMediumTank3CBase_C:ExecuteUbergraph_BPMediumTank3CBase(EntryPoint) end


