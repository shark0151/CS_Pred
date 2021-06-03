// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CS_Pred : ModuleRules
{
	public CS_Pred(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
