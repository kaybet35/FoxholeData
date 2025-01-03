#pragma once
#include "CoreMinimal.h"
#include "EFactionId.h"
#include "RuinableStructure.h"
#include "DestroyedTeamStructure.generated.h"

UCLASS(Blueprintable)
class WAR_API ADestroyedTeamStructure : public ARuinableStructure {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EFactionId LastHeldFactionID;
    
public:
    ADestroyedTeamStructure(const FObjectInitializer& ObjectInitializer);

};

