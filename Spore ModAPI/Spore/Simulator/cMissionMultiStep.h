#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	class cMissionMultiStep
		: cMission
	{
	public:
		static const uint32_t TYPE = 0x422227c;
		static const uint32_t NOUN_ID = 0x4222283;
	protected:
		int mDataRegister_SpeciesIDs;
		int mDataRegister_PlanetKeys;
		int mSubMissions;
		int mCurrSubMissionIndex;
	};
}