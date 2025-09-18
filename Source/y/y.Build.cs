// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class y : ModuleRules
{
	public y(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "UMG", "Slate", "SlateCore" });

		PrivateDependencyModuleNames.AddRange(new string[] { "Projects", "ApplicationCore", "DeveloperSettings" });

		PublicIncludePaths.AddRange(new string[] { });
		PrivateIncludePaths.AddRange(new string[] { });
	}
}
