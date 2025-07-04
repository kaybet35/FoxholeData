---@meta

---@class ABPSulfurResource_C : AResource
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Resource1 UStaticMeshComponent
---@field Resource2 UStaticMeshComponent
---@field Decal UDecalComponent
---@field Box UBoxComponent
---@field Resource3 UStaticMeshComponent
---@field Timeline_0_NewTrack_0_F3D1FD0D40F5E5263DFF59A717B60DAC FVector
---@field Timeline_0__Direction_F3D1FD0D40F5E5263DFF59A717B60DAC ETimelineDirection::Type
---@field Timeline_0 UTimelineComponent
local ABPSulfurResource_C = {}

function ABPSulfurResource_C:Timeline_0__FinishedFunc() end
function ABPSulfurResource_C:Timeline_0__UpdateFunc() end
---@param Gatherer AWarCharacter
---@param GatherLevel int32
function ABPSulfurResource_C:BPOnGatherHit(Gatherer, GatherLevel) end
---@param EntryPoint int32
function ABPSulfurResource_C:ExecuteUbergraph_BPSulfurResource(EntryPoint) end


