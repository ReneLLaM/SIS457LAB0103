// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Biografia : ModuleRules
{
	public Biografia(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
