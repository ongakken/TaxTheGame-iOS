// Copyright 2019 SMD Technologies, s.r.o. All rights reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class TaxTheGameTarget : TargetRules
{
	public TaxTheGameTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "TaxTheGame" } );
	}
}
