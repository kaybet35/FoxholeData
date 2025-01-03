#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "MagicLeapMeshBlockRequest.h"
#include "MagicLeapTrackingMeshInfo.h"
#include "MagicLeapMeshBlockSelectorInterface.generated.h"

UINTERFACE(Blueprintable)
class MAGICLEAP_API UMagicLeapMeshBlockSelectorInterface : public UInterface {
    GENERATED_BODY()
};

class MAGICLEAP_API IMagicLeapMeshBlockSelectorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SelectMeshBlocks(const FMagicLeapTrackingMeshInfo& NewMeshInfo, TArray<FMagicLeapMeshBlockRequest>& RequestedMesh);
    
};

