---@meta

---@class ABPCoalResource_C : AResource
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CoalPile UStaticMeshComponent
---@field Decal UDecalComponent
---@field Resource1 UStaticMeshComponent
---@field Box UBoxComponent
---@field Timeline_0_NewTrack_0_D3521A74464CB0BCF5D9B8AE945964CD FVector
---@field Timeline_0__Direction_D3521A74464CB0BCF5D9B8AE945964CD ETimelineDirection::Type
---@field Timeline_0 UTimelineComponent
ABPCoalResource_C = {}

function ABPCoalResource_C:Timeline_0__FinishedFunc() end
function ABPCoalResource_C:Timeline_0__UpdateFunc() end
---@param Gatherer AWarCharacter
---@param GatherLevel int32
function ABPCoalResource_C:BPOnGatherHit(Gatherer, GatherLevel) end
---@param EntryPoint int32
function ABPCoalResource_C:ExecuteUbergraph_BPCoalResource(EntryPoint) end


