#pragma once
#include <Spore\Simulator\cMission.h>

namespace Simulator
{
	class cMissionMakeAlly
		: cMission
	{
	public:
		static const uint32_t TYPE = 0x4f77498;
		static const uint32_t NOUN_ID = 0x4f77499;
	protected:
		int SPG_FirstAlliancePossible;
		int mbAllianceBecamePossible;
		int mMakeAllyState;

	};
}