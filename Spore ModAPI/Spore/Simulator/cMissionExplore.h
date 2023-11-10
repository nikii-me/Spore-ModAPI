#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	class cMissionExplore
		: cMission
	{
	public:
		static const uint32_t TYPE = 0x32a12f0;
		static const uint32_t NOUN_ID = 0x32a12f1;
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