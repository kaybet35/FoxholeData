---@meta

---@class UMagicLeapSecureStorage : UBlueprintFunctionLibrary
local UMagicLeapSecureStorage = {}

---@param Key FString
---@param DataToStore FVector
---@return boolean
function UMagicLeapSecureStorage:PutSecureVector(Key, DataToStore) end
---@param Key FString
---@param DataToStore FTransform
---@return boolean
function UMagicLeapSecureStorage:PutSecureTransform(Key, DataToStore) end
---@param Key FString
---@param DataToStore FString
---@return boolean
function UMagicLeapSecureStorage:PutSecureString(Key, DataToStore) end
---@param Key FString
---@param ObjectToStore USaveGame
---@return boolean
function UMagicLeapSecureStorage:PutSecureSaveGame(Key, ObjectToStore) end
---@param Key FString
---@param DataToStore FRotator
---@return boolean
function UMagicLeapSecureStorage:PutSecureRotator(Key, DataToStore) end
---@param Key FString
---@param DataToStore int64
---@return boolean
function UMagicLeapSecureStorage:PutSecureInt64(Key, DataToStore) end
---@param Key FString
---@param DataToStore int32
---@return boolean
function UMagicLeapSecureStorage:PutSecureInt(Key, DataToStore) end
---@param Key FString
---@param DataToStore float
---@return boolean
function UMagicLeapSecureStorage:PutSecureFloat(Key, DataToStore) end
---@param Key FString
---@param DataToStore uint8
---@return boolean
function UMagicLeapSecureStorage:PutSecureByte(Key, DataToStore) end
---@param Key FString
---@param DataToStore boolean
---@return boolean
function UMagicLeapSecureStorage:PutSecureBool(Key, DataToStore) end
---@param Key FString
---@param DataToStore TArray<int32>
---@return boolean
function UMagicLeapSecureStorage:PutSecureArray(Key, DataToStore) end
---@param Key FString
---@param DataToRetrieve FVector
---@return boolean
function UMagicLeapSecureStorage:GetSecureVector(Key, DataToRetrieve) end
---@param Key FString
---@param DataToRetrieve FTransform
---@return boolean
function UMagicLeapSecureStorage:GetSecureTransform(Key, DataToRetrieve) end
---@param Key FString
---@param DataToRetrieve FString
---@return boolean
function UMagicLeapSecureStorage:GetSecureString(Key, DataToRetrieve) end
---@param Key FString
---@param ObjectToRetrieve USaveGame
---@return boolean
function UMagicLeapSecureStorage:GetSecureSaveGame(Key, ObjectToRetrieve) end
---@param Key FString
---@param DataToRetrieve FRotator
---@return boolean
function UMagicLeapSecureStorage:GetSecureRotator(Key, DataToRetrieve) end
---@param Key FString
---@param DataToRetrieve int64
---@return boolean
function UMagicLeapSecureStorage:GetSecureInt64(Key, DataToRetrieve) end
---@param Key FString
---@param DataToRetrieve int32
---@return boolean
function UMagicLeapSecureStorage:GetSecureInt(Key, DataToRetrieve) end
---@param Key FString
---@param DataToRetrieve float
---@return boolean
function UMagicLeapSecureStorage:GetSecureFloat(Key, DataToRetrieve) end
---@param Key FString
---@param DataToRetrieve uint8
---@return boolean
function UMagicLeapSecureStorage:GetSecureByte(Key, DataToRetrieve) end
---@param Key FString
---@param DataToRetrieve boolean
---@return boolean
function UMagicLeapSecureStorage:GetSecureBool(Key, DataToRetrieve) end
---@param Key FString
---@param DataToRetrieve TArray<int32>
---@return boolean
function UMagicLeapSecureStorage:GetSecureArray(Key, DataToRetrieve) end
---@param Key FString
---@return boolean
function UMagicLeapSecureStorage:DeleteSecureData(Key) end


