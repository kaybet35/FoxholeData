---@meta

---@class ABPMediumTankSiegeW_C : AMediumTankBaseW_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field LightTurretTop UStaticMeshComponent
---@field SpotLightTurretTop USpotLightComponent
---@field CommanderSeat3 UVehicleSeatComponent
---@field chassis_0 USkeletalMeshComponent
ABPMediumTankSiegeW_C = {}

---@param IsOn boolean
function ABPMediumTankSiegeW_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPMediumTankSiegeW_C:ExecuteUbergraph_BPMediumTankSiegeW(EntryPoint) end


