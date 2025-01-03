#pragma once
#include "CoreMinimal.h"
#include "WarReporter.generated.h"

USTRUCT(BlueprintType)
struct FWarReporter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CasualtiesC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CasualtiesW;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FString> OnlineIDListOfAllPlayersJoined;
    
public:
    WAR_API FWarReporter();
};

