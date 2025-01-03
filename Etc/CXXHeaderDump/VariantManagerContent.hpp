#ifndef UE4SS_SDK_VariantManagerContent_HPP
#define UE4SS_SDK_VariantManagerContent_HPP

#include "VariantManagerContent_enums.hpp"

struct FCapturedPropSegment
{
    FString PropertyName;                                                             // 0x0000 (size: 0x10)
    int32 PropertyIndex;                                                              // 0x0010 (size: 0x4)
    FString ComponentName;                                                            // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FFunctionCaller
{
    FName FunctionName;                                                               // 0x0000 (size: 0x8)

}; // Size: 0x8

class ALevelVariantSetsActor : public AActor
{
    FSoftObjectPath LevelVariantSets;                                                 // 0x0218 (size: 0x18)

    bool SwitchOnVariantByName(FString VariantSetName, FString VariantName);
    bool SwitchOnVariantByIndex(int32 VariantSetIndex, int32 VariantIndex);
    void SetLevelVariantSets(class ULevelVariantSets* InVariantSets);
    class ULevelVariantSets* GetLevelVariantSets(bool bLoad);
}; // Size: 0x230

class ASwitchActor : public AActor
{
    class USceneComponent* SceneComponent;                                            // 0x0230 (size: 0x8)

    void SelectOption(int32 OptionIndex);
    int32 GetSelectedOption();
    TArray<class AActor*> GetOptions();
}; // Size: 0x238

class ULevelVariantSets : public UObject
{
    UClass* DirectorClass;                                                            // 0x0028 (size: 0x8)
    TArray<class UVariantSet*> VariantSets;                                           // 0x0030 (size: 0x10)

    class UVariantSet* GetVariantSetByName(FString VariantSetName);
    class UVariantSet* GetVariantSet(int32 VariantSetIndex);
    int32 GetNumVariantSets();
}; // Size: 0x90

class ULevelVariantSetsFunctionDirector : public UObject
{
}; // Size: 0x40

class UPropertyValue : public UObject
{
    TArray<class UProperty*> Properties;                                              // 0x0080 (size: 0x10)
    TArray<int32> PropertyIndices;                                                    // 0x0090 (size: 0x10)
    TArray<FCapturedPropSegment> CapturedPropSegments;                                // 0x00A0 (size: 0x10)
    FString FullDisplayString;                                                        // 0x00B0 (size: 0x10)
    FName PropertySetterName;                                                         // 0x00C0 (size: 0x8)
    TMap<class FString, class FString> PropertySetterParameterDefaults;               // 0x00C8 (size: 0x50)
    bool bHasRecordedData;                                                            // 0x0118 (size: 0x1)
    UClass* LeafPropertyClass;                                                        // 0x0120 (size: 0x8)
    TArray<uint8> ValueBytes;                                                         // 0x0128 (size: 0x10)
    EPropertyValueCategory PropCategory;                                              // 0x0138 (size: 0x1)

    bool HasRecordedData();
    FText GetPropertyTooltip();
    FString GetFullDisplayString();
}; // Size: 0x1A8

class UPropertyValueColor : public UPropertyValue
{
}; // Size: 0x1A8

class UPropertyValueMaterial : public UPropertyValue
{
}; // Size: 0x1A8

class UPropertyValueOption : public UPropertyValue
{
}; // Size: 0x1A8

class UPropertyValueTransform : public UPropertyValue
{
}; // Size: 0x1A8

class UPropertyValueVisibility : public UPropertyValue
{
}; // Size: 0x1A8

class UVariant : public UObject
{
    FText DisplayText;                                                                // 0x0028 (size: 0x18)
    TArray<class UVariantObjectBinding*> ObjectBindings;                              // 0x0058 (size: 0x10)

    void SwitchOn();
    void SetDisplayText(const FText& NewDisplayText);
    int32 GetNumActors();
    FText GetDisplayText();
    class AActor* GetActor(int32 ActorIndex);
}; // Size: 0x68

class UVariantObjectBinding : public UObject
{
    FSoftObjectPath ObjectPtr;                                                        // 0x0028 (size: 0x18)
    TLazyObjectPtr<class UObject> LazyObjectPtr;                                      // 0x0040 (size: 0x1C)
    TArray<class UPropertyValue*> CapturedProperties;                                 // 0x0060 (size: 0x10)
    TArray<FFunctionCaller> FunctionCallers;                                          // 0x0070 (size: 0x10)

}; // Size: 0x80

class UVariantSet : public UObject
{
    FText DisplayText;                                                                // 0x0028 (size: 0x18)
    bool bExpanded;                                                                   // 0x0058 (size: 0x1)
    TArray<class UVariant*> Variants;                                                 // 0x0060 (size: 0x10)

    void SetDisplayText(const FText& NewDisplayText);
    class UVariant* GetVariantByName(FString VariantName);
    class UVariant* GetVariant(int32 VariantIndex);
    int32 GetNumVariants();
    FText GetDisplayText();
}; // Size: 0x70

#endif
