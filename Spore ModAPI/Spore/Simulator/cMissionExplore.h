#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	class cMissionExplore
		: cMission
	{
	protected:
		int mCityVisitInfos;
		int mExploreType;
		int mNumCitiesToVisit;
		int mEffectHeight;
		int mCityVisitInfosInitialized;
		int mNumVisitedCities;
		int mVisitRadius;
		int mVisitCities;
		int mExploreMissionState;
	};
}