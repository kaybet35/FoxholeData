#include "PhysicsConstraintActor.h"
#include "PhysicsConstraintComponent.h"

APhysicsConstraintActor::APhysicsConstraintActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHidden = true;
    this->RootComponent = CreateDefaultSubobject<UPhysicsConstraintComponent>(TEXT("MyConstraintComp"));
    this->ConstraintComp = (UPhysicsConstraintComponent*)RootComponent;
    this->ConstraintActor1 = NULL;
    this->ConstraintActor2 = NULL;
    this->bDisableCollision = false;
}


