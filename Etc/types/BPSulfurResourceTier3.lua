---@meta

---@class ABPSulfurResourceTier3_C : AResource
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Decal UDecalComponent
---@field Box UBoxComponent
---@field Resource3 UStaticMeshComponent
---@field Timeline_0_NewTrack_0_A5116ABE47B7C7AB1BA658BBC8A44D20 FVector
---@field Timeline_0__Direction_A5116ABE47B7C7AB1BA658BBC8A44D20 ETimelineDirection::Type
---@field Timeline_0 UTimelineComponent
ABPSulfurResourceTier3_C = {}

function ABPSulfurResourceTier3_C:Timeline_0__FinishedFunc() end
function ABPSulfurResourceTier3_C:Timeline_0__UpdateFunc() end
---@param Gatherer AWarCharacter
---@param GatherLevel int32
function ABPSulfurResourceTier3_C:BPOnGatherHit(Gatherer, GatherLevel) end
---@param EntryPoint int32
function ABPSulfurResourceTier3_C:ExecuteUbergraph_BPSulfurResourceTier3(EntryPoint) end


