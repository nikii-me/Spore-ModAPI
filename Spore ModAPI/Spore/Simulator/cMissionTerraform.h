#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	class cMissionTerraform
		: cMission
	{
	public:
		static const uint32_t TYPE = 0x35988ee;
		static const uint32_t NOUN_ID = 0x35988f4;
	protected:
		int mNeedTerraformingTools;
		int mTerraformMissionState;

	};
}