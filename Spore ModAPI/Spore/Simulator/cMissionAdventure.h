#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	class cMissionAdventure
		: cMission
	{
	protected:
		int mAdventureID;
		int mAdventureState;
	};
}