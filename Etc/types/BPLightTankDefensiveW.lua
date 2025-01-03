---@meta

---@class ABPLightTankDefensiveW_C : ABPLightTankBaseW_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field GunnerSeat1 UVehicleSeatComponent
---@field mainBody USkeletalMeshComponent
ABPLightTankDefensiveW_C = {}

---@param IsOn boolean
function ABPLightTankDefensiveW_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPLightTankDefensiveW_C:ExecuteUbergraph_BPLightTankDefensiveW(EntryPoint) end


