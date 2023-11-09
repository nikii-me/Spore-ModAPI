#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	class cMissionMultiStep
		: cMission
	{
	protected:
		int mDataRegister_SpeciesIDs;
		int mDataRegister_PlanetKeys;
		int mSubMissions;
		int mCurrSubMissionIndex;
	};
}