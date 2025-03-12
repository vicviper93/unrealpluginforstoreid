// Some copyright should be here...

using UnrealBuildTool;

public class MyIDPlugin : ModuleRules
{
    public MyIDPlugin(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[]
        {
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTasks"
        });

        PrivateDependencyModuleNames.AddRange(new string[]
        {
            "BlueprintGraph"
        });
    }
}
