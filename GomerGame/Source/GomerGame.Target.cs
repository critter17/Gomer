// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class GomerGameTarget : TargetRules
{
	public GomerGameTarget(TargetInfo Target) : base (Target)
	{
		Type = TargetType.Game;
        ExtraModuleNames.Add("GomerGame");
	}
}
