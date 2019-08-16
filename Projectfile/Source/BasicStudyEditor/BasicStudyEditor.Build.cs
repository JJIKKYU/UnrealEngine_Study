using UnrealBuildTool;

public class BasicStudyEditor : ModuleRules
{
    public BasicStudyEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "RHI", "RenderCore", "ShaderCore", "MainFrame", "Slate", "SlateCore", "EditoreStyle" });
        PublicDependencyModuleNames.Add("BasicStduy");
        PrivateDependencyModuleNames.AddRange(new string[] { "UnrealEd" });
    }
}