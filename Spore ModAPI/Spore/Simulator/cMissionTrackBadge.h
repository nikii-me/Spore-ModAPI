#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	class cMissionTrackBadge
		: cMission
	{
	protected:
		int mTotalPointsNeeded;
		int mBadgeID;
		int mTrackBadgeState;

	};
}