---@meta

---@class FMagicLeapHandMesh
---@field Version int32
---@field DataCount int32
---@field Data TArray<FMagicLeapHandMeshBlock>
FMagicLeapHandMesh = {}



---@class FMagicLeapHandMeshBlock
---@field IndexCount int32
---@field VertexCount int32
---@field Vertex TArray<FVector>
---@field Index TArray<int32>
FMagicLeapHandMeshBlock = {}



---@class UMagicLeapHandMeshingComponent : UActorComponent
UMagicLeapHandMeshingComponent = {}

---@param InMRMeshPtr UMRMeshComponent
---@return boolean
function UMagicLeapHandMeshingComponent:DisconnectMRMesh(InMRMeshPtr) end
---@param InMRMeshPtr UMRMeshComponent
---@return boolean
function UMagicLeapHandMeshingComponent:ConnectMRMesh(InMRMeshPtr) end


---@class UMagicLeapHandMeshingFunctionLibrary : UBlueprintFunctionLibrary
UMagicLeapHandMeshingFunctionLibrary = {}

---@param InMRMeshPtr UMRMeshComponent
---@return boolean
function UMagicLeapHandMeshingFunctionLibrary:DisconnectMRMesh(InMRMeshPtr) end
---@return boolean
function UMagicLeapHandMeshingFunctionLibrary:DestroyClient() end
---@return boolean
function UMagicLeapHandMeshingFunctionLibrary:CreateClient() end
---@param InMRMeshPtr UMRMeshComponent
---@return boolean
function UMagicLeapHandMeshingFunctionLibrary:ConnectMRMesh(InMRMeshPtr) end


