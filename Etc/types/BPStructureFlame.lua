---@meta

---@class ABPStructureFlame_C : AFlameActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field FireLoopSFX UAudioComponent
---@field FireBlazing UParticleSystemComponent
---@field FireHigh UParticleSystemComponent
---@field FireMedium UParticleSystemComponent
---@field FireLow UParticleSystemComponent
---@field DefaultSceneRoot USceneComponent
---@field Flames TArray<UParticleSystemComponent>
local ABPStructureFlame_C = {}

function ABPStructureFlame_C:ReceiveBeginPlay() end
---@param Previous uint8
---@param NewIntensity uint8
function ABPStructureFlame_C:BPOnFireIntensityChanged(Previous, NewIntensity) end
function ABPStructureFlame_C:BPDeactivate() end
---@param EntryPoint int32
function ABPStructureFlame_C:ExecuteUbergraph_BPStructureFlame(EntryPoint) end


