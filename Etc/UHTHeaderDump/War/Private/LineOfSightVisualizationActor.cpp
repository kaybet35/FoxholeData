#include "LineOfSightVisualizationActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ProceduralMeshComponent -ObjectName=ProceduralMeshComponent -FallbackName=ProceduralMeshComponent

ALineOfSightVisualizationActor::ALineOfSightVisualizationActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("LineOfSightMesh"));
    this->WorkSplittingFactor = 3;
}


