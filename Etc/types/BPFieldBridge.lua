---@meta

---@class ABPFieldBridge_C : AFieldBridge
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RampFrontBuildFootprint UBoxComponent
---@field RampBackBuildFootprint UBoxComponent
---@field PillarFront UStaticMeshComponent
---@field PillarBack UStaticMeshComponent
---@field SandbagTarget USceneComponent
---@field SplineComponent2 USplineConnectorComponent
---@field Audio UAudioComponent
---@field Sandbag USplineConnectorComponent
---@field BackSocket UBuildSocketComponent
---@field FrontSocket UBuildSocketComponent
---@field Timeline_0_NewTrack_0_738F45B945E6F66E508CF1BDC736E93C FVector
---@field Timeline_0__Direction_738F45B945E6F66E508CF1BDC736E93C ETimelineDirection::Type
---@field Timeline_0 UTimelineComponent
ABPFieldBridge_C = {}

function ABPFieldBridge_C:Timeline_0__FinishedFunc() end
function ABPFieldBridge_C:Timeline_0__UpdateFunc() end
function ABPFieldBridge_C:ReceiveBeginPlay() end
function ABPFieldBridge_C:BPOnVehicleDrivingOverDamage() end
---@param EntryPoint int32
function ABPFieldBridge_C:ExecuteUbergraph_BPFieldBridge(EntryPoint) end


