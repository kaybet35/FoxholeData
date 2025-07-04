---@meta

---@class ABPRareResource_C : AWorldResource
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Resource1 UStaticMeshComponent
---@field Decal UDecalComponent
---@field Box UBoxComponent
---@field Timeline_0_NewTrack_0_52892B784AC8CBC8E941B1BB187B9F66 FVector
---@field Timeline_0__Direction_52892B784AC8CBC8E941B1BB187B9F66 ETimelineDirection::Type
---@field Timeline_0 UTimelineComponent
local ABPRareResource_C = {}

function ABPRareResource_C:Timeline_0__FinishedFunc() end
function ABPRareResource_C:Timeline_0__UpdateFunc() end
---@param Gatherer AWarCharacter
---@param GatherLevel int32
function ABPRareResource_C:BPOnGatherHit(Gatherer, GatherLevel) end
---@param EntryPoint int32
function ABPRareResource_C:ExecuteUbergraph_BPRareResource(EntryPoint) end


