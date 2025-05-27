---@meta

---@class ABPArmoredCar2MultiW_C : ABPArmoredCarBaseW_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field PayloadInstancedStaticMesh UPayloadInstancedStaticMeshComponent
---@field LightRear UStaticMeshComponent
---@field LightRearEmitter UPointLightComponent
---@field mainBody USkeletalMeshComponent
ABPArmoredCar2MultiW_C = {}

---@param IsOn boolean
function ABPArmoredCar2MultiW_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPArmoredCar2MultiW_C:ExecuteUbergraph_BPArmoredCar2MultiW(EntryPoint) end


