#include "BillboardComponent.h"

UBillboardComponent::UBillboardComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAbsoluteScale = true;
    this->bHiddenInGame = true;
    this->bUseEditorCompositing = true;
    this->Sprite = NULL;
    this->bIsScreenSizeScaled = false;
    this->ScreenSize = 0.00f;
    this->U = 0.00f;
    this->UL = 0.00f;
    this->V = 0.00f;
    this->VL = 0.00f;
}

void UBillboardComponent::SetUV(int32 NewU, int32 NewUL, int32 NewV, int32 NewVL) {
}

void UBillboardComponent::SetSpriteAndUV(UTexture2D* NewSprite, int32 NewU, int32 NewUL, int32 NewV, int32 NewVL) {
}

void UBillboardComponent::SetSprite(UTexture2D* NewSprite) {
}


