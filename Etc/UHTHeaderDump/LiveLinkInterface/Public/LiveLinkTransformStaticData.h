#pragma once
#include "CoreMinimal.h"
#include "LiveLinkBaseStaticData.h"
#include "LiveLinkTransformStaticData.generated.h"

USTRUCT(BlueprintType)
struct LIVELINKINTERFACE_API FLiveLinkTransformStaticData : public FLiveLinkBaseStaticData {
    GENERATED_BODY()
public:
    FLiveLinkTransformStaticData();
};

