#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	class cMissionTrackBadge
		: cMission
	{
	public:
		static const uint32_t TYPE = 0x463327e;
		static const uint32_t NOUN_ID = 0x4633285;
	protected:
		int mTotalPointsNeeded;
		int mBadgeID;
		int mTrackBadgeState;

	};
}