#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	class cMissionBalance
		: cMission
	{
	protected:
		int mTargetNumFullRows;
		int mBalanceMissionState;
	};
}