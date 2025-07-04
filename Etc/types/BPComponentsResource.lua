---@meta

---@class ABPComponentsResource_C : AResource
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Box UBoxComponent
---@field Resource1 UStaticMeshComponent
---@field Resource2 UStaticMeshComponent
---@field Decal UDecalComponent
---@field Resource3 UStaticMeshComponent
---@field Timeline_0_NewTrack_0_6E986F224EDBB9D65E15E9B5A19DF826 FVector
---@field Timeline_0__Direction_6E986F224EDBB9D65E15E9B5A19DF826 ETimelineDirection::Type
---@field Timeline_0 UTimelineComponent
local ABPComponentsResource_C = {}

function ABPComponentsResource_C:Timeline_0__FinishedFunc() end
function ABPComponentsResource_C:Timeline_0__UpdateFunc() end
---@param Gatherer AWarCharacter
---@param GatherLevel int32
function ABPComponentsResource_C:BPOnGatherHit(Gatherer, GatherLevel) end
---@param EntryPoint int32
function ABPComponentsResource_C:ExecuteUbergraph_BPComponentsResource(EntryPoint) end


