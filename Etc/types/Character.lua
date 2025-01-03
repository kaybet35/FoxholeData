---@meta

---@class ACharacter_C : APlayerCharacter
---@field UberGraphFrame FPointerToUberGraphFrame
---@field PlayerFire UParticleSystemComponent
---@field IKLeftHandLocation FVector
---@field LeftHandHit boolean
ACharacter_C = {}

---@param SocketName FName
---@param Distance float
---@param Out_Hit_Location FVector
---@param Is_WallHit boolean
ACharacter_C['IK Trace'] = function(SocketName, Distance, Out_Hit_Location, Is_WallHit) end
---@param bState boolean
function ACharacter_C:BPUpdateHeatVisuals(bState) end
---@param DeltaSeconds float
function ACharacter_C:ReceiveTick(DeltaSeconds) end
---@param Position FVector
function ACharacter_C:BPUpdateMaterialParameters(Position) end
---@param EntryPoint int32
function ACharacter_C:ExecuteUbergraph_Character(EntryPoint) end


