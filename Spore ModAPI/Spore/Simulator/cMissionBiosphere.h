#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	class cMissionBiosphere
		: cMission
	{
	public:
		static const uint32_t TYPE = 0x437443d;
		static const uint32_t NOUN_ID = 0x437444b;
	protected:
		int mCollapseTimer;
		int mNumHealthyKills;
		int mMaxNumHealthyKills;
		int mNumDiseasedKills;
		int mMaxNumDiseasedCreatures;
		int mCurrentBiosphereRow;
		int mInitialNumPlants;
		int mInitialTerraformScore;
		int mBiosphereMissionState;
	};
}