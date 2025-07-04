---@meta

---@class ABPLightTankW_C : ABPLightTankBaseW_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field GunnerSeat1 UVehicleSeatComponent
---@field mainBody USkeletalMeshComponent
local ABPLightTankW_C = {}

---@param IsOn boolean
function ABPLightTankW_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPLightTankW_C:ExecuteUbergraph_BPLightTankW(EntryPoint) end


