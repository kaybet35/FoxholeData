#pragma once
#include "CoreMinimal.h"
#include "CharacterRenderInfo.h"
#include "EOutfitMeshInfoType.h"
#include "OutfitMeshInfo.generated.h"

USTRUCT(BlueprintType)
struct FOutfitMeshInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EOutfitMeshInfoType, FCharacterRenderInfo> OutfitMeshTable;
    
    WAR_API FOutfitMeshInfo();
};

