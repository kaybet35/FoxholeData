---@meta

---@class ABPCoalResourceTier2_C : AResource
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Resource3 UStaticMeshComponent
---@field CoalPile UStaticMeshComponent
---@field Decal UDecalComponent
---@field Resource2 UStaticMeshComponent
---@field Box UBoxComponent
---@field Timeline_0_NewTrack_0_203214FD4C647A29C2ABEC80DA86D914 FVector
---@field Timeline_0__Direction_203214FD4C647A29C2ABEC80DA86D914 ETimelineDirection::Type
---@field Timeline_0 UTimelineComponent
local ABPCoalResourceTier2_C = {}

function ABPCoalResourceTier2_C:Timeline_0__FinishedFunc() end
function ABPCoalResourceTier2_C:Timeline_0__UpdateFunc() end
---@param Gatherer AWarCharacter
---@param GatherLevel int32
function ABPCoalResourceTier2_C:BPOnGatherHit(Gatherer, GatherLevel) end
---@param EntryPoint int32
function ABPCoalResourceTier2_C:ExecuteUbergraph_BPCoalResourceTier2(EntryPoint) end


