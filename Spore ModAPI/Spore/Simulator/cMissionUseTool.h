#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	class cMissionUseTool
		: cMission
	{
	public:
		static const uint32_t TYPE = 0x2aeeeee;
		static const uint32_t NOUN_ID = 0x2adedee;
	protected:
		int mToolUsed;
		int mUseToolMissionState;

	};
}