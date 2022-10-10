// Copyright Epic Games, Inc. All Rights Reserved.

#include "BiografiaGameMode.h"
#include "BiografiaPawn.h"

ABiografiaGameMode::ABiografiaGameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = ABiografiaPawn::StaticClass();
}
