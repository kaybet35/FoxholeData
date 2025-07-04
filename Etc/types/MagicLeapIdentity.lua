---@meta

---@class FMagicLeapIdentityAttribute
---@field Attribute EMagicLeapIdentityKey
---@field Value FString
local FMagicLeapIdentityAttribute = {}



---@class UMagicLeapIdentity : UObject
local UMagicLeapIdentity = {}

---@param ResultCode EMagicLeapIdentityError
---@param AttributeValue TArray<FMagicLeapIdentityAttribute>
function UMagicLeapIdentity:RequestIdentityAttributeValueDelegate__DelegateSignature(ResultCode, AttributeValue) end
---@param RequestedAttributeList TArray<EMagicLeapIdentityKey>
---@param ResultDelegate FRequestAttributeValueAsyncResultDelegate
---@return EMagicLeapIdentityError
function UMagicLeapIdentity:RequestAttributeValueAsync(RequestedAttributeList, ResultDelegate) end
---@param RequestedAttributeList TArray<EMagicLeapIdentityKey>
---@param RequestedAttributeValues TArray<FMagicLeapIdentityAttribute>
---@return EMagicLeapIdentityError
function UMagicLeapIdentity:RequestAttributeValue(RequestedAttributeList, RequestedAttributeValues) end
---@param ResultCode EMagicLeapIdentityError
---@param AttributesUpdatedSuccessfully TArray<EMagicLeapIdentityKey>
function UMagicLeapIdentity:ModifyIdentityAttributeValueDelegate__DelegateSignature(ResultCode, AttributesUpdatedSuccessfully) end
---@param ResultDelegate FGetAllAvailableAttributesAsyncResultDelegate
function UMagicLeapIdentity:GetAllAvailableAttributesAsync(ResultDelegate) end
---@param AvailableAttributes TArray<EMagicLeapIdentityKey>
---@return EMagicLeapIdentityError
function UMagicLeapIdentity:GetAllAvailableAttributes(AvailableAttributes) end
---@param ResultCode EMagicLeapIdentityError
---@param AvailableAttributes TArray<EMagicLeapIdentityKey>
function UMagicLeapIdentity:AvailableIdentityAttributesDelegate__DelegateSignature(ResultCode, AvailableAttributes) end


