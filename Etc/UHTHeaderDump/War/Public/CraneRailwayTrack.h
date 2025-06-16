#pragma once
#include "CoreMinimal.h"
#include "RailwayTrack.h"
#include "CraneRailwayTrack.generated.h"

UCLASS(Blueprintable)
class WAR_API ACraneRailwayTrack : public ARailwayTrack {
    GENERATED_BODY()
public:
    ACraneRailwayTrack(const FObjectInitializer& ObjectInitializer);

};

