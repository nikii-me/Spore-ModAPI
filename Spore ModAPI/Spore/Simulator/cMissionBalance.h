#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	class cMissionBalance
		: cMission
	{
	public:
		static const uint32_t TYPE = 0x3470927;
		static const uint32_t NOUN_ID = 0x347092e;
	protected:
		int mTargetNumFullRows;
		int mBalanceMissionState;
	};
}