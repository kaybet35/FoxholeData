#include "SensorReadingProxy.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

ASensorReadingProxy::ASensorReadingProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ProxyMesh"));
    this->Material = NULL;
    this->Mesh->SetupAttachment(RootComponent);
}


