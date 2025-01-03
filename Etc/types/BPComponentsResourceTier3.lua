---@meta

---@class ABPComponentsResourceTier3_C : AResource
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Box UBoxComponent
---@field Decal UDecalComponent
---@field Resource3 UStaticMeshComponent
---@field Timeline_0_NewTrack_0_A8663038408E9FA0A5E759B87F71B0BB FVector
---@field Timeline_0__Direction_A8663038408E9FA0A5E759B87F71B0BB ETimelineDirection::Type
---@field Timeline_0 UTimelineComponent
ABPComponentsResourceTier3_C = {}

function ABPComponentsResourceTier3_C:Timeline_0__FinishedFunc() end
function ABPComponentsResourceTier3_C:Timeline_0__UpdateFunc() end
---@param Gatherer AWarCharacter
---@param GatherLevel int32
function ABPComponentsResourceTier3_C:BPOnGatherHit(Gatherer, GatherLevel) end
---@param EntryPoint int32
function ABPComponentsResourceTier3_C:ExecuteUbergraph_BPComponentsResourceTier3(EntryPoint) end


