#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	class cMissionEradicate
		: cMission
	{
	protected:
		int mCanFail;
		int mMaxDiseasedPerHerd;
		int mMinDiseasedPerHerd;
		int mTotalNumKillsNeeded;
		int mEradicateMissionState;
		int mEradicateType;
	};
}