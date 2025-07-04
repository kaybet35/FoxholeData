#include "RuntimeVirtualTexture.h"

URuntimeVirtualTexture::URuntimeVirtualTexture() {
    this->MaterialType = ERuntimeVirtualTextureMaterialType::BaseColor_Normal_Specular;
    this->bCompressTextures = true;
    this->bEnable = true;
    this->bClearTextures = true;
    this->bSinglePhysicalSpace = true;
    this->bPrivateSpace = true;
    this->bEnableScalability = false;
    this->Size = -1;
    this->TileCount = 8;
    this->TileSize = 2;
    this->TileBorderSize = 2;
    this->RemoveLowMips = 0;
    this->StreamLowMips = 0;
    this->StreamingTexture = NULL;
}


