#ifndef UE4SS_SDK_MagicLeapARPin_HPP
#define UE4SS_SDK_MagicLeapARPin_HPP

#include "MagicLeapARPin_enums.hpp"

class UMagicLeapARPinComponent : public USceneComponent
{
    FString ObjectUID;                                                                // 0x01F0 (size: 0x10)
    int32 UserIndex;                                                                  // 0x0200 (size: 0x4)
    EMagicLeapAutoPinType AutoPinType;                                                // 0x0204 (size: 0x1)
    bool bShouldPinActor;                                                             // 0x0205 (size: 0x1)
    TSubclassOf<class UMagicLeapARPinSaveGame> PinDataClass;                          // 0x0208 (size: 0x8)
    FMagicLeapARPinComponentOnPersistentEntityPinned OnPersistentEntityPinned;        // 0x0210 (size: 0x10)
    void PersistentEntityPinned(bool bRestoredOrSynced);
    FMagicLeapARPinComponentOnPersistentEntityPinLost OnPersistentEntityPinLost;      // 0x0220 (size: 0x10)
    void PersistentEntityPinLost();
    FGuid PinnedCFUID;                                                                // 0x0230 (size: 0x10)
    class USceneComponent* PinnedSceneComponent;                                      // 0x0240 (size: 0x8)
    class UMagicLeapARPinSaveGame* PinData;                                           // 0x0248 (size: 0x8)

    void UnPin();
    bool PinSceneComponent(class USceneComponent* ComponentToPin);
    bool PinRestoredOrSynced();
    bool PinActor(class AActor* ActorToPin);
    void PersistentEntityPinned__DelegateSignature(bool bRestoredOrSynced);
    void PersistentEntityPinLost__DelegateSignature();
    bool IsPinned();
    bool GetPinnedPinID(FGuid& PinID);
    class UMagicLeapARPinSaveGame* GetPinData(TSubclassOf<class UMagicLeapARPinSaveGame> PinDataClass);
}; // Size: 0x320

class UMagicLeapARPinFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool IsTrackerValid();
    EMagicLeapPassableWorldError GetNumAvailableARPins(int32& Count);
    EMagicLeapPassableWorldError GetClosestARPin(const FVector& SearchPoint, FGuid& PinID);
    EMagicLeapPassableWorldError GetAvailableARPins(int32 NumRequested, TArray<FGuid>& Pins);
    bool GetARPinPositionAndOrientation(const FGuid& PinID, FVector& Position, FRotator& Orientation, bool& PinFoundInEnvironment);
    EMagicLeapPassableWorldError DestroyTracker();
    EMagicLeapPassableWorldError CreateTracker();
}; // Size: 0x28

class UMagicLeapARPinSaveGame : public USaveGame
{
    FGuid PinnedID;                                                                   // 0x0028 (size: 0x10)
    FTransform ComponentWorldTransform;                                               // 0x0040 (size: 0x30)
    FTransform PinTransform;                                                          // 0x0070 (size: 0x30)

}; // Size: 0xA0

#endif
