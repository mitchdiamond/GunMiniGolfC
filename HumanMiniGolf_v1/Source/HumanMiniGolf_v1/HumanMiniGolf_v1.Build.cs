// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class HumanMiniGolf_v1 : ModuleRules
{
	public HumanMiniGolf_v1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
