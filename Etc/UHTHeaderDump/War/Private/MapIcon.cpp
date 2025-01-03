#include "MapIcon.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

AMapIcon::AMapIcon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("MapIcon"));
    this->MapTeamId = EMapTeamId::Colonial;
    this->MapIconType = EMapIconType::None;
    this->DefaultSceneComponent = (USceneComponent*)RootComponent;
}


