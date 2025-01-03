#include "MapExtentMarker.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

AMapExtentMarker::AMapExtentMarker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Location = EMapExtentMarkerLocation::TopLeft;
    this->MarkerScene = CreateDefaultSubobject<USceneComponent>(TEXT("MapMarkerScene"));
}


