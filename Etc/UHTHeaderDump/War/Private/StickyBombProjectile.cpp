#include "StickyBombProjectile.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

AStickyBombProjectile::AStickyBombProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BombMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BombMesh"));
    this->AttachCue = NULL;
    this->DetonationDelay = 2.50f;
    this->BombMesh->SetupAttachment(RootComponent);
}

void AStickyBombProjectile::CallDetonateWithLastHitResult() {
}


