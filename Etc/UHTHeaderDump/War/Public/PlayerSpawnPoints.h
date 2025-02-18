#pragma once
#include "CoreMinimal.h"
#include "ESpawnPointCategory.h"
#include "GlobalSpawnPoint.h"
#include "PlayerSpawnPoints.generated.h"

USTRUCT(BlueprintType)
struct FPlayerSpawnPoints {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalSpawnPoint StaticBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalSpawnPoint ForwardBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalSpawnPoint MedicalBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnPointCategory SelectedCategory;
    
    WAR_API FPlayerSpawnPoints();
};

