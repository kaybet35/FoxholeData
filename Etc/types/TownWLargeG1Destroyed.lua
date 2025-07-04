---@meta

---@class ATownWLargeG1Destroyed_C : ATownWLargeGS1Destroyed_C
---@field UberGraphFrame FPointerToUberGraphFrame
local ATownWLargeG1Destroyed_C = {}

---@param OtherActor AActor
function ATownWLargeG1Destroyed_C:ReceiveActorBeginOverlap(OtherActor) end
---@param OtherActor AActor
function ATownWLargeG1Destroyed_C:ReceiveActorEndOverlap(OtherActor) end
---@param EntryPoint int32
function ATownWLargeG1Destroyed_C:ExecuteUbergraph_TownWLargeG1Destroyed(EntryPoint) end


