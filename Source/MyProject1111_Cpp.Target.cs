// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class MyProject1111_CppTarget : TargetRules
{
	public MyProject1111_CppTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V5;
		

		ExtraModuleNames.AddRange( new string[] { "MyProject1111_Cpp" } );
	}
}
