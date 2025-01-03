#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "EStructureProfileType.h"
#include "StructureProfileData.h"
#include "StructureProfileList.generated.h"

UCLASS(Blueprintable)
class WAR_API AStructureProfileList : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EStructureProfileType, FStructureProfileData> StructureProfileMap;
    
public:
    AStructureProfileList(const FObjectInitializer& ObjectInitializer);

};

