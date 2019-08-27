// Copyright 2019 SMD Technologies, s.r.o. All rights reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class TaxTheGameEditorTarget : TargetRules
{
	public TaxTheGameEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "TaxTheGame" } );
	}
}
