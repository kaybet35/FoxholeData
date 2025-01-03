---@meta

---@class ABPArmoredCar2LargeW_C : ABPArmoredCarBaseW_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field LightRearEmitter UPointLightComponent
---@field LightRear UStaticMeshComponent
---@field mainBody USkeletalMeshComponent
ABPArmoredCar2LargeW_C = {}

---@param IsOn boolean
function ABPArmoredCar2LargeW_C:BPOnVehicleOn(IsOn) end
---@param EntryPoint int32
function ABPArmoredCar2LargeW_C:ExecuteUbergraph_BPArmoredCar2LargeW(EntryPoint) end


