---@meta

---@class ABPGateT1_C : AGate
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RightLowerBuildFootprint UBPBuildFootprintBoxComponent_C
---@field LeftLowerBuildFootprint UBPBuildFootprintBoxComponent_C
---@field LowerBuildFootprint UBPBuildFootprintBoxComponent_C
---@field LandscapeBuildFootprint UBPBuildFootprintBoxComponent_C
---@field DamageBoxRight UBoxComponent
---@field DamageBoxLeft UBoxComponent
---@field MultiplexedSkeletalMesh UMultiplexedSkeletalMeshComponent
---@field PillarRight UStaticMeshComponent
---@field PillarLeft UStaticMeshComponent
---@field LeftSocket UBuildSocketComponent
---@field RightSocket UBuildSocketComponent
---@field Decal UDecalComponent
---@field FlagMesh UStaticMeshComponent
ABPGateT1_C = {}

---@param VisualTeamId int32
function ABPGateT1_C:BPSetTeamVisuals(VisualTeamId) end
---@param EntryPoint int32
function ABPGateT1_C:ExecuteUbergraph_BPGateT1(EntryPoint) end


