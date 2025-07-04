---@meta

---@class ABPSalvageResource_C : AResource
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Resource1 UStaticMeshComponent
---@field Decal UDecalComponent
---@field Box UBoxComponent
---@field Timeline_0_NewTrack_0_DC99FEDA428B6A765EDAFC9BA85C56E6 FVector
---@field Timeline_0__Direction_DC99FEDA428B6A765EDAFC9BA85C56E6 ETimelineDirection::Type
---@field Timeline_0 UTimelineComponent
local ABPSalvageResource_C = {}

function ABPSalvageResource_C:Timeline_0__FinishedFunc() end
function ABPSalvageResource_C:Timeline_0__UpdateFunc() end
---@param Gatherer AWarCharacter
---@param GatherLevel int32
function ABPSalvageResource_C:BPOnGatherHit(Gatherer, GatherLevel) end
---@param EntryPoint int32
function ABPSalvageResource_C:ExecuteUbergraph_BPSalvageResource(EntryPoint) end


