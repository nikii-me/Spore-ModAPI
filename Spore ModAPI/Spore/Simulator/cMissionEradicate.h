#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	class cMissionEradicate
		: cMission
	{
	public:
		static const uint32_t TYPE = 0x2f9998c;
		static const uint32_t NOUN_ID = 0x2f99994;
	protected:
		int mCanFail;
		int mMaxDiseasedPerHerd;
		int mMinDiseasedPerHerd;
		int mTotalNumKillsNeeded;
		int mEradicateMissionState;
		int mEradicateType;
	};
}