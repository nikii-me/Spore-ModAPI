#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	class cMissionScan
		: cMission
	{
	public:
		static const uint32_t TYPE = 0x3470926;
		static const uint32_t NOUN_ID = 0x347092d;
	protected:
		int mScanMissionState;
	};
}