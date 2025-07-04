---@meta

---@class ABPLandingCraftOffensiveC_C : ABPLandingCraftBaseC_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field GunnerSeat2 UVehicleSeatComponent
---@field GunnerExit USeatExitComponent
---@field GunnerTrigger USeatTriggerComponent
---@field GunnerMounting USkeletalMeshComponent
local ABPLandingCraftOffensiveC_C = {}

---@param IsOn boolean
function ABPLandingCraftOffensiveC_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPLandingCraftOffensiveC_C:ExecuteUbergraph_BPLandingCraftOffensiveC(EntryPoint) end


