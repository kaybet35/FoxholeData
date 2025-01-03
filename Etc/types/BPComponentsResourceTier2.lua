---@meta

---@class ABPComponentsResourceTier2_C : AResource
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Box UBoxComponent
---@field Resource2 UStaticMeshComponent
---@field Decal UDecalComponent
---@field Resource3 UStaticMeshComponent
---@field Timeline_0_NewTrack_0_0310C010428EA8A1AA1A5B9DDCE0EE3E FVector
---@field Timeline_0__Direction_0310C010428EA8A1AA1A5B9DDCE0EE3E ETimelineDirection::Type
---@field Timeline_0 UTimelineComponent
ABPComponentsResourceTier2_C = {}

function ABPComponentsResourceTier2_C:Timeline_0__FinishedFunc() end
function ABPComponentsResourceTier2_C:Timeline_0__UpdateFunc() end
---@param Gatherer AWarCharacter
---@param GatherLevel int32
function ABPComponentsResourceTier2_C:BPOnGatherHit(Gatherer, GatherLevel) end
---@param EntryPoint int32
function ABPComponentsResourceTier2_C:ExecuteUbergraph_BPComponentsResourceTier2(EntryPoint) end


