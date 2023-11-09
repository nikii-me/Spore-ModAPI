#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	class cMissionBiosphere
		: cMission
	{
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