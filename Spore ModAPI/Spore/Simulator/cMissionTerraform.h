#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	class cMissionTerraform
		: cMission
	{
	protected:
		int mNeedTerraformingTools;
		int mTerraformMissionState;

	};
}