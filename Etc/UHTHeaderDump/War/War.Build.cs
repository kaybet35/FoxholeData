using UnrealBuildTool;

public class War : ModuleRules {
    public War(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "CableComponent",
            "Core",
            "CoreUObject",
            "DiscordRichPresenceModule",
            "Engine",
            "Foliage",
            "Landscape",
            "OnlineSubsystemUtils",
            "ProceduralMeshComponent",
            "ReplicationGraph",
            "SlateCore",
            "UMG",
        });
    }
}
