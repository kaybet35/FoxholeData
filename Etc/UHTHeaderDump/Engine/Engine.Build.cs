using UnrealBuildTool;

public class Engine : ModuleRules {
    public Engine(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AudioPlatformConfiguration",
            "ClothingSystemRuntimeInterface",
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "PacketHandler",
            "PhysicsCore",
            "Slate",
            "SlateCore",
            "StaticMeshDescription",
            "UMG",
        });
    }
}
