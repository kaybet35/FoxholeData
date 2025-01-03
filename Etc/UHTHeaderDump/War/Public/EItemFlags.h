#pragma once
#include "CoreMinimal.h"
#include "EItemFlags.generated.h"

UENUM()
enum class EItemFlags {
    None,
    Default,
    BasicMaterial,
    GasMaskFilter = 4,
    Grenade = 8,
    HeavyAmmo = 16,
    HeavyWeapon = 32,
    KineticAmmo = 64,
    KineticWeapon = 128,
    Material = 256,
    MedicalAmmo = 512,
    MedicalKit = 1024,
    RawResource = 2048,
    LightKineticAmmo = 4096,
    PistolAmmo = 8192,
    LightExplosiveAmmo = 16384,
};

