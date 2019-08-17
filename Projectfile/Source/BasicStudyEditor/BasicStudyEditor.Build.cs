using UnrealBuildTool;
using System.Collections.Generic;


public class BasicStudyEditor : ModuleRules
{
    public BasicStudyEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "RHI", "RenderCore", "MainFrame", "Slate", "SlateCore", "EditorStyle" });
        PublicDependencyModuleNames.Add("BasicStudy");
        PrivateDependencyModuleNames.AddRange(new string[] { "UnrealEd" });
    }
}