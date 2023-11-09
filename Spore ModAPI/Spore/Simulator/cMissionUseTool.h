#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	class cMissionUseTool
		: cMission
	{
	protected:
		int mToolUsed;
		int mUseToolMissionState;

	};
}