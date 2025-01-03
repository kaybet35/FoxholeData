---@meta

---@class ABPSalvageTier2Resource_C : AResource
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Resource2 UStaticMeshComponent
---@field Decal UDecalComponent
---@field Box UBoxComponent
---@field Timeline_0_NewTrack_0_1179388D40EF29444E0B4895554C0EE7 FVector
---@field Timeline_0__Direction_1179388D40EF29444E0B4895554C0EE7 ETimelineDirection::Type
---@field Timeline_0 UTimelineComponent
ABPSalvageTier2Resource_C = {}

function ABPSalvageTier2Resource_C:Timeline_0__FinishedFunc() end
function ABPSalvageTier2Resource_C:Timeline_0__UpdateFunc() end
---@param Gatherer AWarCharacter
---@param GatherLevel int32
function ABPSalvageTier2Resource_C:BPOnGatherHit(Gatherer, GatherLevel) end
---@param EntryPoint int32
function ABPSalvageTier2Resource_C:ExecuteUbergraph_BPSalvageTier2Resource(EntryPoint) end


