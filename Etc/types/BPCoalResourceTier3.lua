---@meta

---@class ABPCoalResourceTier3_C : AResource
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Resource3 UStaticMeshComponent
---@field CoalPile UStaticMeshComponent
---@field Decal UDecalComponent
---@field Box UBoxComponent
---@field Timeline_0_NewTrack_0_D6346FAE476D024EFB3B3CA49E390BD3 FVector
---@field Timeline_0__Direction_D6346FAE476D024EFB3B3CA49E390BD3 ETimelineDirection::Type
---@field Timeline_0 UTimelineComponent
local ABPCoalResourceTier3_C = {}

function ABPCoalResourceTier3_C:Timeline_0__FinishedFunc() end
function ABPCoalResourceTier3_C:Timeline_0__UpdateFunc() end
---@param Gatherer AWarCharacter
---@param GatherLevel int32
function ABPCoalResourceTier3_C:BPOnGatherHit(Gatherer, GatherLevel) end
---@param EntryPoint int32
function ABPCoalResourceTier3_C:ExecuteUbergraph_BPCoalResourceTier3(EntryPoint) end


