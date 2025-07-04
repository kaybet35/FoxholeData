---@meta

---@class ABPSulfurResourceTier2_C : AResource
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Resource2 UStaticMeshComponent
---@field Decal UDecalComponent
---@field Box UBoxComponent
---@field Resource3 UStaticMeshComponent
---@field Timeline_0_NewTrack_0_FF8051C6402F3222175807A8A18B18EF FVector
---@field Timeline_0__Direction_FF8051C6402F3222175807A8A18B18EF ETimelineDirection::Type
---@field Timeline_0 UTimelineComponent
local ABPSulfurResourceTier2_C = {}

function ABPSulfurResourceTier2_C:Timeline_0__FinishedFunc() end
function ABPSulfurResourceTier2_C:Timeline_0__UpdateFunc() end
---@param Gatherer AWarCharacter
---@param GatherLevel int32
function ABPSulfurResourceTier2_C:BPOnGatherHit(Gatherer, GatherLevel) end
---@param EntryPoint int32
function ABPSulfurResourceTier2_C:ExecuteUbergraph_BPSulfurResourceTier2(EntryPoint) end


